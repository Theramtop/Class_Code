#include<stdio.h>
int main(){
    char choice;
    int n,i,fact;
    do
    {
        printf("Enter the number:");
        scanf("%d",&n);
        for(i=1,fact=1;i<=n;i++);
        {
            fact=fact*i;

        }
        printf("\nFacttorial+%d",fact);
        printf("\nTo continnue press y:");
        scanf("%*c%c",&choice);


    }while(choice=='y'|| choice=='y');
        return 0;


        
        
       
    } 
        
  
