#include<stdio.h>
#include<math.h>
#define pi 3.14159

float f(float x,float A)
{
	float s;
	s=1-pow(sin(A/2),2)*pow(sin(x),2);
	return(4/s);
}
float g(float A)
{
	float s;
	s=pow(A/4,2)+1;
	return(2*pi*s);
}

float I(float A)
{
	float a,b,s,h,n,i;

	a=0;
	b=pi/2.0;
	s=f(a,A)+f(b,A);
	n=50.0;
	h=(b-a)/n;
	
	
	for(i=1;i<n;i+=2)
		{
		s=s+4*f(i,A);
		}
	for(i=2;i<n;i+=2)
		{
		s=s+2*f(i,A);
		}
	s=s*h/3.0;
	return (s);
}


int main()
{
	float i;
	FILE *fp=NULL;
	fp=fopen("res.txt","w");
	for(i=0;i<=2.5;i=i+.01) // loop over A
	{
		fprintf(fp,"%f\t%f\t%f\t%f\n",i,I(i)-g(i),g(i),I(i));
	}
}
