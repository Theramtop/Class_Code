#include <stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a number:");
    scnf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;

        }
    }
    if(count==0 &&n!=0)
    printf("\nPrime");
    elseprintf("\nNot prime");



}





#include<stdio.h>
#include<math.h>
int main(){
    int n,i,count=0;
    printf("enter  number:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0 && n!=1)
        printf("\nprime");
    else
        printf("\n not prime");
    return 0;
}