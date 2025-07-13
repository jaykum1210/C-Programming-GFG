#include <stdio.h>

int main(){
    int a;
    printf("Enter The Day Number = ");
    scanf("%d",&a);
    int b = (a%7);
    printf("Day number = %d\n",b);
    return 0;
}