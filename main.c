#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int empty;
    char op; //%c
    float num1; //%f
    float num2; //%f
    int result; //%d
    int result1; //%d
    int result2; //%d
  
    printf("Enter Your Operator : ");
    scanf("%c",&op);
    
    printf("Enter Your first number : ");
    scanf("%f",&num1);
    
    printf("Enter Your second number : ");
    scanf("%f",&num2);
    
    switch(op){
      case '+' :
        result = num1 + num2 ;
        printf("your result : %d",result);
        break;
      case '-' :
        result = num1 - num2 ;
        printf("your result : %d",result);
        break;
      case '*' :
        result = num1 * num2 ;
        printf("your result : %d",result);
        break;
      case '/' :
        result = num1 / num2 ;
        printf("your result : %d",result);
        break;
      case '^' :
        result = pow(num1,2);
        printf("your result : %d \n",result);
        break;
      case '#' :
        result = sqrt(num1);
        result1 = sqrt(num2);
        printf("num1 : %d \n",result);
        printf("num2 : %d",result1);
     default :
        printf("There are no Operator or Number 1 Number 2");
    }
   
}