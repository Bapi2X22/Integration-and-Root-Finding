// Find roots of sin(x)-x*cos(x)

#include<stdio.h>
#include<math.h>

float f(float x )
{
 return ( sin(x)-x*cos(x) );
}


int main ()
{ 

float x,xm,xl,xr , acc =0.00001 , xinc =0.1 , z , a , b , x1 , x2 ;
int n , i ;
float f(float x) ;
printf ( " Enter the minimum value of x= " ) ;
scanf ( "%f",&a ) ;
printf ( " Enter the maximum value of x= " ) ;
scanf ( "%f",&b ) ;


for ( x=a ; x<=b ; x+=xinc )
{
	if ( f(x) * f(x+xinc)<0)
		{ 	xl=x ; 
			xr=x+xinc ;
			do
			{ 	xm=( xl+xr ) / 2.0 ;
			
				if ( f(xm) * f(xl)>0 )
					{ xl=xm; }
				if (f(xm) * f (xl) <0)
					{ xr=xm; }
				
				z=fabs ( ( xl-xr ) / ( xl+xr ) ) ;
				//printf ( "xm=%f f(xm)=%f z=%f acc=%f \n ",xm, f(xm) , z , acc ) ;
			}
		while ( z>acc ) ;
		printf ( "\n root=%f  f(xm)=%f  z=%f acc=%f \n\n" ,xm, f(xm) , z , acc ) ;
		}
}

}
