#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: percabangan_switch.cpp"<<endl;
	cout<<"Dibuat	: Senin, 22 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	char nilai = 'D';
	
	switch(nilai){
		case 'A' :
			cout << "Luar Biasa" << endl;
			break;
		case 'B' :
			cout << "Bagus" << endl;
			break;
		case 'C' :
			cout << "Anda Lulus" << endl;
			break;
		case 'D' :
			cout << "Mengikuti Remidi" << endl;
			break;
		case 'E' :
			cout << "Anda Tidak Lulus" << endl;
			break;
		default :
			cout << "Tidak ada nilai" << endl << endl;
	}
	cout << "Karena nilai Anda adalah " << nilai << endl;
	
	return 0;
}
