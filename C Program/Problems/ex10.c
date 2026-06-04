#include<stdio.h>

int main() {
    char st[100];
    int length = 0;

    printf("Enter the String : ");
    scanf("%s", st);

    while(st[length] != '\0') {
        length++;
    }

    printf("Reverse String = ");

    for(int i = length - 1; i >= 0; i--) {
        printf("%c", st[i]);
    }

    return 0;
}