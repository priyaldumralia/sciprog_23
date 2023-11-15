#include<stdio.h>
#include<stdlib.h>

//Allocate Array
int *allocatearray(int n){
   int *p;
   p=(int *) malloc(n*sizeof(int));
   return p;
}

//Fill wit ones
void fillwithones(int *array, int n){
   int i;
   for(i=0;i<n;i++){
      array[i]=1;
    }
}
//print the array
void printarray(int *array, int n){
  int i;
  for(i=0;i<n;i++){
    printf("a[%d]: %d\n", i, array[i]);
  }
}

//Deallocate the array
void freearray(int *array){
    free(array);
}

int main(){
  int n,*a;
   printf("Size of the array:\n");
   scanf("%d",&n);
   a=allocatearray(n);
   fillwithones(a,n);
   printarray(a,n);
   freearray(a);
   
   a=NULL;
return 0;

}



