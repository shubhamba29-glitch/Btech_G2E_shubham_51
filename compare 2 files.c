#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char ch1, ch2;
    int flag = 1;

    
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    
    if(fp1 == NULL || fp2 == NULL) {
        printf("Error opening files!\n");
        exit(0);
    }

    
    while(1) {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        if(ch1 != ch2) {
            flag = 0;
            break;
        }

        if(ch1 == EOF && ch2 == EOF) {
            break;
        }
    }

    
    if(flag)
        printf("Files are same\n");
    else
        printf("Files are different\n");

    
    fclose(fp1);
    fclose(fp2);

    return 0;
}