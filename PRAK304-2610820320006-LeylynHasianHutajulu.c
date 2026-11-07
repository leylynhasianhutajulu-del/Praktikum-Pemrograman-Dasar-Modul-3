#include <stdio.h>

int main() {
    char baris[100];
    int a;

    /* Setiap baris input diperiksa sendiri. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        if (sscanf(baris, "%d", &a) != 1)
            break;

        if (a < 0)
            printf("Input tidak valid\n");
        else if (a > 99)
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        else if (a == 0)
            printf("Nol\n");
        else if (a < 10)
            printf("Satuan\n");
        else if (a > 10 && a < 20)
            printf("Belasan\n");
        else
            printf("Puluhan\n");
    }
    return 0;
}