#include<stdio.h>
#include<math.h>
float f(float r,float E)
{
	float c,d,t;
	c=r*r*((2*E)+(2/r)-(1/(r*r)));
	d=sqrt(c);
	t=1/d;
	return(t);
}

int main()
{
	float a,b,E,j,i,s,n,h,x,y2,y1;
	FILE *fp=NULL;
	fp=fopen("res.txt","w");
	n=5000.0;
	E=-.25;
	a=(-1+sqrt(1+2*E))/(2*E); 
	
	   
	for(j=a;j<=(-1-sqrt(1+2*E))/(2*E);j=j+.01)
	{
			b=j;
			h=(b-a)/n;
			s=f(a,E)+f(b,E);
			for(i=1.0;i<n;i=i+2)
				{
				s=s+4.0*f(a+i*h,E);
				}
			for(i=2.0;i<n;i=i+2)
				{
				s=s+2.0*f(a+i*h,E);
				}
			s*=h/3.0;
	
	
			x=(-1/(2*E))*cos(s);
			y2=((-1/(2*E))*sqrt(-2*E))*sin(s);
			fprintf(fp,"%f\t%f\n",x,y2);
	}
}

