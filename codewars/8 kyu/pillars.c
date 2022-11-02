// https://www.codewars.com/kata/5bb0c58f484fcd170700063d/c

#include <stdio.h>

long pillars(int num_of_pillars, int distance, int width) {
    distance *= 100;
    return num_of_pillars == 1 ? 0 : distance * (num_of_pillars - 1) + width * (num_of_pillars - 2);
}

int main() {
    printf("%ld", pillars(2, 20, 10));
    return 0;
}
