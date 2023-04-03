#include<stdio.h>
#include<math.h>


int main ()
{
	
//float f(float x);
int i , n ;
float a,b,s=0,y=0,h ;


float f(float x )
{
//return (1/((1+x)*(1+x)*(1+x))) ;
return (x*x)*exp(-x);
//return (sin(x));
}

//a=0.;
//b=10.;
//n=50;

printf ("Enter the no of intervals =" ) ;
scanf("%d",&n ) ;
printf("Enter the lower limit=" ) ;
scanf("%f",&a) ;
printf("Enter the upper limit=");
scanf("%f",&b);

h=(b-a)/n;

for (i=1; i<=n-1; i++)   
	{
	  s=s+f(a+i*h) ;
	}
y=(f(a)+f(b)+2*s)*h/2.0 ;



printf("\n\n");
printf ( "The value of the integral is=%f\n\n\n" , y ) ;


}
