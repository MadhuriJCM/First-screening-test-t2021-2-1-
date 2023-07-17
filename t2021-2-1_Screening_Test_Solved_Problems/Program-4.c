#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int value;
} Entry;

int main() {
    int arr[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int count = 0;
    
    Entry map2[10];
    
    for (int i = 1; i <= 9; i++) {
        count = 0;
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
            if (arr[j] % i == 0) {
                count++;
            }
        }
        map2[i - 1].key = i;
        map2[i - 1].value = count;
    }
    printf("{");
    for (int k = 0; k < 9; k++) {
        printf("%d:%d, ", map2[k].key, map2[k].value);
    }
    printf("}");
    
    return 0;
}
