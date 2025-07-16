#include <stdio.h>

int fun(int a){
    while(a>10){
        a/=10;
    }
    return a;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("First Digit = %d\n",fun(a));
    return 0;
}