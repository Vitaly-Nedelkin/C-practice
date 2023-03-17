#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *input_file, *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
	char line[100];
    int year;
    while (fgets(line, sizeof(line), input_file) != NULL) {
        sscanf(line, "%*s %*s %*s %d", &year);  
        if (year > 1980) {
            fprintf(output_file, "%s", line);  
        }
    }
    fclose(input_file);
    fclose(output_file);
    return 0;
}
