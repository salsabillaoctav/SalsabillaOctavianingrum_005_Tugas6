#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int n, i, nilai, maks;
	int *ptr_maks;
	ptr_maks=&maks;

	cout<<" masukkan jumlah nilai yang ingin diinput : "; cin>>n;
	cout<<endl;

	for(i=1; i<=n; i++){
		cout<<" masukkan nilai ke-"<<i<<" : "; cin>>nilai;
		if(nilai>maks){
			maks=nilai;
		}
	}

	cout<<endl;
	cout<<" nilai naksimum yang diperolah = "<<maks<<" dan alamat variabel = "<<&maks<<endl;

	getch();
}
