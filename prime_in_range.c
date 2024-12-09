#include<stdio.h>
#include<math.h>
void main()
{
    //define 
    int i,j,n,count,a,b;
    // SAVE NUMBER
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++){
        for(i=2,count=0;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                count++;
            }
        
        }
        if(count==0 && n!=1)
            printf("%d,",n);
        }
        
}
