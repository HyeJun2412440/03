#include <stdio.h>

int main(void){
    char c;

    printf("Enter a character : ");
    scanf("%c", &c);

    c = c + 1;

    printf("The next character is %c\n", c);

    return 0;

}