// https://www.codewars.com/kata/5c374b346a5d0f77af500a5a/c

#include <stdlib.h>

const char *elevator(int left, int right, int call) {
    int left_distance = abs(left - call);
    int right_distance = abs(right - call);
    if (left_distance < right_distance) {
        return "left";
    } else {
        return "right";
    }
}
