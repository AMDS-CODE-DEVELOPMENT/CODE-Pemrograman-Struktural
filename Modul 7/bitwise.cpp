#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: bitwise.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	int a = 60, b = 13;
	// a = 00111100
	// b = 00001101
	
	cout<<"a&b = "<<(a&b)<<endl;
	// a&b = 00001100
	
	cout<<"a|b = "<<(a|b)<<endl;
	// a|b = 00111101
	
	cout<<"a^b = "<<(a^b)<<endl;
	// a^b = 00110001
	
	cout<<"~a = "<<(~a)<<endl;
	// ~a = 11000011

	cout<<"a << 2 "<<(a << 2)<<endl;
	// a = 111110000
	
	cout<<"a >> 2 = "<<(a >> 2)<<endl;
	// a = 00001111
}
