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

int total_stok(Barang *barang, int index){
    if(index < 0){
        return 0;
    }
    return (barang+index)->stok + total_stok(barang,index-1);
}

void Output(string pesan){
    cout<<pesan<<endl;
}

void Output(string pesan, int nilai){
    cout<<pesan<<nilai<<endl;
}

bool cek_user(User *users, int &jumlah_user, string username, string password){
    for(int i=0;i<jumlah_user;i++){
        if(username == (users+i)->username && password == (users+i)->password){
            return true;
        }
    }
    return false;
}

void register_user(User *users, int &jumlah_user){

    cout<<"\nMENU REGISTER USER\n";

    cout<<"Username : ";
    getline(cin, (users+jumlah_user)->username);

    cout<<"Password : ";
    getline(cin, (users+jumlah_user)->password);

    jumlah_user++;

    Output("Registrasi berhasil ditambahkan, silahkan anda login kembali");
}

void tambah_barang(Barang *barang, int &jumlah_barang){

    cout<<"Silahkan Tambah Barang disini\n";

    Barang *ptr = barang + jumlah_barang;

    if(jumlah_barang == 0){
        ptr->id = 1;
    }
    else{
        ptr->id = (ptr-1)->id + 1;
    }

    cout<<"Nama Barang : ";
    cin.ignore();
    getline(cin, ptr->nama_barang);

    cout<<"Jenis Barang : ";
    getline(cin, ptr->jenis_barang.kategori);

    cout<<"Harga : ";
    cin>>ptr->harga_barang;

    cout<<"Stok : ";
    cin>>ptr->stok;

    jumlah_barang++;

    Output("Barang berhasil ditambahkan. Silahkan cek datanya");
}

void lihat_barang(Barang *barang, int &jumlah_barang){

    cout<<"\nDATA BARANG\n";
    cout<<"-------------------------------------------------------------\n";
    cout<<left<<setw(5)<<"ID"
        <<setw(15)<<"Nama Barang"
        <<setw(15)<<"Jenis Barang"
        <<setw(10)<<"Harga"
        <<setw(10)<<"Stok"<<endl;
    cout<<"-------------------------------------------------------------\n";

    for(int i=0;i<jumlah_barang;i++){
        cout<<left<<setw(5)<<(barang+i)->id
            <<setw(15)<<(barang+i)->nama_barang
            <<setw(15)<<(barang+i)->jenis_barang.kategori
            <<setw(10)<<(barang+i)->harga_barang
            <<setw(10)<<(barang+i)->stok<<endl;
    }

    Output("Total stok barang : ", total_stok(barang,jumlah_barang-1));
}

void ubah_barang(Barang *barang, int &jumlah_barang){

    int id;
    cout<<"Masukkan ID barang yang ingin anda ubah : ";
    cin>>id;

    for(int i=0;i<jumlah_barang;i++){

        if((barang+i)->id == id){

            string nama_baru, jenis_baru;
            int harga_baru, stok_baru;

            cout<<"Nama Barang (kosongkan jika tidak ingin anda mengubah nya) : ";
            cin.ignore();
            getline(cin,nama_baru);

            if(nama_baru != ""){
                (barang+i)->nama_barang = nama_baru;
            }

            cout<<"Jenis Barang (kosongkan jika tidak ingin anda mengubah nya) : ";
            getline(cin,jenis_baru);

            if(jenis_baru != ""){
                (barang+i)->jenis_barang.kategori = jenis_baru;
            }

            cout<<"Harga (isi 0 jika tidak ingin anda mengubah nya) : ";
            cin>>harga_baru;

            if(harga_baru != 0){
                (barang+i)->harga_barang = harga_baru;
            }

            cout<<"Stok Baru (isi 0 jika tidak ingin anda mengubah nya) : ";
            cin>>stok_baru;

            if(stok_baru != 0){
                (barang+i)->stok = stok_baru;
            }

            Output("Data berhasil diubah, silahkan cek datannya");
        }
    }
}

void hapus_barang(Barang *barang, int *jumlah_barang){

    int id;
    cout<<"Masukkan ID barang yang ingin anda hapus: ";
    cin>>id;

    for(int i=0;i<*jumlah_barang;i++){

        if((barang+i)->id == id){

            for(int j=i;j<*jumlah_barang-1;j++){
                *(barang+j) = *(barang+j+1);
            }

            (*jumlah_barang)--;

            Output("Barang berhasil dihapus. Silahkan cek datanya");
        }
    }
}

void bubble_sort_nama(Barang *barang, int jumlah_barang){
    for(int i=0;i<jumlah_barang-1;i++){
        for(int j=0;j<jumlah_barang-i-1;j++){
            if((barang+j)->nama_barang > (barang+j+1)->nama_barang){
                Barang temp = *(barang+j);
                *(barang+j) = *(barang+j+1);
                *(barang+j+1) = temp;
            }
        }
    }
}

void selection_sort_harga(Barang *barang, int jumlah_barang){
    for(int i=0;i<jumlah_barang-1;i++){
        int max_idx = i;
        for(int j=i+1;j<jumlah_barang;j++){
            if((barang+j)->harga_barang > (barang+max_idx)->harga_barang){
                max_idx = j;
            }
        }
        Barang temp = *(barang+i);
        *(barang+i) = *(barang+max_idx);
        *(barang+max_idx) = temp;
    }
}

void merge(Barang *barang, int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    Barang L[100], R[100];

    for(int i=0;i<n1;i++)
        L[i] = *(barang + l + i);
    for(int j=0;j<n2;j++)
        R[j] = *(barang + m + 1 + j);

    int i=0, j=0, k=l;

    while(i<n1 && j<n2){
        if(L[i].stok < R[j].stok){
            *(barang+k) = L[i];
            i++;
        } else {
            *(barang+k) = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        *(barang+k) = L[i];
        i++; k++;
    }

    while(j<n2){
        *(barang+k) = R[j];
        j++; k++;
    }
}

void merge_sort_stok(Barang *barang, int l, int r){
    if(l < r){
        int m = (l + r) / 2;
        merge_sort_stok(barang, l, m);
        merge_sort_stok(barang, m+1, r);
        merge(barang, l, m, r);
    }
}

int binary_search_id(Barang *barang, int jumlah_barang, int id){
    int kiri = 0;
    int kanan = jumlah_barang - 1;

    while(kiri <= kanan){
        int tengah = (kiri + kanan) / 2;

        if((barang+tengah)->id == id){
            return tengah; 
        }
        else if((barang+tengah)->id < id){
            kiri = tengah + 1;
        }
        else{
            kanan = tengah - 1;
        }
    }

    return -1;
}

int linear_search_nama(Barang *barang, int jumlah_barang, string nama){
    for(int i = 0; i < jumlah_barang; i++){
        if((barang+i)->nama_barang == nama){
            return i;
        }
    }
    return -1;
}

void menu(Barang *barang, int &jumlah_barang){

    int pilih;

    do{
        cout<<"\nSELEMAT DATANG DI MINIMARKET MUHAMMAD FAJAR\n";
        cout<<"1. Menu Tambah Barang\n";
        cout<<"2. Menu Lihat Barang\n";
        cout<<"3. Menu Ubah Barang\n";
        cout<<"4. Menu Hapus Barang\n";
        cout<<"5. Menu Sorting Nama (Ascending (terkecil ke terbesar)) Metode Bubble Sort)\n";
        cout<<"6. MenuSorting Harga (Descending (terbesar ke terkecil)) Metode Selection Sort)\n";
        cout<<"7. Menu Sorting Stok (Ascending (terkecil ke terbesar)) - Metode Merge Sort)\n";
        cout<<"8. Searching ID (Metode Binary Search)\n";
        cout<<"9. Searching Nama (Metode Linear Search)\n";
        cout<<"10. Keluar\n";

        cout<<"Silahkan pilih menu : ";
        cin>>pilih;

        if(pilih == 1){
            tambah_barang(barang,jumlah_barang);
        }
        else if(pilih == 2){
            lihat_barang(barang,jumlah_barang);
        }
        else if(pilih == 3){
            ubah_barang(barang,jumlah_barang);
        }
        else if(pilih == 4){
            hapus_barang(barang,&jumlah_barang);
        }
        else if(pilih == 5){
            bubble_sort_nama(barang,jumlah_barang);
            lihat_barang(barang,jumlah_barang);
        }
        else if(pilih == 6){
            selection_sort_harga(barang,jumlah_barang);
            lihat_barang(barang,jumlah_barang);
        }
        else if(pilih == 7){
            merge_sort_stok(barang,0,jumlah_barang-1);
            lihat_barang(barang,jumlah_barang);
        }
        else if(pilih == 8){
            int id;
            cout<<"Masukkan ID yang ingin anda dicari: ";
            cin>>id;

            int hasil = binary_search_id(barang, jumlah_barang, id);

            if(hasil != -1){
                cout<<"Data yang anda cari telah ditemukan:\n";
                cout<<"ID: "<<(barang+hasil)->id<<endl;
                cout<<"Nama: "<<(barang+hasil)->nama_barang<<endl;
                cout<<"Kategori: "<<(barang+hasil)->jenis_barang.kategori<<endl;
                cout<<"Harga: "<<(barang+hasil)->harga_barang<<endl;
                cout<<"Stok: "<<(barang+hasil)->stok<<endl;
            } else {
                cout<<"Data yang anda cari tidak ditemukan\n";
            }
        }
        else if(pilih == 9){
            string nama;
            cout<<"Masukkan nama barang yang ingin anda cari: ";
            cin.ignore();
            getline(cin, nama);

            int hasil = linear_search_nama(barang, jumlah_barang, nama);

            if(hasil != -1){
                cout<<"Data ditemukan:\n";
                cout<<"ID: "<<(barang+hasil)->id<<endl;
                cout<<"Nama: "<<(barang+hasil)->nama_barang<<endl;
                cout<<"Kategori: "<<(barang+hasil)->jenis_barang.kategori<<endl;
                cout<<"Harga: "<<(barang+hasil)->harga_barang<<endl;
                cout<<"Stok: "<<(barang+hasil)->stok<<endl;
            } else {
                cout<<"Data yang anda cari tidak ditemukan\n";
            }
        }
        else if(pilih == 10){
            cout<<"Anda Keluar dari MENU MINIMARKET MUHAMMAD FAJAR\n";
        }
        else{
            cout<<"Menu yang anda pilih tidak tersedia! Silahkan pilih menu 1 sampai 5\n";
        }

    }while(pilih != 10);
}

void login(User *users, int &jumlah_user, Barang *barang, int &jumlah_barang){

    int jumlah_login = 3;
    string username,password;
    bool status_login = false;

    cout<<"\nMENU LOGIN MINIMARKET MUHAMMAD FAJAR\n";

    while(jumlah_login > 0 && status_login == false){

        cout<<"Username : ";
        getline(cin,username);

        cout<<"Password : ";
        getline(cin,password);

        if(cek_user(users,jumlah_user,username,password)){

            cout<<"Login berhasil, selamat datang mahasiswa\n";

            status_login = true;

            menu(barang,jumlah_barang);
            return;
        }

        jumlah_login--;

        Output("Username atau password salah, kesempatan login tersisa : ", jumlah_login);
    }

    if (status_login == false) {
        Output("Username dan Password Anda salah sebanyak 3 kali. Kembali ke Menu MINIMARKET MUHAMMAD FAJAR");
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
            register_user(users,jumlah_user);
        }
        else if(pilih == 2){
            login(users,jumlah_user,barang,jumlah_barang);
        }
        else if(pilih == 3){
            cout<<"Terima kasih telah menggunakan SISTEM MINIMARKET MUHAMMAD FAJAR\n";
        }
        else{
            cout<<"Menu tidak tersedia, silakan pilih menu 1 sampai 3\n";
        }

    }while(pilih != 3);
}