#include <iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: logika.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	bool a, b;
	a = (7==5);
	b = (5>4);
	
	bool x, y, z;
	x = a && b;
	y = a || b;
	z = ! (a&&b);
	cout<<x<<y<<z<<endl;
	return 0;
}
