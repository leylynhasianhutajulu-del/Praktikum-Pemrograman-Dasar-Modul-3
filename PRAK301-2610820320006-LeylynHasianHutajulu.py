def ubah(s):
    try:
        return int(s)
    except ValueError:
        return float(s)


# Setiap baris input diurutkan sendiri. Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    angka = [ubah(x) for x in baris.split()][:3]

    if len(angka) == 3:
        a, b, c = angka
        if a > b:
            a, b = b, a
        if b > c:
            b, c = c, b
        if a > b:
            a, b = b, a
        print(a, b, c)
    elif len(angka) == 2:
        a, b = angka
        if a > b:
            a, b = b, a
        print(a, b)
    else:
        print(*angka)