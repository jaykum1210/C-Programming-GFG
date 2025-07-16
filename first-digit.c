#include <stdio.h>

int main(){
    int a;
    printf("Enter number=");
    scanf("%d",&a);
    while (a>10){
        a = a/10;
    }
    printf("%d\n",a);
    return 0;
}