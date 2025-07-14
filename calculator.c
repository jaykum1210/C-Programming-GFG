#include <stdio.h>

int main(){
    int a,c;
    char b;
    printf("Enter number = ");
    scanf("%d %c %d",&a,&b,&c);
    switch (b){
        case '+':
        printf("%d",a+c);
        break;
        case '-':
        printf("%d",a-c);
        break;
        case '*':
        printf("%d",a*c);
        break;
        case '/':
        printf("%d",a/c);
        break;
        case '%':
        printf("%d",a%c);
        break;
        default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}