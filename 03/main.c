
#include <stdio.h>

int main(void) {
    
    char first[20];
    char last[20];

    printf("What is your first name \n");
    scanf("%s", &first);
    printf("What is your last name \n");
    scanf("%s", &last);
    printf("Hello %s %s\n", first, last);
}