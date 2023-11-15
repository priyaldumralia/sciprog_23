void matmul(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){
int i, j,k; //loop indices

//performing matric multiplication
  for (i = 0; i < n; i++) {
    for (j = 0; j < q; j++) {
      C[i][j] = 0; // Initialize C to zero before accumulating values
      for (k = 0; k < p; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  }
   
