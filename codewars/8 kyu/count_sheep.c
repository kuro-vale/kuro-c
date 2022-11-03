// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/c

#include <stdio.h>
#include <string.h>

char *count_sheep(int n) {
    char sheep[2048] = "";
    for (int i = 1; i <= n; ++i) {
        sprintf(sheep, "%s%d sheep...", sheep, i);
    }
    return strdup(sheep);
}

int main() {
    printf("%s", count_sheep(2));
    return 0;
}
