#include <stdio.h>
int main()
{
   int first=0, second=1,  count=0, fibo,n,last_digit;
   printf("Enter range: ");
   scanf("%d", &n);

   while(count>n)
   {
       if(count<=1)
       {
          fibo=count;
       }
      else
    {
        fibo= first+second;
        first=second;
        second=fibo;

      }
      printf("%d ",fibo);
      count++;


   }

  last_digit=fibo%10;
  printf("%d ",last_digit);
  return 0;


}
