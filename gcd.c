#include<stdio.h>
int main()
{
    int a,b,gcd=1,rem;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    while(1)
    {
        rem=a%b;
        if(rem==0)
        {
            gcd=b;
            break;
        }
        a=b;
        b=rem;
    }
    printf("GCD is=%d",gcd);
    return 0;

}