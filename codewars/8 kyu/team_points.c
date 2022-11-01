// https://www.codewars.com/kata/5bb904724c47249b10000131/c

#include <stdio.h>

int points(const char *const games[10]) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (games[i][0] > games[i][2]) {
            score += 3;
        } else if (games[i][0] == games[i][2]) {
            score += 1;
        }
    }
    return score;
}

int main() {
    const char *const games[10] = {"1:1", "2:2", "3:3", "4:4", "2:2", "3:3", "4:4", "3:3", "4:4", "4:4"};
    printf("%d", points(games));
    return 0;
}
