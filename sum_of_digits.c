#include <stdio.h>
int main()
{
    int d,sum,num;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;

    }
    printf("%d",sum);

}   











// http://103.210.29.55/Student/FeedbackList