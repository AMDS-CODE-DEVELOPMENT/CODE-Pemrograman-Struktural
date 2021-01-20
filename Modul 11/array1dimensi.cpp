#include<iostream>
using namespace std;

int umur[] = {18, 19, 20, 21, 22};
int n, hasil = 0;

int main ()
{
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: array1dimensi.cpp"<<endl;
	cout<<"Dibuat	: Senin, 1 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	for ( n=0; n<5; ++n )
	{
		hasil+= umur[n];
	}
	cout << hasil;
	return 0;
}
