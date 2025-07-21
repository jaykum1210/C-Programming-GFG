#include <stdio.h>

int fun(int a,int b){
    int gr=0;
    if(b==0){
        return a;
    }
    else{
        a = a%b;
        return fun(b,a);
    }
}

int main(){
    int a,b;
    printf("Enter both number = ");
    scanf("%d %d",&a,&b);
    printf("Gcd of %d and %d = %d\n",a,b,fun(a,b));
    return 0;
}