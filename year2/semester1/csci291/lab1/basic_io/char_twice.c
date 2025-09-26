#include <stdio.h>

int main(void) {
    char ch;

    printf("enter a character: ");
    scanf(" %c", &ch); 

    printf("char printed twice: %c %c\n", ch, ch);

    return 0;
}

