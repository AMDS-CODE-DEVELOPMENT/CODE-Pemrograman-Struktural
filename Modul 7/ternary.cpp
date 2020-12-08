#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: ternary.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	
	int X;
	
	//meminta user untuk memasukan nilai X dari keyboard
	cout<<"Masukkan Nilai X : ";
	cin>>X;
	cout<<endl;
	
	//melakukan pemeriksaan terhadap nilai X
	X = (X<10) ? -X : X;
	
	//menampilkan nilai X setelah proses pemeriksaan
	cout<<" | X | = "<<X;
	
	return 0;
}
