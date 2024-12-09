//  BY==>RAM

//  BY==>RAM



#include <stdio.h>
#include<math.h>

int main(){
    int a=0,b=1,c,d,e,sum;
    scanf("%d",&c);
    for(e=1;e<=c;e++){
        d=a+b;
        a=b;
        b=d;
        sum=sum+d;
        
        // printf("%d ",sum);
        
    }
    printf("%d ",sum);
   

    return 0;
}