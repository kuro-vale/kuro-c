#include <string.h>
#include <stdlib.h>

char *longestConsec(const char *const strings[/*arr_len*/], int arr_len, int k) {
    if (arr_len == 0 || k > arr_len || k <= 0) return calloc(1,1);
    char* largest = calloc(255, sizeof(char));
    for (int i = 0; i < arr_len; ++i) {
        char* result = calloc(255, sizeof(char));
        for (int j = 0; j < k; ++j) {
            if (i + j < arr_len) { strcat(result, strings[i + j]); }
        }
        if (strlen(largest) < strlen(result)) {
            strcpy(largest, result);
        }
    }
    return largest;
}
