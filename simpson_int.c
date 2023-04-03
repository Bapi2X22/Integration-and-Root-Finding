#include <stdio.h>
#include <math.h>
float f(float x)
{
//return (1/((1+x)*(1+x)*(1+x))); 
return (x*x)*exp(-x);
}

int main ()
{
float simpson(float a,float b,int n) ;
float f(float x);
int n ;
float a,b,integral;
//printf( "\n input a,b,n=");
//scanf( "%f,%f,%d",&a,&b,&n);

a=0.0;
b=10.0;
n=50;

integral=simpson(a,b,n);
printf( "\n\n Integral= %f \n\n\n" ,integral) ;
}




float simpson(float a,float b, int n )
{
int i;
float f(float(x));
float x,y;
float h=(b-a)/n;
float s=f(a)+f(b) ;

for (i=1; i<n ; i+=2)
{
	x=a+i*h;
	y=f(x);
	s+=4*f(x);
}
for (i=2; i<n ; i +=2)
{
	x=a+i*h;
	y=f(x);
	s+=2*f(x);
}
s*=h/3.0;
return s ;
}
