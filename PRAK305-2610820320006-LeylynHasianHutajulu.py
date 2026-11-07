# Setiap baris input dikonversi sendiri. Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    detik = int(baris)

    hari = detik // 86400
    sisa = detik % 86400
    jam = sisa // 3600
    menit = (sisa % 3600) // 60
    dtk = sisa % 60

    if hari > 0:
        print(f"{hari} hari {jam:02d}:{menit:02d}:{dtk:02d}")
    else:
        print(f"{jam:02d}:{menit:02d}:{dtk:02d}")