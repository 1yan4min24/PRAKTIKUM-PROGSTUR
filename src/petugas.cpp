#include <iostream>
#include "../Include/database.hpp"
#include "../Include/role.hpp"
using namespace std;

//fungsi lihat tangkapan nelayan
void LihatTangkapan(){
  cout<<"\n=== Lihat Tangkapan Nelayan ===\n";
  for(auto &i : dataTangkapan){
    cout<<"- "<<"Jenis: "<<i.jenis<<" | "<<"Berat(kg): "<<i.berat<<" kg"<<endl;
  }
}

//fungsi mulai lelang
void Lelang(){
  cout<<"\n=== Mulai Lelang ===\n";
  if (dataTangkapan.empty()){
    cout<<"Belum ada data tangkapan"<<endl;
  }

  for(auto &i : dataTangkapan){
    cout<<"Jenis: "<<i.jenis<<" | "<<"Berat(kg): "<<i.berat<<"kg"<<endl;
    cout<<"Harga: ";
    cin>>i.harga;
    lotLelang.push_back(i);
  }
  dataTangkapan.clear();
  cout<<endl;
}


//Menu petugas tpi
void MenuPetugasTPI(){
  int pilihan;
  do{
    cout<<"\n=== Menu Petugas TPI ===\n";
    cout<<"1. Lihat Tangkapan Nelayan"<<endl;
    cout<<"2. Mulai Lelang"<<endl;
    cout<<"0. Kembali"<<endl;
    cout<<"Pilih: ";
    cin>>pilihan;

    switch(pilihan){
      case 1: LihatTangkapan();
      case 2: Lelang();
      default: cout<<"Inputan tidak valid!!";
    }
  }while (pilihan != 0);
}