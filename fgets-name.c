#include <stdio.h>

int main(){
    char a[100];
    printf("Enter your name = ");
    fgets(a,100,stdin);
    printf("Hi %s",a);
    return 0;
}