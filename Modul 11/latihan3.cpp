#include<iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: latihan3.cpp"<<endl;
	cout<<"Dibuat	: Jum'at, 8 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	
	//Tabel Perkalian 1-10
	for(int i=1; i<=10;i++){
		for(int j=1; j<=10;j++){
			cout << j << " X " << i << " = " << j*i << "|";
		 }
		 cout << endl;
	}
}
