#include <iostream>
#include <fstream>
using namespace std;

int main (){

  string jenis[20];
  int pilih1,bayar,kembalian,harga,total,menu,jarak;
  float diskon;
	cout << "RUMAH MAKAN SEDERHANA" << endl;
  cout << "========================" << endl;
  cout << "\nMenu Makanan dan Harga : " << endl;
  cout << "\n1. Ayam Geprek  : Rp21.000" << endl;
  cout << "2. Ayam Goreng  : Rp17.000" << endl;
  cout << "3. Udang Goreng : Rp19.000" << endl;
  cout << "4. Cumi Goreng  : Rp20.000" << endl;
  cout << "5. Ayam Bakar   : Rp25.000" << endl;
  ofstream hsl;
  hsl.open("struct.txt", ios::out);
  hsl << "RUMAH MAKAN SEDERHANA" << endl;
  hsl << "========================" << endl;
  hsl << "\nMenu Makanan dan Harga : " << endl;
  hsl << "\n1. Ayam Geprek  : Rp21.000" << endl;
  hsl << "2. Ayam Goreng  : Rp17.000" << endl;
  hsl << "3. Udang Goreng : Rp19.000" << endl;
  hsl << "4. Cumi Goreng  : Rp20.000" << endl;
  hsl << "5. Ayam Bakar   : Rp25.000" << endl;
  hsl.close();
  cout <<"\nBanyak pesanan : ";
  cin >> menu;
  
  ofstream h;
  h.open("struct.txt", ios::app);
  h << "======================"<< endl;
  h << "menu yang di pesan: "<<endl;
  h.close(); 
  for(int a=1;a<=menu;++a){
    
  cout << "\nSilahkan Pilih Menu Anda : ";
  cin >> pilih1;
  
  if (pilih1==1){
    cout << "1. Ayam Geprek : Rp21.000" << endl;
    harga=harga+21000;
    ofstream hsl;
  hsl.open("struct.txt", ios::app);
  hsl << "1. Ayam Geprek : Rp21.000"<<endl;
  hsl.close(); 
  }
  else if(pilih1==2){
    cout << "2. Ayam Goreng : Rp17.000" << endl;
    harga=harga+17000;
    hsl.open("struct.txt", ios::app);
    hsl << "2. Ayam Goreng : Rp17.000"<<endl;
    hsl.close(); 
  }
  else if(pilih1==3){
    cout << "3. Udang Goreng : Rp19.000" << endl;