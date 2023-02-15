#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	double s[3][3], sum1 = 0.0, sum2 = 0.0, p = 0;
	int i, j;
	
	for (i = 0; i < 3; ++i){
			for (j = 0; j < 3; ++j){
				printf("Val[%d][%d] =", i,j);
				scanf("%lf",&p);
				if (i == j) sum1 += p;
				if(i + j == 2) sum2 += p;				
				s[i][j] = p;
		
	}
	
	}
	
	printf ("Main dg = %.2lf", sum1);
	printf ("\nSide dg = %.2lf\n", sum2);
	
	int arr[2][2],l;
	for (i = 0; i < 2; ++i){
		for (j = 0; j < 2; ++j){
			printf("Val[%d][%d] =", i, j);
			scanf("%d", &l);				
			arr[i][j] = l;

	}
	
	}
	int c = 0;
	for (i = 0; i < 2; ++i){
		for (j = 0; j < 2; ++j){
			c++;
			l = pow(arr[i][j],2);
			if (c==3) printf("\n");
			printf(" %d ",l);
	
	}
	
	}

}
