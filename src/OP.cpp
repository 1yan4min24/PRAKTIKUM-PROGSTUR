#include <iostream>
#include "../include/role.hpp"
#include "../include/database.hpp"
using namespace std;
void Beli_Ikan(){
    if (pasar.empty()) {
        cout<<"Pasar Kosong";
        return;
    }
    cout<< "--- Ikan di Pasar ---\n";
    for (int i=0; i<pasar.size()i++) {
        cout<< i+1 << ". " <<pasar[i].jenis<< "| "<< pasar[i].berat<< "kg | Rp"<< pasar[i].harga <<endl;
    }
    int pilih;
    cout<< "pilih ikan: " ;
    cin>>pilih;

    if (pilih>0 && pilih <= pasar.size();i++)
}