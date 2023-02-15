#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char arr[80],s;
	int i, n;
	printf("Enter any key(<80)\n");
	scanf("%s",arr);
	n = strlen(arr);
	for (i = 0; i < n; i++){
		if (arr[i] == 'a') arr[i] = 'A';
		if (arr[i] == 'b') arr[i] = 'B';
	}
	
	printf("\n%s",arr);
		
	return 0;
}
