#include <stdio.h>

int main(){
    int a,b;
    printf("Enter both number = ");
    scanf("%d %d",&a,&b);
    printf("Greater than = %d\n",a>b);
    printf("Less than = %d\n",a<b);
    printf("Greater equale = %d\n",a>=b);
    printf("Less equale = %d\n",a<=b);
    printf("Equale = %d\n",a==b);
    printf("Not equale = %d\n",a!=b);
    return 0;
}