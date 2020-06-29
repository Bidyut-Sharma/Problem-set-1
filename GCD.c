#include <stdio.h>
int main()
{
    int num1,num2,gcd,rem;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    while(num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;


    }
    gcd=num1;
    printf("gcd=%d",gcd);



}
