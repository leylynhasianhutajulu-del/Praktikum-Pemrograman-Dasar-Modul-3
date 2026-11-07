# Setiap baris input dikonversi sendiri. Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    nilai = int(baris)

    if nilai >= 80:
        print("A")
    elif nilai >= 70 and nilai <= 79:
        print("B")
    elif nilai >= 60 and nilai <= 69:
        print("C")
    elif nilai >= 50 and nilai <= 59:
        print("D")
    elif nilai < 50:
        print("E")