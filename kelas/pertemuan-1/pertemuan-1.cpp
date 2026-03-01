// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World! ";
//     cout << "Belajar C + sangat seru😀";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!" << endl;
//     cout << "Belajar C + sangat seru😀";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string nama = "Kei";
//     int umur = 20;
//     cout << "Halo, nama saya " << nama << " dan umur saya " << umur << "tahun";
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string nama;
//     cout << "Masukkan nama kamu: ";
//     cin >> nama;
//     cout << "Halo, " << nama;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string nama;
//     cout << "Masukkan nama kamu: ";
//     getline(cin, nama);
//     cout << "Halo, " << nama;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Size of char: " << sizeof(char) << endl;
//     cout << "Size of int: " << sizeof(int) << endl;
//     cout << "Size of float: " << sizeof(float) << endl;
//     cout << "Size of double: " << sizeof(double) << endl;
//     cout << "Size of long: " << sizeof(long);
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, hasil;
//     cout << "Masukkan nilai a: ";
//     cin >> a;
//     cout << "Masukkan nilai b: ";
//     cin >> b;
//     // Penjumlahan
//     hasil = a + b;
//     cout << "Hasil penjumlahan: " << hasil << endl;
//     // Pengurangan
//     hasil = a - b;
//     cout << "Hasil pengurangan: " << hasil << endl;
//     // Perkalian
//     hasil = a * b;
//     cout << "Hasil perkalian: " << hasil << endl;
//     // Pembagian
//     hasil = a / b;
//     cout << "Hasil pembagian: " << hasil << endl;
//     // Modulus
//     hasil = a % b;
//     cout << "Hasil modulus: " << hasil << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Masukkan nilai a: ";
//     cin >> a;
//     cout << "Masukkan nilai b: ";
//     cin >> b;
//     // Penjumlahan
//     a += b;
//     cout << "Hasil penjumlahan: " << a << endl;
//     // Pengurangan
//     a -= b;
//     cout << "Hasil pengurangan: " << a << endl;
//     // Perkalian
//     a *= b;
//     cout << "Hasil perkalian: " << a << endl;
//     // Pembagian
//     a /= b;
//     cout << "Hasil pembagian: " << a << endl;
//     // Modulus
//     a %= b;
//     cout << "Hasil modulus: " << a << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int apel, melon;
//     cout << "=== Program Perbandingan Buah ===" << endl;
//     cout << "Masukkan jumlah Apel: ";
//     cin >> apel;
//     cout << "Masukkan jumlah Melon: ";
//     cin >> melon;
//     cout << "\n--- Hasil Operator Perbandingan ---" << endl;
//     cout << boolalpha;
//     cout << "Apakah jumlah Apel == Melon? : " << (apel == melon) << endl;
//     cout << "Apakah jumlah Apel != Melon? : " << (apel != melon) << endl;
//     cout << "Apakah jumlah Apel > Melon? : " << (apel > melon) << endl;
//     cout << "Apakah jumlah Apel < Melon? : " << (apel < melon) << endl;
//     cout << "Apakah jumlah Apel >= Melon? : " << (apel >= melon) << endl;
//     cout << "Apakah jumlah Apel <= Melon? : " << (apel <= melon) << endl;
//     cout << "\n--- Keputusan Belanja ---" << endl;
//     if (apel > melon) {
//         cout << "Stok Apel lebih banyak, kita jual Apel aja." << endl;
//     } else if (melon > apel) {
//         cout << "Stok Melon lebih banyak, kita jual Melon aja." << endl;
//     } else {
//         cout << "Stok sama banyak, kita jual aja semua" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Masukkan nilai a: "; cin >> a;
//     cout << "Masukkan nilai b: "; cin >> b;
//     // Dan
//     cout << "Apakah a lebih besar dari 0 dan b lebih kecil dari 10? " << (a > 0 & b < 10) << endl;
//     //  Atau
//     cout << "Apakah a lebih besar dari 0 atau b lebih kecil dari 10? " << (a > 0 || b < 10) << endl;
//     //  Tidak
//     cout << "Apakah a lebih besar dari 0? " << !a << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     bool hujan = false;
//     string pesan = hujan ? "Bawa payung" : "Tidak perlu payung";
//     cout << pesan;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int z = 1;
//     cout << "Sebelum increment " << z << endl;
//     cout << "Increment di depan " << ++z << ", sudah bertambah" << endl;
//     cout << "Increment di belakang " << z++ << ", belum bertambah" << endl;
//     cout << "Hasil akhir " << z << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     bool mengantuk = true;
//     if (mengantuk) {
//         cout << "Saya Tidur";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int age = 19;
//     if (age > 18)
//     cout << "Dewasa";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int age = 18;

//     if (age < 13) {
//         cout << "Anak";
//     }
//     else if (age == 1 and age == 18) {
//         cout << "Remaja";
//     }
//     else {
//         cout << "Dewasa";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int nilai;
//     cout << " = Konversi Nilai Akademik =\n";
//     cout << "Masukkan nilai akhir (0-100): ";
//     cin >> nilai;
//     if (nilai < 0 || nilai > 100) {
//         cout << "Error: Nilai harus 0-100.\n";
//         return 1;
//     }
//     switch (nilai / 10) {
//         case 10:
//             cout << "Predikat: A (Sangat Baik)\n";
//             break;
//         case 9:
//             cout << "Predikat: A (Sangat Baik)\n";
//             break;
//         case 8:
//             cout << "Predikat: B (Baik)\n";
//             break;
//         case 7:
//             cout << "Predikat: C (Cukup)\n";
//             break;
//         case 6:
//             cout << "Predikat: D (Kurang)\n";
//             break;
//         default:
//             cout << "Predikat: E (Gagal)\n";
//             break;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     bool malas = true;
//     bool mengantuk = true;
//     if (malas) {
//         if (mengantuk) {
//             cout << "Saya tidur";
//         }
//     } else {
//         cout << "Gak ngapa-ngapain";
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     bool mengantuk = true;
//     string aktivitas = (mengantuk) ? "Tidur" : "Belajar";
//     cout << aktivitas;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 0; i < 5; i ++ ) {
//         cout << i << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;
//     while (i < 5) {
//     cout << i << endl; i++; }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     for (int x : arr) {
//     cout << x << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;
//     do {
//         cout << i << endl;
//         i++;
//     } while (i < 5);
//     return 0;
// }