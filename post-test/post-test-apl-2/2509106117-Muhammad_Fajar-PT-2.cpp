#include <iostream>
#include <iomanip>
using namespace std;

struct User{
    string username;
    string password;
};

struct Jenis_Barang{
    string kategori;
};

struct Barang{
    int id;
    string nama_barang;
    int harga_barang;
    int stok;
    Jenis_Barang jenis_barang;
};

User users[100];
Barang barang[100];

int jumlah_barang = 0;
int jumlah_user = 0;

void register_user(){

    cout<<"\nMENU REGISTER USER\n";

    cout<<"Username : ";
    getline(cin, users[jumlah_user].username);

    cout<<"Password : ";
    getline(cin, users[jumlah_user].password);

    jumlah_user++;

    cout<<"Registrasi berhasil ditambahkan, silahkan anda login kembali\n";
}

void tambah_barang(){
    cout<<"Silahkan Tambah Barang disini\n";

    barang[jumlah_barang].id = jumlah_barang + 1;

    cout<<"Nama Barang : ";
    cin.ignore();
    getline(cin,barang[jumlah_barang].nama_barang);

    cout<<"Jenis Barang : ";
    getline(cin,barang[jumlah_barang].jenis_barang.kategori);

    cout<<"Harga : ";
    cin>>barang[jumlah_barang].harga_barang;

    cout<<"Stok : ";
    cin>>barang[jumlah_barang].stok;

    jumlah_barang++;

    cout<<"Barang berhasil ditambahkan. Silahkan cek datanya\n";
}

void lihat_barang(){

    cout<<"\nDATA BARANG\n";
    cout<<"-------------------------------------------------------------\n";
    cout<<left<<setw(5)<<"ID"
        <<setw(15)<<"Nama Barang"
        <<setw(15)<<"Jenis Barang"
        <<setw(10)<<"Harga"
        <<setw(10)<<"Stok"<<endl;
    cout<<"-------------------------------------------------------------\n";

    for(int i=0;i<jumlah_barang;i++){
        cout<<left<<setw(5)<<barang[i].id
            <<setw(15)<<barang[i].nama_barang
            <<setw(15)<<barang[i].jenis_barang.kategori
            <<setw(10)<<barang[i].harga_barang
            <<setw(10)<<barang[i].stok<<endl;
    }

}

void ubah_barang(){

    int id;

    cout<<"Masukkan ID barang yang ingin anda ubah : ";
    cin>>id;

    for(int i=0;i<jumlah_barang;i++){

        if(barang[i].id == id){

            string nama_baru, jenis_baru;
            int harga_baru;
            int stok_baru;

            cout<<"Nama Barang (kosongkan jika tidak ingin anda mengubah nya) : ";
            cin.ignore();
            getline(cin,nama_baru);

            if(nama_baru != ""){
                barang[i].nama_barang = nama_baru;
            }

            cout<<"Jenis Barang (kosongkan jika tidak ingin anda mengubah nya) : ";
            getline(cin,jenis_baru);

            if(jenis_baru != ""){
                barang[i].jenis_barang.kategori = jenis_baru;
            }

            cout<<"Harga (isi 0 jika tidak ingin anda mengubah nya) : ";
            cin>>harga_baru;

            if(harga_baru != 0){
                barang[i].harga_barang = harga_baru;
            }

            cout<<"Stok Baru (isi 0 jika tidak ingin anda mengubah nya) : ";
            cin>>stok_baru;

            if(stok_baru != 0){
                barang[i].stok = stok_baru;
            }

            cout<<"Data berhasil diubah, silahkan cek datannya\n";
        }

    }

}

void hapus_barang(){

    int id;

    cout<<"Masukkan ID barang yang ingin anda hapus: ";
    cin>>id;

    for(int i=0;i<jumlah_barang;i++){

        if(barang[i].id == id){

            for(int j=i;j<jumlah_barang-1;j++){

                barang[j] = barang[j+1];

            }

            jumlah_barang--;

            cout<<"Barang berhasil dihapus. Silahkan cek datanya\n";
        }

    }

}

void menu(){

    int pilih;

    do{

        cout<<"\nSELEMAT DATANG DI MINIMARKET MUHAMMAD FAJAR\n";
        cout<<"1. Menu Tambah Barang\n";
        cout<<"2. Menu Lihat Barang\n";
        cout<<"3. Menu Ubah Barang\n";
        cout<<"4. Menu Hapus Barang\n";
        cout<<"5. Keluar\n";

        cout<<"Silahkan pilih menu : ";
        cin>>pilih;

        if(pilih == 1){
            tambah_barang();
        }
        else if(pilih == 2){
            lihat_barang();
        }
        else if(pilih == 3){
            ubah_barang();
        }
        else if(pilih == 4){
            hapus_barang();
        }
        else if(pilih == 5){
            cout<<"Anda Keluar dari MENU MINIMARKET MUHAMMAD FAJAR\n";
        }
        else{
            cout<<"Menu yang anda pilih tidak tersedia! Silahkan pilih menu 1 sampai 5\n";
        }

    }while(pilih != 5);

}

void login(){

    int jumlah_login = 3;
    string username,password;
    bool status_login = false;

    cout<<"\nMENU LOGIN MINIMARKET MUHAMMAD FAJAR\n";

    while (jumlah_login > 0 && status_login == false) {

        cout<<"Username : ";
        getline(cin,username);

        cout<<"Password : ";
        getline(cin,password);

        for(int i=0;i<jumlah_user;i++){

            if(username == users[i].username && password == users[i].password){

                cout<<"Login berhasil, selamat datang mahasiswa\n";

                status_login = true;

                menu();
                return;
            }

        }

        jumlah_login--;

        cout<<"Username atau password salah, kesempatan login tersisa : "<< jumlah_login <<"\n";
    }

    if (status_login == false) {
        cout << "\nUsername dan Password Anda salah sebanyak 3 kali. Kembali ke MENU MINIMARKET MUHAMMAD FAJAR\n";
    }

}

int main(){

    int pilih;

    do{

        cout<<"\nSELEMAT DATANG DI MINIMARKET MUHAMMAD FAJAR\n";
        cout<<"1. Register\n";
        cout<<"2. Login\n";
        cout<<"3. Keluar\n";

        cout<<"Pilih menu : ";
        cin>>pilih;
        cin.ignore();

        if(pilih == 1){
            register_user();
        }
        else if(pilih == 2){
            login();
        }
        else if(pilih == 3){
            cout<<"Terima kasih telah menggunakan SISTEM MINIMARKET MUHAMMAD FAJAR\n";
        }
        else{
            cout<<"Menu tidak tersedia, silahkan pilih menu 1 sampai 3\n";
        }

    }while(pilih != 3);

}