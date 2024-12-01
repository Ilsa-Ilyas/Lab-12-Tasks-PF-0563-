#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    float *arr, max;
    printf("Enter the total number of elements (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) {
        printf("Invalid number of elements. Please enter a value between 1 and 100.\n");
        return 1;
    }
    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest element is: %.2f\n", max);
    free(arr);
    return 0;
}
