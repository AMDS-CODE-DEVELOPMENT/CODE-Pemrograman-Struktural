#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: double.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	double jari, hasil;
	const double p = 3.14;
	
	cout<<"Masukan Jumlah jari-jari = "; cin>>jari;
	hasil = jari * (jari * p);
	cout<<"Luas dari Lingkaran 3.14 X "<<jari<<" X "<<jari<<" adalah "<<hasil;
	
	return 0;
}
