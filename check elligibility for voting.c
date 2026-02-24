
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age;");
    scanf("%d",&age);
    if (age>=18)
    { 
        printf("congratulations! you are eligible to vote.\n");
    }
    else{
        printf("sorry! you are not eligible.\n");
        printf("you need to wait %d more years.\n",18 - age);
        
    }

    return 0;
    
}