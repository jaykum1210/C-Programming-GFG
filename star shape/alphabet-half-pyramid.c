#include <stdio.h>

int main(){
    int a;
    printf("Enter number =");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(char b = 'A';b<'A'+i;b++){
            printf("%c ",b);
        }
        printf("\n");
    }
    return 0;
}