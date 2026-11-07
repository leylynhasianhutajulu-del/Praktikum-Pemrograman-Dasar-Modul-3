#include <stdio.h>

int main() {
    char baris[100];
    long detik, sisa, hari;
    int jam, menit, dtk;

    /* Setiap baris input dikonversi sendiri. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        if (sscanf(baris, "%ld", &detik) != 1)
            break;

        hari = detik / 86400;
        sisa = detik % 86400;
        jam = sisa / 3600;
        menit = (sisa % 3600) / 60;
        dtk = sisa % 60;

        if (hari > 0)
            printf("%ld hari %02d:%02d:%02d\n", hari, jam, menit, dtk);
        else
            printf("%02d:%02d:%02d\n", jam, menit, dtk);
    }
    return 0;
}