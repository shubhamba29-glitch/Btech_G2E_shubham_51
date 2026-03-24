#include<stdio.h>
int main(){
    int n,i ;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter  elements:\n");
    for( i=0; i<n; i++) {
        
    scanf("%d",&arr[i]);
}
    int max=arr[n];
    for( i=1; i<n; i++){
    if(arr[i]>max){
    max= arr[i];
    }
    }
printf("maximum element:%d", max);
return 0;
}
