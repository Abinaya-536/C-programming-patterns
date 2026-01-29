#include <stdio.h>

int main() {
    int i, j;
    // Outer loop for each line (from 1 to 5)
    for (i = 1; i <= 5; i++) {
  
     
        for (j = 'E' - (i - 1); j <= 'E'; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}