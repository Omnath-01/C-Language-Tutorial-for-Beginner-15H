// Q.2 write a function sumVector() which returns the sum of two vectors passed to it 
//     the vector must be two -Dimensional

#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};
struct vector sumVector(struct vector  v1, struct vector v2){
    struct vector results;
    results.x = v1.x + v2.x;
    results.y = v1.y + v2.y;
}
int main(){
    struct vector v1, v2,sum;

    v1.x =4;
    v1.y =9;
    printf("X is dim %d and Y is dim %d\n",v1.x,v1.y);

    v2.x =5;
    v2.y =4;
    printf("X is dim %d and Y is dim %d\n",v2.x,v2.y);

    sum = sumVector(v1, v2);
    printf("X dim of results is %d and Y is dim %d\n",sum.x, sum.y);
    return 0;
}