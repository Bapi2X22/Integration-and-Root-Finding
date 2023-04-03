// Find roots of sin(x)-x*cos(x)

#include<stdio.h>
#include<math.h>

float f(float x )
{
 return (sin(x)-x*cos(x));
}


int main ()
{ 

float x,xm,xl,xr,acc =0.00001,xinc=0.5, z , a , b , x1 , x2 ;
int n , i ;
float f(float x) ;


printf ( " Enter the minimum value of x= " ) ;
scanf ( "%f",&a ) ;
printf ( " Enter the maximum value of x= " ) ;
scanf ( "%f",&b ) ;


for (x=a;x<=b;x=x+0.1)
	{ 
		printf ( "%f\t%f\n",x,f(x));
	}
	
printf ( "input no of roots = " ) ;
scanf( "%d",&n) ;

for ( i =1; i<=n ; i += 1)
{ 	printf ( "\ninput x1 , x2 = " ) ;
	scanf ( "%f,%f",&x1,&x2 ) ;
	
	for ( x=x1 ; x<=x2 ; x+=xinc )
	{
		if ( f(x) * f(x+xinc)<0)
		{ 
			xl=x ; 
			xr=x+xinc ;
			do
			{ 	
				xm=(xl+xr)/2.0;
				// assign new values to xl and xr
				if ( f(xm) * f(xl)>0 ) // means mid point and left point are on same side of zero
					{ xl=xm; }         // shift left point to right
				if (f(xm) * f (xl) <0) // means mid and left points are across the zero point
					{ xr=xm; }			// shift right point to left
				
				z=fabs((xl-xr)/(xl+xr)); // we need to minimize this diffeence
				printf ( "xm=%f f(xm)=%f z=%f acc=%f \n ",xm,f(xm),z,acc);
			}
			while ( z>acc ) ;
			printf ( "\n root=%.3f  f(xm)=%f  z=%f acc=%f \n\n" ,xm, f(xm) , z , acc ) ;
		}
	}
}
}
