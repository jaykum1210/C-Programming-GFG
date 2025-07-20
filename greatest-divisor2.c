#include <stdio.h>
int main(){
int a,b;
printf("Enter number = ");
scanf("%d %d",&a,&b);
int great;
if(a<b){
    great = a;
}
else{
    great = b;
}
int big;
for(int i =1; i<=great;i++){
    if(a%i==0){
        if(b%i==0){
            big =i;
        }
    }
}
printf("%d",big);
return 0;
}