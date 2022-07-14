
#include "getch.c"
#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);

/**
 * @brief Get next integer from input into *pn.
 *
 * @param pn Pointer to integer to store the input.
 * @return int EOF if end of input, 0 if the next input is not a number and +ve value if the input contains a valid number.
 */
int getint(int *pn) {
    int c, sign;

    while (isspace(c = getch())) // skip white space
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); // not a number
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();

    if (!isdigit(c)) {
        ungetch(c);
        ungetch((sign == -1)? '-' : '+');
        return 0;
    }

    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');

    *pn *= sign;

    if (c != EOF)
        ungetch(c);

    return c;
}
