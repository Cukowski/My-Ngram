#include <stdio.h>
#include <stdlib.h>
#define MAX_ARR_SIZE 128

void fill_arr(int* arr, char* str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != '"') {
            arr[(int)str[i]] += 1;
        }
        i++;
    }
}

void print_arr(int* arr, int size_arr) {
    int i = 0;

    while (i < size_arr) {
        if (arr[i] > 0) {
            printf("%c:%d\n", i, arr[i]);
        }
        i++;
    }
}

int main(int ac, char **av) {
    int i = 1;
    int arr[MAX_ARR_SIZE] = {0};

    while (i < ac) {
        fill_arr(&arr[0], av[i]);
        i++;
    }
    print_arr(&arr[0], MAX_ARR_SIZE);
    return EXIT_SUCCESS;
}