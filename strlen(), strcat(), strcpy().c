#include <stdio.h>


int my_strlen(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}


void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


void my_strcat(char dest[], char src[]) {
    int i = 0, j = 0;

    
    while(dest[i] != '\0') {
        i++;
    }

    
    while(src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int main() {
    char str1[100], str2[100], copy[100];

    
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // strlen
    printf("Length of first string = %d\n", my_strlen(str1));

    // strcpy
    my_strcpy(copy, str1);
    printf("Copied string = %s\n", copy);

    // strcat
    my_strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    return 0;
}