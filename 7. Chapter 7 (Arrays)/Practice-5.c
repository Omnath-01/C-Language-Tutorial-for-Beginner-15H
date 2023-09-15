// Q.5 Write a program containg a function which reverse the array passed to it 

#include<stdio.h>
int reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        // Swap i with n-i-1
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;  
        // Swap 0 with n-1
        // Swap 1 with n-2
        // Swap 2 with n-3
        // .
        // Swap i with n-i-1
        // .
        // Till n/2 - 1 starting from 0   
    }
}
// void display(int * ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", *ptr);
//         ptr++;
//     }
//     printf("\n");
// }

int main(){ 
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // display(arr, 7);
    reverse(arr, 7);
    for (int i = 0; i < 7; i++)
    {
       printf("The value of %d element is : %d\n",i,arr[i]);
    }
    
    return 0;
}
 