#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
	setlocale(LC_ALL,""); 
    char input[1000];
    int numbers[100];
    int count;
    int i = 0;
    int max_num;
    
    printf("Введите числа через пробел: ");
    fgets(input, sizeof(input), stdin);
    
    printf("Введите количество чисел: ");
    scanf("%d", &count);
    
    char *token = strtok(input, " ");
    while (token != NULL && i < count) {
        numbers[i++] = atoi(token);
        token = strtok(NULL, " ");
    }
    
    max_num = numbers[0];
    for (i = 1; i < count; i++) {
        max_num = MAX(max_num, numbers[i]);
    }
    
    printf("Максимальное число: %d\n", max_num);
    
    return 0;
}
