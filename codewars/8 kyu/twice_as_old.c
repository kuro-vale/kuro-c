// https://www.codewars.com/kata/5b853229cfde412a470000d0/c

#include <stdio.h>
#include <stdlib.h>

int twice_as_old(int father_age, int son_age) {
    return abs(father_age - son_age * 2);
}

int main() {
    printf("%d", twice_as_old(36, 7));
    return 0;
}
