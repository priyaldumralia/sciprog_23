#include<stdio.h>
#include<math.h>

int main(void){
//initialise the end points and the number of points
int N=12;
double x_0 = 0.0;
double x_12 = M_PI/3.0;
double width = (x_12 - x_0)/(double)N;

//Get values of f(x) for the end-points and then add them up
double X =tan(x_0)*tan(x_12);

//Get the equidistant points, evaluate tan at these points, store 2tan(x) at each step
double x;
double y;
double sum =x;

int i;
for (i=1;i<12;i++){
    x = x_0 + width*i;
    y = tan(x);
    sum = sum+2*y;

}
//calculate the approximate integral and the exact integral
double integral_approx = sum*width*0.5;
double integral_exact =log(2.0);

//print the results
printf("your approximation of the integral for x=0 to x=pi/3 of the function tan(x) with respect to x is : \n %.5f\n The Exact solution is:\n %.5f\n",integral_approx, integral_exact );

return(0);

}

