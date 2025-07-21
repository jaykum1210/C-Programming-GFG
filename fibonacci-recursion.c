#include <stdio.h>

int fun(int a){
    int b = 0, c = 1;
    if(a==0 || a==1){
        return a;
    }
    else{
        return fun(a-1)+fun(a-2);
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for(int i =0;i<a;i++){
        printf("%d ",fun(i));
    }
    return 0;
}