#include <stdio.h>

int main() {
    int a[10], i, j, n, temp;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {  
        for (j = 0; j < n - i - 1; j++) {  
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Bubble Sort: \n");
    for (i = 0; i < n; i++) {
        printf("%d \n", a[i]);
    }

    return 0;  // Added return statement
}


