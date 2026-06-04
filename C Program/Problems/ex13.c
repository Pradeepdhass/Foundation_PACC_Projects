#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("sample.txt", "w");
    if(fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }
    fprintf(fp, "Hello World!\n"); 
    
    fprintf(fp, "Welcome to C Programming .");
    fclose(fp);

    fp = fopen("sample.txt", "a");
    if(fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }
    fprintf(fp, "\nThis line and below line is appended.");
    fprintf(fp, "\n Today's concept is File Handling.");
   
    fclose(fp);

    fp = fopen("sample.txt", "r");
    if(fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }
    printf("File Content:\n\n");
    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}