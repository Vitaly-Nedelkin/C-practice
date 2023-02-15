#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double a, b, c, Desc;
	
	printf("Enter a=:");
	scanf("%lf",&a);
	
	printf("Enter b=:");
	scanf("%lf",&b);
	
	printf("Enter c=:");
	scanf("%lf",&c);

	Desc =  b * b - 4 * a * c;
	
	if (Desc >= 0){
		
		double x1, x2;
		x1 = (-b - sqrt(Desc))/(2*a);
		x2 = (-b + sqrt(Desc))/(2*a);
		
		if (Desc == 0) {
			printf("\nD = 0");
			printf("x = %lf", x1);
	} else {
			printf("\nD > 0");
			printf("\nx1 = %lf \nx2 = %lf", x1, x2);
		}
		
		
	} else printf("\n Desc < 0");
	

	
	return 0;
}
