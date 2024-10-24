#include <stdio.h>

int main() {
    int lato, i, j; //prima colonna j == 0 ultima colonna j==1
    do {
        printf("inserisci numeri righe: ");
        scanf("%d", &lato);
    } while (lato <= 0);

    for (i = 0; i < lato; i++) {
        for (j = 0; j <= i; j++) {
            if (i == lato - 1 || j == 0 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
