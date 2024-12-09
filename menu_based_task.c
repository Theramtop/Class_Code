#include<stdio.h>
#include<math.h>
int main()
{
    int a,fct,i,count,b,sum,d;
    printf("Enter a number:");
    scanf("%d %d",&a,&b);
    switch(b)
    {
        case 1:
            for(i=1,fct=1;i<=a;i++){
              fct=fct*i;
            }
            printf("fact of %d=%d",a,fct);
            break;
        case 2:
            int sum=0,d;
            while(a!=0)
            {
                d=a%10;
                sum=sum+d;
                a=a/10;
            }
            printf("%d",sum);
            break;
            
        case 3:
        int coun =1;
            for(i=2;i<=sqrt(a);i++)
            {
                if(a%i==0)
                {
                    count++;

                }
            }
            if(count==0 &&a!=1)
                printf("\nPrime");
            else
                printf("\nNot prime");
            break;
        case 4:
            int i=1;
            while(i<=10){
                printf("%d*%d=%d\n",a,i,i*a);
                i++;
            }
            break;
    
        default:
    }