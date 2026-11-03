 #include <iostream>
 using namespace std;

 int main() {
    int pilihan, harga, jumlah = 0;

    cout << "    ===MENU=== " << endl;
    cout << "1. Nasi Goreng  (15K)" << endl;
    cout << "2. Mie Ayam (12K)" << endl;
    cout << "3. Es Teh (3K)" << endl;

    cout << "Pilihan Menu : ";
    cin >> pilihan;
    cout << "jumlah : ";
    cin >> jumlah;
    
    switch (pilihan) {
        case 1:
            harga = 15000;
            break;
        
        case 2:
            harga = 12000;
            break;

        case 3:
            harga = 3000;
            break;

        default:
            cout << "menu tidak ada" << endl;
            return 0;
    }
    int total = harga * jumlah;
    cout << "Total Bayar : Rp " << total << endl;

    return 0;
}