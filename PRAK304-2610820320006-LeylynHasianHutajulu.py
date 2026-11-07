# Setiap baris input diperiksa sendiri. Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    a = int(baris)

    if a < 0:
        print("Input tidak valid")
    elif a > 99:
        print("Anda Menginput Melebihi Limit Bilangan")
    elif a == 0:
        print("Nol")
    elif a < 10:
        print("Satuan")
    elif a > 10 and a < 20:
        print("Belasan")
    else:
        print("Puluhan")