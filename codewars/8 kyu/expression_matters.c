// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/c
#include <stdio.h>

int expression_matter(int a, int b, int c) {
    int results[] = {a * b * c, a + b + c, (a + b) * c, a * (b + c)};
    for (int i = 1; i < 4; ++i) {
        if (results[0] < results[i]) {
            results[0] = results[i];
        }
    }
    return results[0];
}

int main() {
    printf("%d", expression_matter(5, 3, 2));
    return 0;
}
