#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: char.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	char x = 'A'; //Variable Char hanya dapat memuat satu karakter. 
		
	cout<<"Masukan Kelas = ";
	cin>>x; //Jika anda memasukan karakter lebih dari satu maka variabel "x" hanya akan mengambil satu karakter pertama.
	cout<<endl<<"Yang anda masukan adalah "<<endl<<x;
	
	return 0;
}
