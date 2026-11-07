#include <stdio.h>

int main() {
    char baris[100];
    int n;

    /* Setiap baris input diperiksa sendiri. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        if (sscanf(baris, "%d", &n) != 1)
            break;

        if (n > 0)
            printf("positif\n");
        else if (n < 0)
            printf("negatif\n");
        else
            printf("nol\n");
    }
    return 0;
}