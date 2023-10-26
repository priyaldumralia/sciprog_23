#include<stdio.h>
#include<math.h>
//declaring the global variables
int N=12; 
double TanValues[13];

double degtorad(double deg); //declaring the function to convert the degrees to radians 
double traprule(int N); //declaring the function to perform numerical integration using trapezoidal rule
int main(){
      int i;
      double deg,rad,width;
      for(i=0;i<=N;i++){
          deg = i*5.0; // calculating the value of deg, which represents the current ange in degree
          rad=degtorad(deg); // calling degtorad function and storing the result in rad variable
          TanValues[i] = tan(rad); //calculating the tan of rad and storing in TanValues array
}
//calculating the approximate integral and the exact integral
   double integral_approx =traprule(N);
   double integral_exact = log(2.0);
    
   printf("Your appproximation of the integral from x=0 degrees x=60 degrees of the funtion tan(x) with respect to x is: \n %.5f \n The exact solution is: \n %.5f \n ", integral_approx,integral_exact);


}

double degtorad(double deg){
 return (deg*M_PI/180.0);

}

double traprule(int N){
 int i;
 double width, area=TanValues[0]+TanValues[N];
 for (i=1; i<N; i++){
      area += 2.0*TanValues[i];
  }
 width =degtorad((60.0-0)/(2.0*N));
 area= width*area;
 return area;
}
