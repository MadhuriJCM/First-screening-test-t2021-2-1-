#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, i, j = 0;
    
    printf("Enter the value: ");
    scanf("%d", &a);
    
    if (a % 2 == 0) {
        a--;
    }
    
    char** list = (char**)malloc(a * sizeof(char*));
    
    for(i = 0; j < a; i++) {
        // if the number is not divisible by 2.
        if (i % 2 != 0) {
            list[j] = (char*)malloc(12 * sizeof(char)); // Assuming the maximum length of a number as a string is 12
            sprintf(list[j], "%d", i);
            j++;
        }
    }
    
    printf("%s", list[0]);
    for (int k = 1; k < j; k++) {
        printf(",%s", list[k]);
    }
    printf("\n");
    
    for (int k = 0; k < j; k++) {
        free(list[k]);
    }
    free(list);
    
    return 0;
}
