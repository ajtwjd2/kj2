#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int num1 = 45510;
    int num2 = 2023;

    swap(&num1, &num2);

    printf("num1 value : %d\n", num1);
    printf("num2 value : %d\n", num2);

    return 0;
}
