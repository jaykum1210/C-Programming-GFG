#include <stdio.h>

int main(){
    int a;
    printf("ENter number = ");
    scanf("%d",&a);
    int great=1;
    for(int i =1;i<=a;i++){
        if(a%i==0){
            great = i;
        }
    }
    printf("%d",great);
    return 0;
}