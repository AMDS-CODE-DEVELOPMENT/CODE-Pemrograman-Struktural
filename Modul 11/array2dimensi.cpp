#include<iostream>
using namespace std;

int main(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: array2dimensi.cpp"<<endl;
	cout<<"Dibuat	: Senin, 1 Jan 2021"<<endl;
	cout<<"==================================="<<endl<<endl;
	
		int a[5][2] = {{10,2},{30,3},{30,4},{40,5},{50,6}};
	
	for (int i=0; i<5; i++){
		for (int j=0; j<2; j++){
			cout << "a[" <<i<< "][" <<j<< "] = "<<a[i][j]<<endl;
		}
	}
	return 0;
}
