// https://www.codewars.com/kata/5f70c883e10f9e0001c89673/c

#include <stdio.h>
#include <stdbool.h>

void swap(int *array, int a, int i, int j) {
  a = array[i];
  array[i] = array[j];
  array[j] = a;
}

void sort(int *array, int n, bool reversed) {
  int a = 0;
  for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
          if (reversed) {
              if (array[i] < array[j]) {
                  swap(array, a, i ,j);
              }
          } else {
              if (array[i] > array[j]) {
                  swap(array, a, i ,j);
              }
          }
      }
  }
}

void flip(char d, int *array, int n, int *result) {
  if (d == 'L') {
      sort(array, n, true);
  } else if (d == 'R') {
      sort(array, n, false);
  } else {
      printf("Please enter a valid direction ('L' or 'R')");
      return;
  }
  for (int i = 0; i < n; ++i) {
      result[i] = array[i];
  }
}
