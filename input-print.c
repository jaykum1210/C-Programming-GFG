#include <stdio.h>

int main(){
    char name[100];
    printf("Enter Your First Name = ");
    scanf("%s", &name);
    printf("Welcome! %s", name);
    return 0;
}