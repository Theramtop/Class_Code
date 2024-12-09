#include<stdio.h>
int main()
{
    int num,rev,n,d;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n;
    while (num!=0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;}
    if(n==rev)
        printf("pelindrome");
    else
    printf("Not pen");
    return 0;
}