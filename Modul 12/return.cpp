#include<iostream>
using namespace std;

int LuasPersegi (int p, int l){
	int luas;
	luas = p*l;
	return luas;
}
int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: return.cpp"<<endl;
	cout<<"Dibuat	: Jum'at, 7 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	int a,b;
	
	cout<<"Masukan panjang : "; cin >>a;
	cout<<"Masukan lebar   : "; cin >>b;
	
	cout<<"Luas Persegi    : " << LuasPersegi (a,b);
	return 0;
}
