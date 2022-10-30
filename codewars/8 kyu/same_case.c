// https://www.codewars.com/kata/5dd462a573ee6d0014ce715b/c

#include <stdio.h>
#include <regex.h>

regex_t isSameCase;
regex_t isNotAlpha;

int same_case(char a, char b) {
    if (a == '\0' || b == '\0'){
        return -1;
    }
    // Compile regular expressions
    regcomp(&isSameCase, "[A-Z]\\{2\\}\\|[a-z]\\{2\\}", 0);
    regcomp(&isNotAlpha, "[^A-Za-z]", 0);
    char string[3];
    sprintf(string, "%c%c", a, b);

    if (!regexec(&isSameCase, string, 0, NULL, 0)) {
        return 1;
    } else if (!regexec(&isNotAlpha, string, 0, NULL, 0)) {
        return -1;
    } else {
        return 0;
    }
}
