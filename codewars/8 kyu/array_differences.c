// https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/c

#include <stdio.h>

void reverse_sort(int *arr, size_t n) {
    int a = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] < arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

int diff_sum(int *arr, size_t n) {
    if (n == 0) {
        return 0;
    }
    reverse_sort(arr, n);
    int result = 0;
    for (int i = 0; i < n - 1; ++i) {
        result += arr[i] - arr[i + 1];
    }
    return result;
}

int main() {
    int array[3] = {1, 2, 10};
    printf("%x", diff_sum(array, 3));
    return 0;
}
