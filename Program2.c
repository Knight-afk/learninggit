#include<stdio.h>
#include<conio.h>
int main()

//sum square of two num & square sum of two num &

{
 int a,b,c,d;
 float e;
 printf("Enter any two  integer number : \n");
 scanf("%d%d",&a,&b);
c=(a+b)*(a+b);
d=a*a + b*b;
e=cbrt(a+b);
printf("\nsum square : %d",c);
printf("\nsquare sum : %d",d);
printf("\nsquare root of a+b : %f",e);
    getch();

}

