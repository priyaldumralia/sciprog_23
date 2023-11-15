These are codes for Practical06 

For step 1-5 the code is in the matmul.c file
To compile matmul.c
>gcc -o matmul matmul.c -lm
>./matmul

For step 6 we have craeted Step6 folder in which we have created seperate folder for main function and matrix multiplication function i.e. main.c and matmul.c respectively
To compile the two files first create the object file of each file and then create the executable file
>gcc -c main.c
>gcc -c matmul.c
>gcc -o matmulc main.o matmul.o
>./matmulc

For step 7 we have craeted a Makefile.txt in Ccodes folder to create executable files using just one command 
>make
