#include<iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: latihan2.cpp"<<endl;
	cout<<"Dibuat	: Jum'at, 8 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	
//FAKTORIAL
//5! = 5*4*3*2*1
//6! = 6*5*4*3*2*1

int bilangan,hasil = 1;
cin >> bilangan;
for(int i=bilangan;i>=1;i--){
	hasil *= i;
	}
	cout << bilangan <<"! = "<< hasil;
}
