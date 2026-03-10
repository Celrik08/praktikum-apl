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