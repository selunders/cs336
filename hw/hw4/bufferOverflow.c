#include <stdio.h>
#include <string.h>

int main() {
    char strIn[10];
    char ptr[10] = "hello";
    printf("%s\n", ptr);
    do{
        printf("What would you like to change the string to? (type quit to exit program): ");
        scanf(" %s", strIn);
        strcpy(ptr,strIn);
        printf("The new string is: %s\n", ptr);
    } while (strcmp(ptr, "quit"));
}