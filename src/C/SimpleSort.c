#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 25

int randint(int a, int b) {
    return rand() % (b+1 - a) + a;
}

void print_arr(int* arr, int arrlen) {
    for (int i = 0; i < arrlen - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[arrlen]);
}

void simpsort(int* arr, int arrlen) {
    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen; j++) {
            if (arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(void) {
    srand(time(NULL));

    int arr[N] = {0};
    for (int i = 0; i < N; i++) {
        arr[i] = randint(0, 20);
    }

    print_arr(arr, N);
    simpsort(arr, N);
    print_arr(arr, N);
}
