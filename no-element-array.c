#include <stdio.h>

int main(){
    int a[] = {10,20,30,40,50,60};
    int b = sizeof(a)/sizeof(a[0]);
    printf("Number of elements = %d\n",b);
    return 0;
}