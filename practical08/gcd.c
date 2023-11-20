#include <stdio.h>

//Function to find the Greatest common divisor using Iteration
int gcd_iteration(int a, int b){
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

//Function to find the greatest common divisor using recursion
int gcd_recursive(int a, int b){
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd_recursive(b,a%b);
    }
}

//Main function
int main(void) {
    int a=5;
    int b=26;
    
    //Calculate GCD using iteration and recursion
    int ans_r = gcd_recursive(a,b);
    int ans_i = gcd_iteration(a,b);
    
    //print the results
    printf(" Using iteration, we get the answer %d \n",ans_i);
    printf(" Using recursive, we get the answer %d \n",ans_r);
    return 0;

}