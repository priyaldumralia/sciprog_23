
#include <stdio.h> //Including the standard Inout/Output Library

int main(void) { //Defining the main function
   int num1, num2, error; //declaring the integer variables

   printf("Please input two positive integers\n"); //prompting user to input 2 positive integers
   error = scanf("%d %d",&num1,&num2);//Reading and storing the user input and storing the return value in the error variable
   if (error != 2) {  //checking if more than 2 variables are returned 
     printf("Please try again\n");//prompting user to try again
     return 1; //Exit the program with error code
   }

   if (num1<=0 || num2<=0) { //checking whether the input values are positive
     printf("These numbers are not positive!\n");//prompting the values are not positive
     return 1;//exit the program with error code
   }

   printf(" You entered %d and %d\n",num1,num2);//Displaying the input values
   if (num1%2 == 0) {  //checking if num1 is even 
      printf(" num1 is even and");
   } else {
      printf(" num1 is odd and");
   }

   if (num2%2 == 0) {  //chekcing if num2 is even
      printf(" num2 is even\n");
   } else {
      printf(" num2 is odd\n");
   }
   printf("\n");


  return 0; //exit program with success code
}



