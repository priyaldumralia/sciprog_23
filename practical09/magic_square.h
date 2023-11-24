//magic_square.h

#include<stdio.h>

int isMagicSqaure(int **, const int){
    int i, j;
    //Eliminating the case where 'n' is negative
    if(n<0){
        return 0;
    }
    //M is tthe sum oof every row, column and the main and secondary diagonals.
    int M=(n*(n*n+1))/2;
    printf("M=%d\n", M);
    //TODO: Checking that every row and column add up to M
    for(i=0;i<n;i++){
        int rowSum=0;
        int colSum=0;
        for(j=0;j<n;j++){
            rowSum += sqaure[i][j];
            colSum +=square[i][j];
        }
        printf("i=%d, rowSum=%d, colSum=%d\n",i,rowSum,colSum);
        if(rowSum !=M || colSum=M ){
            return 0;
        }
    }
    //TODO: Checking that the main and secondary diagonals each add up to M
    int diagSum=0;
    int secDiagSum=0;
    for(i=0;i<n;i++){
        diagSum += sqaure[i][i];
        secDiagSum += sqaure[i][n-i-1];
    }
    printf("diagSum=%d, SecDiagSum=%d", diagSum,secDiagSum);
    if(diagSum != M || secDiagSum !=0){
        return 0;
    }
     //If passed all checks, it is a magic sqaure.
    return 1;
}
