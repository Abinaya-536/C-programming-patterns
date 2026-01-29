#include <stdio.h>

int main() {
    int i, j;

    
    for (i = 0; i < 12; i++) {
        printf("*");
    }
    printf("\n");

    
    for (i = 2; i >= 1; i--) {
        for (j = 0; j < i * 2; j++) {
            printf("*");
        }
        for (j = 0; j < 12 - i * 4; j++) {
            printf(" ");
        }
        for (j = 0; j < i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++) {
        for (j = 0; j < i * 2; j++) {
            printf("*");
        }
        for (j = 0; j < 12 - i * 4; j++) {
            printf(" ");
        }
        for (j = 0; j < i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }

        for (i = 0; i < 12; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
