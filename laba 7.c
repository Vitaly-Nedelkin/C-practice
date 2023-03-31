#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct humen {
    char name[50];
    char surname[50];
    int birth_year;
};

int main() {
    struct humen arr1[4], arr2[4];
    int i, j;

    printf("First array:\n");
    for (i = 0; i < 4; i++) {
        printf("Enter name, surname and birth year (name surname birth_year): ");
        scanf("%s %s %d", arr1[i].name, arr1[i].surname, &arr1[i].birth_year);
    }

	for (i = 0; i < 4; i++)
        arr2[i] = arr1[i];
        
        
    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 4; j++) {
            if (arr2[i].birth_year > arr2[j].birth_year) {
                struct humen temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }


    printf("\n Sorted array:\n");
    for (i = 0; i < 4; i++) {
        printf("%s %s %d\n", arr2[i].name, arr2[i].surname, arr2[i].birth_year);
    }

    return 0;
}
