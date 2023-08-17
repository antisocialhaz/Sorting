#include <stdio.h>

int main() {
    int a[10], i, j, n, temp, min_index;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        min_index = i; 

        
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }

   
        if (min_index != i) {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    printf("Selection Sort: \n");
    for (i = 0; i < n; i++) {
        printf("%d \n", a[i]);
    }

    return 0;
}
