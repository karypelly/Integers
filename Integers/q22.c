#include <stdio.h>
#include <math.h>


#include <stdio.h>
#include <math.h>
  int isPerfectSquare(int x)
    {
       int s = (int)sqrt(x); 
       return (s*s == x);
     }  
   int isFibonacci(int x)
      {
         return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
     }
    int main(void)
    {   
     int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
	 
	  if (a>0)
		{	
		 printf("Is %d a Fibonacci number? %d",a, isFibonacci(a)); 
		} 
		return 0;        
   }