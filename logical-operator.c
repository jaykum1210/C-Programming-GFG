#include <stdio.h>

int main(){
    int a=10,b=20,c=0;
    int d = (a<5 && b>50);
    int e = (a>20 || b>10);
    int f = (a!=0);
    printf("%d\n%d\n%d\n",d,e,f);
    return 0;
}