#include "trsqpr.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("Enter triangle sides values");
	printf("\na =");
	scanf("%d",&a);
	printf("b =");
	scanf("%d",&b);
	printf("c =");
	scanf("%d",&c);
	if ((a < (b + c)) && (b < (a + c)) && (c < (b + a))) sqpr(a, b, c);
	else printf("This is not triangle");
	return 0;
}

