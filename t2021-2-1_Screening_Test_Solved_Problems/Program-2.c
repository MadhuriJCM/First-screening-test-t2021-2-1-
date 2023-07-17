#include <stdio.h>
#include <stdlib.h>

int main() {
    int j = 0;
    int a;
    
    printf("Enter the value: ");
    scanf("%d", &a);
    
    int* list = (int*) malloc(a * sizeof(int));
    
    for (int i = 0; j < a; i++) {
        if (i % 2 != 0) {
            list[j] = i;
            j++;
        }
    }
    
    for (int k = 0; k < j; k++) {
        printf("%d", list[k]);
        if (k != j - 1) {
            printf(",");
        }
    }
    
    free(list);
    
    return 0;
}
