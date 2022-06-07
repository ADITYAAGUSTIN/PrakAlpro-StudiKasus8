#include <iostream>
using namespace std;
 
int main(){
	string cart_barang[100];
    int cart_harga[100];
    string barang_nama,nama;
    int barang_harga,stok;
	 string barang[10][10]={{"Samsung Evo"},{"Sandisk 16GB"},{"Logitech M 10"},{"WD Green 120GB"},{"Garmin Venu SQ"},{"Epson L2310 AIO"}};
        int angka[10][10]={{30,200000},{45,60000},{55,120000},{23,400000},{12,3100000},{14,2500000}};

 cout<<"Tabel Daftar Barang\n";
  cout <<"----------------------------------------------------------------------\n";
  cout <<"|Barang\t\t\t\tStok Barang\t\tHarga|\n";
  cout <<"----------------------------------------------------------------------\n";
    for(int i=0;i<6;i++){
      for(int j=0; j<2; j++){
        cout << barang[i][j] << "\t\t\t" << angka[i][j];
      }
      cout<<endl;
   }
   cout <<"----------------------------------------------------------------------\n";
   cout << endl;
   
     
}