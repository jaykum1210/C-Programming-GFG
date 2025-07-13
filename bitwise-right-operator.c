#include <stdio.h>

int main(){
    int a = 33;
    int b = 4;
    printf("%d\n",a);
    printf("%d\n",(a>>1));
    printf("%d\n",(a>>2));
    printf("%d\n",(a>>b));
    return 0;
}