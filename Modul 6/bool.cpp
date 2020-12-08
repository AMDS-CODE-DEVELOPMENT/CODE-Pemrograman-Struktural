#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: bool.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	int angka; //Tipe data Integer untuk menyimpan data bersifat bilangan bulat
	bool hasil = true; //Tipe data Boolean yang mempunyai nilai awal true ( 1 )
	
	cout<<"Masukan angka = ";
	cin>>angka; // Input Bilangan Bulat ke variabel "angka"
	
	hasil = angka > 10;
	// variabel "hasil" akan menyimpan nilai kondisi dari variabel "angka" > 10.
	cout<<hasil; //jika True maka akan tertulis angka 1 atau 0 jika kondisi False.
	return 0;
}
