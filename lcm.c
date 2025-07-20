#include <stdio.h>

int main(){
    int a,b;
    printf("Enter both number = ");
    scanf("%d %d",&a,&b);
    int gr,c;
    if(a>b){
        gr=a;
    }
    else{
        gr=b;
    }
    for(int i = gr;;i++){
        if(i%a==0){
            if(i%b==0){
                c = i;
                break;
            }
        }
    }
    printf("%d",c);
    return 0;
}