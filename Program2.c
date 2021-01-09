#include<stdio.h>
#include<conio.h>
int main()

//sum square of two num & square sum of two num &
// now i am again changing
{
 int m,a,b,c,d;
 float e;
 printf("Enter any two  integer number : \n");
 scanf("%d%d",&a,&b);
c=(a+b)*(a+b);
d=a*a + b*b;
e=cbrt(a+b);
m=sqrt(c);
printf("\nsum square : %d",c);
printf("\nsquare sum : %d",d);
printf("\ncube root of a+b : %f",e);
printf("\nsquare root of sumsquare : %d",m);
    getch();

}

