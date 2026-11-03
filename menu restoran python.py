menu = int(input("Pilih Menu makanan : "))
jumlah = int(input("masukan jumlah   :"))

match menu:
    case 1:
        harga = 15000
    case 2:
        harga = 12000
    case 3:
        harga = 3000
    case _:
        harga = 0

if harga == 0:
    print("menu tidak ada")
else:
    total = harga * jumlah
    print("=== MENU ====")
    print("1. Nasi Goreng (15k)")
    print("2. Mie ayam (12k)")
    print("3. Es Teh (3k)")
    print(f"Total Bayar : Rp {total}")
    