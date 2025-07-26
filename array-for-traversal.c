#include <stdio.h>

int main(){
    int a[] = {10,20,30,40,50};
    int b = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i<b;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}