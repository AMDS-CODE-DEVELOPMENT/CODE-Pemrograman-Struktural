#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: plusminus.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	int x;
	float y;
	
	x = +7;    //tau dapat ditulis dengan x = 7
	y = -3.12; //memasukan nilai negatif -3.12
	
	// Menampilkan nilai yang disimpan kedalam variabel x dan y
	cout <<"Nilai x : "<<x<<endl;
	cout <<"NIlai y : "<<y<<endl<<endl;
	
	x = -x; // merubah nilai menjadi negatif
	y = -y ;// merubah nilai menjadi positif
	
	//menampilkan kembali nilai variabel x dan y
	cout<<"Nilai x yang baru : "<<x<<endl;
	cout<<"Nilai y yang baru : "<<y<<endl<<endl;
	
	return 0;
}
