#include <stdio.h>

int main() {
    int num,fact=1,i;
  
    printf("Enter a number:");
   
    scanf("%d",&num);
 
    for(i=1;i<=num;i++){
       
        fact=fact*i;
    }
   
   printf("fact of %d=%d",num,fact);
   

    return 0;
}