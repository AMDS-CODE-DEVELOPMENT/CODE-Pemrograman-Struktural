#include<iostream>
using namespace std;

int x;

 // kita membuat 2 buah fungsi utama yaitu test() dan fungsi main()
 // membuat fungsi bernama test()
 
void test(){
	cout<<"==================================="<<endl;
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: variabel_global.cpp"<<endl;
	cout<<"Dibuat	: Kamis, 03 Des 2020"<<endl;
	cout<<"==================================="<<endl<<endl;
	
	x = 20;
	cout<<"Nilai x didalam fungsi test() adalah : "<<x<<endl;
}

 // membuat fungsi bernama main()
 int main(){
 	x = 10;
 	cout<<"Nilai x didalam fungsi main() adalah : "<<x<<endl;
 	
 	// memanggil fungsi test()
 	test();
 	
 	return 0;
}
