#include <stdio.h>

int fun(int a){
    while(a%2==0){
        printf("2 ");
        a=a/2;
    }
    int i = 3;
    while(i<=a){
        if(a%i==0){
            printf("%d ",i);
            a = a/i;
        }
        else{
            i=i+2;
        }
    }
    printf("\n");
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    if(a<0){
        printf("Enter Positive Number");
    }
    else if(a==0 || a==1){
        printf("No Factors");
    }
    else{
        fun(a);
    }
}