#include<iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: dowhilebersarang.cpp”"<<endl;
	cout<<"Dibuat	: Selasa, 5 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	
	int j=10;
	int k;
	
	do {
		k=1;
		while (k<=j){
			cout << k*j << ' ';
		k++;
		}
		cout << endl;
		j--;
	} while (j>=1);
	return 0;
}
