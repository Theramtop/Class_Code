//  BY==>RAM



#include <stdio.h>
#include<math.h>

int main() {
    int i,j,k,num,p=0;
    printf("Enter a number:");
    scanf("%d",&i);
    num=i;
    while(num!=0)
    {
        p=p++;
        num=num/10;
    }
    
    while(i!=0){
        j=i%10;
        k=k+pow(j,p);
        i=i/10;
    }
    printf("%d",k);


    return 0;
}