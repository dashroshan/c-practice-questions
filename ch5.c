/*Q5.1a
#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num%2==0)
  {
    printf("NUMBER IS EVEN");
  }
  if (num%2!=0)
  {
    printf("NUMBER IS ODD");
  }
  return(0);
}
*/



/*Q5.1b
#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num%2==0)
  {
    printf("NUMBER IS EVEN");
  }
  else
  {
    printf("NUMBER IS ODD");
  }
  return(0);
}
*/



/*Q5.2
#include <stdio.h>
int main()
{
  int numOfInt=0, sumOfInt=0;
  for (int i=100; i<=200; i+=1)
  {
    if (i%7==0)
    {
      numOfInt+=1;
      sumOfInt+=i;
    }
  }
  printf("There are %d integers between 100 and 200 that are divisible by 7. Sum of those integers is %d.\n", numOfInt, sumOfInt);
  return(0);
}
*/



/*Q5.3
#include <stdio.h>
int main()
{
  int a,b,c,d,m,n;
  double x1,x2;
  printf("Enter the 1st eqn as ax+by=c : ");
  scanf("%dx+%dy=%d",&a,&b,&m);
  printf("Enter the 2nd eqn as ax+by=c : ");
  scanf("%dx+%dy=%d",&c,&d,&n);
  if ((a*d-c*b)==0)
  {
    printf("No unique solution!\n");
  }
  else
  {
    x1=(double)(m*d-b*n)/(double)(a*d-c*b);
    x2=(double)(n*a-m*c)/(double)(a*d-c*b);
    printf("x1=%0.3lf\nx2=%0.3lf\n",x1,x2);
  }
  return(0);
}
*/