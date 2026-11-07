#include <stdio.h>

int main() {
    char baris[256];
    double v[3], temp;
    int n, pos, off;

    /* Setiap baris input diurutkan sendiri. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        n = 0;
        pos = 0;
        while (n < 3 && sscanf(baris + pos, "%lf%n", &v[n], &off) == 1) {
            n++;
            pos += off;
        }

        if (n == 0)
            break;

        if (n == 3) {
            if (v[0] > v[1]) { temp = v[0]; v[0] = v[1]; v[1] = temp; }
            if (v[1] > v[2]) { temp = v[1]; v[1] = v[2]; v[2] = temp; }
            if (v[0] > v[1]) { temp = v[0]; v[0] = v[1]; v[1] = temp; }
            printf("%.15g %.15g %.15g\n", v[0], v[1], v[2]);
        } else if (n == 2) {
            if (v[0] > v[1]) { temp = v[0]; v[0] = v[1]; v[1] = temp; }
            printf("%.15g %.15g\n", v[0], v[1]);
        } else {
            printf("%.15g\n", v[0]);
        }
    }
    return 0;
}