#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h>
struct Person { 
    char name[50]; 
    char surname[50]; 
    int birth_year; 
    char gender[10]; 
    double height; 
}; 

int cmp_name(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    return strcmp(pa->name, pb->name);
}

int cmp_birth_year(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    return pa->birth_year - pb->birth_year;
}

int cmp_gender(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    return strcmp(pa->gender, pb->gender);
}

int cmp_height(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    if (pa->height > pb->height) return 1;
    else if (pa->height < pb->height) return -1;
    else return 0;
}

int cmp_name_birth_year(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    int cmp = strcmp(pa->name, pb->name);
    if (cmp == 0) {
        cmp = pa->birth_year - pb->birth_year;
    }
    return cmp;
}

int cmp_name_gender(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    int cmp = strcmp(pa->name, pb->name);
    if (cmp == 0) {
        cmp = strcmp(pa->gender, pb->gender);
    }
    return cmp;
}

int cmp_name_height(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    int cmp = strcmp(pa->name, pb->name);
    if (cmp == 0) {
        cmp = (pa->height > pb->height) - (pa->height < pb->height);
    }
    return cmp;
}

int cmp_birth_year_name(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    int cmp = pa->birth_year - pb->birth_year;
    if (cmp == 0) {
        cmp = strcmp(pa->name, pb->name);
    }
    return cmp;
}

int cmp_birth_year_gender(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    int cmp = pa->birth_year - pb->birth_year;
    if (cmp == 0) {
        cmp = strcmp(pa->gender, pb->gender);
    }
    return cmp;
}

int cmp_birth_year_height(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    int cmp = pa->birth_year - pb->birth_year;
    if (cmp == 0) {
        cmp = (pa->height > pb->height) - (pa->height < pb->height);
    }
    return cmp;
}

int cmp_gender_name(const void *a, const void *b) {
    const struct Person *pa = (const struct Person *)a;
    const struct Person *pb = (const struct Person *)b;
    int cmp = strcmp(pa->gender, pb->gender);
    if (cmp == 0) {
        cmp = strcmp(pa->name, pb->name);
    }
    return cmp;
}

int cmp_gender_birth_year(const void* a, const void* b) {
    struct Person* person_a = (struct Person*)a;
    struct Person* person_b = (struct Person*)b;
    int gender_cmp = strcmp(person_a->gender, person_b->gender);
    if (gender_cmp != 0) {
        return gender_cmp;
    } else {
        return person_a->birth_year - person_b->birth_year;
    }
}

int cmp_gender_height(const void* a, const void* b) {
    struct Person* person_a = (struct Person*)a;
    struct Person* person_b = (struct Person*)b;
    int gender_cmp = strcmp(person_a->gender, person_b->gender);
    if (gender_cmp != 0) {
        return gender_cmp;
    } else {
        return (person_a->height - person_b->height > 0) ? 1 : -1;
    }
}

int cmp_height_name(const void* a, const void* b) {
    struct Person* person_a = (struct Person*)a;
    struct Person* person_b = (struct Person*)b;
    int height_cmp = (person_a->height - person_b->height > 0) ? 1 : -1;
    if (height_cmp != 0) {
        return height_cmp;
    } else {
        return strcmp(person_a->name, person_b->name);
    }
}

int cmp_height_birth_year(const void* a, const void* b) {
    struct Person* person_a = (struct Person*)a;
    struct Person* person_b = (struct Person*)b;
    int height_cmp = (person_a->height - person_b->height > 0) ? 1 : -1;
    if (height_cmp != 0) {
        return height_cmp;
    } else {
        return person_a->birth_year - person_b->birth_year;
    }
}

int cmp_height_gender(const void* a, const void* b) {
    struct Person* person_a = (struct Person*)a;
    struct Person* person_b = (struct Person*)b;
    int height_cmp = (person_a->height - person_b->height > 0) ? 1 : -1;
    if (height_cmp != 0) {
        return height_cmp;
    } else {
        return strcmp(person_a->gender, person_b->gender);
    }
} 
 




 
int main(int argc, char *argv[]) { 
 	setlocale(LC_ALL,""); 
 	int n, i, j;
 	printf("Введите кол-во строк");
 	scanf("%d",&n);
    struct Person arr1[n]; 
    FILE *input_file; 
    input_file = fopen("input8.txt", "r"); 
    char line[100]; 
    i = 0; 
    while (fgets(line, sizeof(line), input_file) != NULL) { 
        sscanf(line, "%s %s %d %s %lf", arr1[i].name, arr1[i].surname, &arr1[i].birth_year, arr1[i].gender, &arr1[i].height); 
        i+=1;   
    } 
    printf("Выберите, по какому параметру упорядочить: \n 1. Имя/Фамилия \n 2. Год рождения \n 3. Пол \n 4. Рост \n"); 
    int p; 
    scanf("%d", &p); 
    switch(p) { 
        case 1: 
            qsort(arr1, n, sizeof(struct Person), cmp_name); 
            break; 
        case 2: 
            qsort(arr1, n, sizeof(struct Person), cmp_birth_year); 
            break; 
        case 3: 
            qsort(arr1, n, sizeof(struct Person), cmp_gender); 
            break; 
        case 4: 
            qsort(arr1, n, sizeof(struct Person), cmp_height); 
            break; 
        default: 
            printf("Неверный выбор параметра!"); 
            return -1; 
    } 
    printf("Результат упорядочивания:\n"); 
    for (i = 0; i < n; i++) { 
        printf("%s %s %d %s %.2lf\n", arr1[i].name, arr1[i].surname, arr1[i].birth_year, arr1[i].gender, arr1[i].height); 
    }
    int key;
    printf("Упорядочить по второму параметру? 1 да 0 - нет\n");
    scanf("%d",&key);
    if (key == 1){
    	printf("Выберите, по какому параметру упорядочить: \n 1. Имя/Фамилия \n 2. Год рождения \n 3. Пол \n 4. Рост \n"); 
    	int o; 
    	scanf("%d", &o);
    	if (o == p) return 0;
		switch (p) {
		    case 1:
		        if (o == 2) {
		            qsort(arr1, n, sizeof(struct Person), cmp_name_birth_year);
		        } else if (o == 3) {
		            qsort(arr1, n, sizeof(struct Person), cmp_name_gender);
		        } else if (o == 4) {
		            qsort(arr1, n, sizeof(struct Person), cmp_name_height);
		        }
		        break;
		    case 2:
		        if (o == 1) {
		            qsort(arr1, n, sizeof(struct Person), cmp_birth_year_name);
		        } else if (o == 3) {
		            qsort(arr1, n, sizeof(struct Person), cmp_birth_year_gender);
		        } else if (o == 4) {
		            qsort(arr1, n, sizeof(struct Person), cmp_birth_year_height);
		        }
		        break;
		    case 3:
		        if (o == 1) {
		            qsort(arr1, n, sizeof(struct Person), cmp_gender_name);
		        } else if (o == 2) {
		            qsort(arr1, n, sizeof(struct Person), cmp_gender_birth_year);
		        } else if (o == 4) {
		            qsort(arr1, n, sizeof(struct Person), cmp_gender_height);
		        }
		        break;
		    case 4:
		        if (o == 1) {
		            qsort(arr1, n, sizeof(struct Person), cmp_height_name);
		        } else if (o == 2) {
		            qsort(arr1, n, sizeof(struct Person), cmp_height_birth_year);
		        } else if (o == 3) {
		            qsort(arr1, n, sizeof(struct Person), cmp_height_gender);
		        }
		        break;
		    default:
		        printf("Неверный выбор параметра!");
		        return -1;
		}
    	
    
	}
	 
	printf("Результат упорядочивания:\n"); 
    for (i = 0; i < n; i++) { 
        printf("%s %s %d %s %.2lf\n", arr1[i].name, arr1[i].surname, arr1[i].birth_year, arr1[i].gender, arr1[i].height); 
    }
    return 0; 
}
