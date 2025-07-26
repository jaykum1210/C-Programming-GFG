#include <stdio.h>

int main(){
    int a[] = {10,20,30,40,50,60};
    int b = sizeof(a)/sizeof(a[0]);
    int i =0;
    while(i<b){
        printf("%d\n",a[i]);
        i++;
    }
    return 0;
}