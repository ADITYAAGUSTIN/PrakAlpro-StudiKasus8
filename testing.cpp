#include <iostream>
using namespace std;

class Operator{
  public:
       void proses();
       void output();

  private: string barang[10]={"Samsung Evo","Sandisk 16GB","Logitech M 10","WD Green 120GB","Garmin Venu SQ","Epson L2310 AIO"};
        int stok[10]={30,45,55,23,12,14};
        float harga[10][10]={{200000, .00},{60000, .00},{120000, .00},{400000, .00},{3100000, .00},{2500000, .00}};
};
        int total_penjualan[100];

void Operator::proses(){
  for(int i=0; i<6; i++){
    for(int j=0; j<1; j++){
      total_penjualan[i]=stok[i]*harga[i][j];
    }
  }
}

void Operator::output(){
  cout<<"Tabel Daftar Barang\n";
  cout <<"----------------------------------------------------------------------\n";
  cout <<"|Barang\t\t\t\tStok Barang\t\tHarga|\n";
  cout <<"----------------------------------------------------------------------\n";
    for(int i=0;i<6;i++){
      for(int j=0; j<2; j++){
        cout << barang[i]<< "\t\t\t" <<stok[i]<<"\t\t"<<harga[i][j];
      }
      cout<<barang[i]<<"Total Penjualan : "<<total_penjualan[i];
      cout<<endl;
   }
   cout <<"----------------------------------------------------------------------\n";
   cout << endl;
}

int main(){
  Operator run ;
  run.output();
  run.proses();
  return 0;
}