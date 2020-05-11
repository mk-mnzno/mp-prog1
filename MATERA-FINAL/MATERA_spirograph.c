/* 
*
*  Name   : MANZANO, NINNA
*  Section: S16-B
*  Submission Date: 12/03/18
*
*  Implement the program for the hypotrochoid (also known as spirograph).
*
*/

#include <stdio.h>

#include "mp_math.h"

void
Spirograph(double a, double b, double h)
{
	double x, y; // (x,y) coordinates
	double r;    // angle in radians
	double theta;
	double t;
	double t_temp;
	double ctr; //counter for 0 to maximum value angle
	
	for (ctr = 0.0; ctr <= 360.0 * a; ctr++) {
		
			theta = ctr;
			r = deg_to_rad(theta);
			t_temp =  ( (a - b) / b ) * theta;
			t = deg_to_rad(t_temp);
		
			if (r > 2*PI)
					while (r > 2*PI)
							r -= 2*PI;
			
			if (t > 2*PI)
					while (t > 2*PI)
							t -= 2*PI;
							
			x = (a - b) * cosine(r) + h * cosine(t);
			y = (a - b) * sine(r) - h * sine(t);
			
			printf("%lf \t %lf \n", x, y);
	}
}


int
main()
{
	double a;    // radius of the big circle
	double b;    // radius of the small circle
	double h;	 // determines if a point on the curve will be inside or outside of the big circle 
   
   scanf("%lf %lf %lf", &a, &b, &h); 
   Spirograph(a, b, h);
   
   return 0;
	
}
