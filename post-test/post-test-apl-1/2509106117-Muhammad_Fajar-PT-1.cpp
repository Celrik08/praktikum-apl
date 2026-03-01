#include <iostream>
using namespace std;

int main() {

    string UserName = "117";
    string Password = "117";

    string InputUsername;
    string InputPassword;

    int PercobaanLogin = 3;
    bool StatusLogin = false;

    while (PercobaanLogin > 0 && StatusLogin == false) {

        cout << "=====================================\n";
        cout << "         PROGRAM KONVERSI PANJANG     \n";
        cout << "=====================================\n";
        cout << "Username  : ";
        cin >> InputUsername;
        cout << "Password : ";
        cin >> InputPassword;

        if (InputUsername == UserName && InputPassword == Password) {
            StatusLogin = true;
            cout << "\nLogin Berhasil, Selamat Datang Student!\n\n";
        } else {
            PercobaanLogin--;
            cout << "\nUsername atau Password salah, silahkan coba lagi! Percobaan Anda sebanyak " << PercobaanLogin << endl;
        }
    }

    if (StatusLogin == false) {
        cout << "\nUsername dan Password Anda salah sebanyak 3 kali. Program ini berhenti\n";
        return 0;
    }

    int PilihMenu;
    int Panjang;

    do {
        cout << "\n=====================================\n";
        cout << "            MENU UTAMA               \n";
        cout << "=====================================\n";
        cout << "1. Konversi Meter ke Kilometer & Centimeter\n";
        cout << "2. Konversi Kilometer ke Meter & Centimeter\n";
        cout << "3. Konversi Centimeter ke Meter & Kilometer\n";
        cout << "4. Keluar\n";
        cout << "Pilih Menu (1-4): ";
        cin >> PilihMenu;

        if (PilihMenu == 1) {

            cout << "\nInput panjang dalam m (Meter): ";
            cin >> Panjang;

            int Kilometer = Panjang / 1000;
            int Centimeter = Panjang * 100;

            cout << "Hasil: " << Kilometer << " km dan "
                 << Centimeter << " cm\n";

        } else if (PilihMenu == 2) {

            cout << "\nInput panjang dalam km (Kilometer): ";
            cin >> Panjang;

            int Meter = Panjang * 1000;
            int Centimeter = Panjang * 100000;

            cout << "Hasil: " << Meter << " m dan "
                 << Centimeter << " cm\n";

        } else if (PilihMenu == 3) {

            cout << "\nInput panjang dalam cm (Centimeter): ";
            cin >> Panjang;

            int Meter = Panjang / 100;
            int Kilometer = Panjang / 100000;

            cout << "Hasil: " << Meter << " m dan "
                 << Kilometer << " km\n";

        } else if (PilihMenu == 4) {
            cout << "\nTerima kasih telah menggunakan PROGRAM KONVERENSI PANJANG.\n";
        } else {
            cout << "\nMenu yang Anda pilih tidak tersedia!, silahkan pilih menu kembali\n";
        }

    } while (PilihMenu != 4);

    return 0;
}