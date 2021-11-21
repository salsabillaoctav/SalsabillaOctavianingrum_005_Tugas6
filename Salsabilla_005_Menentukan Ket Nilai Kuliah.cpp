#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int nilai;
	char matkul[30], grade[30]="keterangan nilai";
	string grd;
	char *ptr_matkul, *ptr_grade;
	ptr_matkul=matkul;
	ptr_grade=grade;

	cout<<" NILAI MATA KULIAH"<<endl;
	cout<<endl;
	cout<<" masukkan nama mata kuliah  : "; cin>>ptr_matkul;
	cout<<" masukkan nilai mata kuliah : "; cin>>nilai;

	if(nilai>=90 && nilai<=100){
			grd="A";
	} else if (nilai>=80 && nilai<90){
			grd="B";
		} else if (nilai>=70 && nilai<80){
			grd="C";
		} else if (nilai>=60 && nilai<70){
			grd="D";
		} else if (nilai>=50 && nilai<60){
			grd="E";
		}else if (nilai<50){
			grd=" anda dinyatakan tidak lulus!";
		}else{
			grd=" nilai yang anda masukkan salah, harap masukkan nilai dengan benar!";
		}

	cout<<endl;
	cout<<" nilai matkul "<<matkul<<" = "<<nilai<<", "<<ptr_grade<<" = "<<grd<<endl;

}
