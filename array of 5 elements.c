#include <stdio.h>
int main() 
{
    int arr[5];
    int i;
    printf("enter 5 integers:\n");
    for (i=0;i<5;i++)
    { 
        printf("enter element %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    { 
        printf("element at index %d= %d\n",i,arr[i]);
    }
    return 0;
    
}