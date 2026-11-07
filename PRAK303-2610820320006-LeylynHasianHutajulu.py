# Setiap baris input diperiksa sendiri. Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    n = int(baris)

    if n > 0:
        print("positif")
    elif n < 0:
        print("negatif")
    else:
        print("nol")