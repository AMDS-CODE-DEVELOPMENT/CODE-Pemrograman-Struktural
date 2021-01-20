#include<iostream>
using namespace std;
int a,b,k,z,c,d,e;
void awalan();
void awalan () {
cout<<"Masukan nilai pertama : "; cin >>a;
cout<<"Masukan nilai kedua   : "; cin >>b;
}
void pemprog();
void pemprog(){
cout<<"Nama		: Ahmad Setiaji"<<endl;
cout<<"Prodi	: Teknik Informatika"<<endl;
cout<<"Kelas	: 3E Reguler BJM"<<endl;	
}
void penjumlahan();
void penjumlahan(){
awalan();
z=a+b;
cout<<"Hasil dari penjumlahan = "<<z<<endl;
}
void pengurangan();
void pengurangan(){
awalan();
c=a-b;
cout<<"Hasil dari pengurangan = "<<c<<endl;
}
void perkalian();
void perkalian(){
awalan();
d=a*b;
cout<<"Hasil dari perkalian   = "<<d<<endl;
}
void pembagian();
void pembagian(){
awalan();
e=a/b;
cout<<"Hasil dari pembagian   = "<<e<<endl;
}
void keluar();
void keluar(){
cout<<"Terima Kasih"<<endl;
}
main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: latihan_function.cpp"<<endl;
	cout<<"Dibuat	: Jum'at, 7 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	
	cout<<"MENU UTAMA"<<endl;
	cout<<"1. OPERASI PENJUMLAHAN"<<endl;
	cout<<"2. OPERASI PENGURANGAN"<<endl;
	cout<<"3. OPERASI PERKALIAN"<<endl;
	cout<<"4. OPERASI PEMBAGIAN"<<endl;
	cout<<"5. KELUAR"<<endl<<endl;
	cout<<"MASUKAN KODE [1,2,3,4,5] = "; cin>>k;
	
	switch (k){
		case 1: penjumlahan();break;
		case 2: pengurangan();break;
		case 3: perkalian();break;
		case 4: pembagian();break;
		case 5: keluar();break;
		default : cout<<"Pilihan cuman ada 5"; break;
	}	
	return 0;
}
