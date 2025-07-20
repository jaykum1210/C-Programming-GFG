#include <stdio.h>

int main(){
    int a,count=1;
    printf("Enter number = ");
    scanf("%d",&a);
    while(a>=10){
        a = a/10;
        count++;
    }
    printf("Number of digit = %d\n",count);
    return 0;
}