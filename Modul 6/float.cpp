#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: float.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	float jari, hasil;
	const float p = 3.14; // variabel konstanta
	
	cout<<"Masukan Jumlah jari-jari = "; cin>>jari;
	hasil = (jari * p) * 2; // disini kita menggunakan variabel float
	// karena hasil dari penghitungan lingkaran biasanya berbentuk bilangan pecahan
	cout<<"Keliling dari Lingkaran adalah "<<hasil;
	
	return 0;
}
