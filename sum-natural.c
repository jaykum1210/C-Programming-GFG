#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int sum = 0;
    for(int i =1;i<=a;i++){
        sum +=i;
    }
    printf("%d\n",sum);
    return 0;
}