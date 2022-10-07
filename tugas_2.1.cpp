#include <iostream>

using namespace std;

int main() {
	
	//TUGAS 2
	//MENGGUNAKAN VARIABEL SEMENTARA
	
	system("color 02");
	
	cout<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"  PROGRAM MENGGUNAKAN VARIABEL SEMENTARA  "<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;
	
	int x = 20;
	int y = 5;
	int z;
	
	z = x;
	x = y;
	y = z;
	
	cout<<"Nilai x adalah " << x << endl;
	cout<<"Nilai y adalah " << y << endl;
	
	return 0;

}
	
