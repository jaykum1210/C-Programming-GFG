#include <stdio.h>

int fun(int a){
    if(a<0){
        return 0;
    }
    for(int i =2;i<a/2;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    a++;
    while(!fun(a)){
        a++;
    }
    printf("%d",a);
    return 0;
}