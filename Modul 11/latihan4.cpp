#include<iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: latihan4.cpp"<<endl;
	cout<<"Dibuat	: Jum'at, 8 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	
	int jml_sepuluh;
	int a[10];
	for(int i=0;i<10;i++){
		cin >> a[i];
		if(a[i]>10) jml_sepuluh++;
	}
	cout << "Banyaknya = " << jml_sepuluh;
}
