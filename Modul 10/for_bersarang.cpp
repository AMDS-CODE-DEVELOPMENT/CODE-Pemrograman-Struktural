#include<iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: for_bersarang.cpp"<<endl;
	cout<<"Dibuat	: Senin, 1 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	for (int j=1; j<=10; j++){
		for (int k=1; k<=j; k++){
			cout << k*j << ' ';
		}
		cout <<endl;
	}
	return 0;
}
