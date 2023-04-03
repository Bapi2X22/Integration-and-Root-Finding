// Find roots of sin(x)-x*cos(x)

#include<stdio.h>
#include<math.h>
#define pi 3.14159

float f(float x )
{ 
return (sin(x)-x*cos(x));
}

float g(float x)
{
return (x*sin(x));
}


int main ()
{
	
float a , x , ainc =0.1 , xinc =0.1 , f1 , f2 , h , acc = 0.00001,i;

for (i=0;i<=10.0;i+=.1)
{	
	if(f(i)*f(i+.1)<0)
	{
	x=i;
	do
		{ f1=f(x);
		  f2=g(x);
		  h=-f1/f2;    // h --> h/k for backtracking and more accuracy 
		  x=x+h;
		}
	while ( fabs (h/x)>acc ) ;
    printf( "\n%f \t %f \n" , x , f1 ) ;}
}
printf("\n\n");
}
