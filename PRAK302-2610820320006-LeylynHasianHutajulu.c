#include <stdio.h>

int main() {
    char baris[100];
    int nilai;

    /* Setiap baris input dikonversi sendiri. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        if (sscanf(baris, "%d", &nilai) != 1)
            break;

        if (nilai >= 80)
            printf("A\n");
        else if (nilai >= 70 && nilai <= 79)
            printf("B\n");
        else if (nilai >= 60 && nilai <= 69)
            printf("C\n");
        else if (nilai >= 50 && nilai <= 59)
            printf("D\n");
        else if (nilai < 50)
            printf("E\n");
    }
    return 0;
}