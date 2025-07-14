#include <stdio.h>

int main(){
    int a ;
    printf("Enter number = ");
    scanf("%d",&a);
    if(a>0){
        if(a%2 == 0){
            printf("Positive Even");
        }
        else{
            printf("Positive Odd");
        }
    }
    else if(a<0){
        if(a%2 == 0){
            printf("Negative Even");
        }
        else{
            printf("Negative Odd");
        }
    }
    else{
        printf("Zero");
    }
}