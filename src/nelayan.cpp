#include <iostream>
#include "../Include/database.hpp"
#include "../Include/role.hpp"
using namespace std;


//Fungsi Lihat Permintaan Ikan
void LihatPermintaan(){
  cout<<"\n=== Lihat Permintaan Pasar ===\n";
  for(auto &p : permintaanPasar){
    cout<<"- "<<p<<endl;
  }
  cout<<endl;
}

//Fungsi input hasil tangkapan
void inputTankapan(){
  cout<<"\n=== Inputan Hasil Tangkapan ===\n";
  Ikan ik;

  cout<<"Jenis: ";
  cin>>ik.jenis;

  cout<<"Berat (kg): ";
  cin>>ik.berat;

  ik.harga = 0;
  dataTangkapan.push_back(ik);
  cout<<"Data berhasil di simpan"<<endl;
}


//Menu Nelayan
void MenuNelayan(){
  int pilihan;
  do{
    cout<<"\n=== Menu Nelayan ===\n";
    cout<<"1. Lihat Permintaan Pasar"<<endl;
    cout<<"2. Input Hasil Tangkapan"<<endl;
    cout<<"0. Kembali"<<endl;
    cout<<"Pilih: ";
    cin>>pilihan;

    switch (pilihan)
    {
      case 1: LihatPermintaan();
      case 2: inputTankapan();
      default: cout<<"Inputan tidak valid!!";
    }

  }while(pilihan != 0);

}