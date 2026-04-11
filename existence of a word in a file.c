#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char word[50], str[100];
    int count = 0;

    
    fp = fopen("file.txt", "r");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    
    printf("Enter word to search: ");
    scanf("%s", word);

    
    while(fscanf(fp, "%s", str) != EOF) {
        if(strcmp(str, word) == 0) {
            count++;
        }
    }

    
    if(count > 0)
        printf("Word found %d times\n", count);
    else
        printf("Word not found\n");

    
    fclose(fp);

    return 0;
}