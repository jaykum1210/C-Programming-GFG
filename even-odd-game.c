#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("Player 2 Wins!");
    }
    else{
        printf("Player 1 Wins!");
    }
    return 0;
}