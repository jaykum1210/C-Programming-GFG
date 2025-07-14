#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    int gr = a;
    if(gr<b){
        gr = b;
    }
    if(gr<c){
        gr = c;
    }
    printf("%d\n",gr);
    return 0;
}