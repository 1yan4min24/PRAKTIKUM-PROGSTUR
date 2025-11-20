#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <vector>
#include <string>
using namespace std;


struct Ikan{
  string jenis;
  float harga;
  float berat;
};


vector<Ikan> dataTangkapan;
vector<Ikan> lotLelang;
vector<Ikan> stokTengkulak;
vector<Ikan> pasar;
vector<string> permintaanPasar; 

#endif