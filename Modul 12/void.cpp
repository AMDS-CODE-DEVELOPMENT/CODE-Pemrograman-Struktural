#include<iostream>
using namespace std;

void LuasPersegi(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: void.cpp"<<endl;
	cout<<"Dibuat	: Jum'at, 7 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	
	int panjang,lebar;
	
	cout<<"Masukan panjang : "; cin >>panjang;
	cout<<"Masukan lebar   : "; cin >>lebar;
	
	cout<<"Luas persegi    : " << panjang*lebar;
}

int main(){
	LuasPersegi();
	return 0;
}
