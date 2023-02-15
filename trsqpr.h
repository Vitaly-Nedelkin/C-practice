#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void sqpr(a,b,c){
	float p, P, S;
	p = (a+b+c)/2;
	P = a + b + c;
	printf("Perimeter = %f", P);
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\n Square = %f", S);
}
