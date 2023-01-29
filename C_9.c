#include <stdio.h>

int main() {
    int sum;
    int a;

    printf("Insert length of array:\n");
    if (scanf("%d", &a) != 1 || a <= 0 || a > 1000) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    int array[a];
    for (int i = 0; i < a; i++) {
        printf("Insert number %d:\n", i + 1);
        if (scanf("%d", &array[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            return 1;
        }
    }
    sum = 0;
    for (int i = 0; i < a; i++) {
        sum = sum + array[i];
    }
    printf("Sum is %d\n", sum);
    return 0;
}
