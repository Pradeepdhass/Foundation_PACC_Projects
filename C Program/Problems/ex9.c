#include<stdio.h>

int main() {
    char st[100];
    int length = 0;

    printf("Enter the String : ");
    scanf("%s", st);

    while(st[length] != '\0') {
        length++;
    }

    printf("Length of string = %d", length);

    return 0;
}