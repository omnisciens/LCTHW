/* stdio.h contient les fonctions input/output dont printf. 
   stdio est entre <> car elle fait partie de la librairie standard.
*/
#include <stdio.h>

int main() {
    int age = 10;
    int height = 72;
    double doubleValue = 3.1456789;

    printf("I am %d years old and there is a vertical tab.\n\v", age);
    printf("I am %d inches tall.\n", height);
    printf("Age with a width of four, blanks filled with 0: %04d.\n", age);
    printf("Number: %f, formatted like this .0000: %.4f.\n", doubleValue, doubleValue);

/* 
    printf escape codes:
    -------------------
    - \n: new line
    - \t: tab
    - \v: vertical tab
    - \\: \
    - \': '
    - \": "
    - \?: ?
    - \% or %%: %
    - \0: null byte

    printf format codes:
    -------------------
    - %c: character
    - %d: decimal
    - %e: exponential floating-point number
    - %f: floating-point number
    - %o: octal number
    - %s: string
    - %u: unsigned decimal number
    - %x: hexadecimal

*/
    return 0;
}