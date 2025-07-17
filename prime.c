#include <stdio.h>

int main(){
    int a, i=2;
    printf("ENter number = ");
    scanf("%d",&a);
    for(i;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}