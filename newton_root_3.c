//4.6.1
#include<stdio.h>
#include<math.h>
float f(float a,float b,float x)
{
	return(exp(a*x)-b*x*x);
}
float g(float a,float b,float x)
{
	return (a*exp(a*x)-2*b*x);
}
int main()
{
	float a=1.0,b=5.0,i,f1,f2,h,x,z;
	for(i=-1.0;i<=1.0;i+=.1)
	{
		if(f(a,b,i)*f(a,b,i+.1)<0)
		{
			x=i;
			do
			{
				f1=f(a,b,x);
				f2=g(a,b,x);
				h=-f1/f2;
				x=x+h;
				z=fabs(h/x);
			}
			while(z>.000001);
			printf("%f\n",x);
		}
}
}
