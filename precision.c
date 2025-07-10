#include <stdio.h>

int main(){
    int a = 10;
    printf("%-5dh\n",a);
    printf("%*d\n",4,a);
    float b = 10.3;
    printf("%.5f\n",b);
    printf("%10.5f\n",b);
    char c[] = "Jaykumawat";
    printf("%.3s\n",c);
    printf("%5.3s\n",c);
    printf("%*.*s\n",6,2,c);
    return 0;
}