// Q1.create a two dimensional vector using structures in C


#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1, v2;
    v1.x =34;
    v1.y =54;
    printf("X is dim %d and Y is dim %d\n",v1.x,v1.y);
    v2.x =3245;
    v2.y =345;
    printf("X is dim %d and Y is dim %d\n",v2.x,v2.y);
}