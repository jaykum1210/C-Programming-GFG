#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=(a+a/2);j++){
            printf("* ");
        }
        printf("\n");
    }
}