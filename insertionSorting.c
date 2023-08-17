#include <stdio.h>

int main() {
    int a[10], i, j, n, key;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;


        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key; 
    }

    printf("Insertion Sort: \n");
    for (i = 0; i < n; i++) {
        printf("%d \n", a[i]);
    }

    return 0;
}
