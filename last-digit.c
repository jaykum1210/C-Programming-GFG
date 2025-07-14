#include <stdio.h>

int main(){
    int a ;
    printf("Enter number = ");
    scanf("%d",&a);
    if(a>=0){
        printf("Last Digit = %d\n",a%10);
    }
    else{
        printf("Last Digit = %d\n", -(a%10));
    }
    return 0;
}