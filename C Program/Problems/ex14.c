#include <stdio.h>

int main(){
    int num =10;
    int *p = &num;
    int **pp = &p;

    printf("%d\n",**pp);
    printf("%p",*pp);

    return 0;
}