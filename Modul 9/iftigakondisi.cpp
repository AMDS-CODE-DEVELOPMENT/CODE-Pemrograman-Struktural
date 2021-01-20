#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: iftigakondisi.cpp"<<endl;
	cout<<"Dibuat	: Senin, 22 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	int nilai = 90;
//	A = 80 - 100
//	B = 60 - 79
//	C = 40 - 59
//	D =  0 - 39
	if(nilai>=80){
		cout << "A";
	}else if(nilai>=60){
		cout << "B";
	}else if(nilai>=40){
		cout << "C";
	}else {
		cout << "D";
	}
	return 0;
}
