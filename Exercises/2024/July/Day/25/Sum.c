#include<stdio.h>

int main(){
        int num1, num2, sum;
        
        //User to enter the first number 
          
        printf("Enter the first number: ");
        scanf("%d", &num1);
        
        //User to enter the second number 
        printf("Enter the second number: ");
        scanf("%d", &num2);
        
        //Calculate the sum of the two numbers
        sum = num1 + num2;
        
        //The result of the sum is
        printf("The sum of %d and %d is %d\n", num1, num2, sum);
        
        return 0;
}       

