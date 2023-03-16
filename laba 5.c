#include <stdio.h>
#include <stdlib.h>
#include "Calcul.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i, j;
	char op;
	printf("Enter matrix size (n*n),  n =");
	scanf ("%d", &n);
	
	double* matrix1 = (double*)malloc(n * n * sizeof(double)); 
    double* matrix2 = (double*)malloc(n * n * sizeof(double)); 
	
	printf("First matrix: \n");
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("arr[%d][%d] = ", i, j);
      		scanf("%lf", &matrix1[i * n + j]);
		
		}
	}
	
	printf("Second array: \n");
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("arr2[%d][%d] = ", i, j);
      		scanf("%lf", &matrix2[i * n + j]);
		}
	}
	
	printf("Enter (+)(-)(*):");
	scanf(" %c", &op);
	
	

	double* result = calc(matrix1, matrix2, n, op);
	 for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%.2f ", result[i * n + j]);
            }
            printf("\n");
        }
        
    free(result);
	free(matrix1);
	free(matrix2);

return 0;	
}
