#include <stdio.h>

int main(){
    int a = 10;
    int b = a++;
    printf("%d\n%d\n",a,b);
    int c= ++a;
    printf("%d\n",c);
    return 0;
}