#include<stdio.h>
int main(){
    int num,i,d,sum=0;

    scanf("%d",&num);
    d=num;
    for(i=0;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    if(sum==d)
        printf("perfect");
    else
        printf("not perfect no");

    }


    }
