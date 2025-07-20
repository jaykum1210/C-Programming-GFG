#include <stdio.h>

int main(){
    int a,b=0,c=1,next;
    printf("Enter number = ");
    scanf("%d",&a);
    for(int i = 0; i<=a; i++){
        printf("%d ",b);
        next = b+c;
        b = c;
        c = next;
    }
    return 0;
}