// penerimaan gaji karyawan
// muhammad zaki najib
//20051397067

#include <iostream>
using namespace std;

int main()
{
    char nama[16];
    int gaji,jam;
    char gol;
    
	cout<<"-----------------------------------------------------------------------------------------------"<<endl;
	cout<<"=========================================== Pt. MAKMUR ========================================"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------"<<endl;
	cout<<"masukkan nama karyawan : ";
    cin>>nama;
    cout<<"pilih golongan [A/B/C/D] :";
    cin>>gol;
    cout<<"masukan jumlah jam kerja :";
    cin>>jam;

    if (gol == 'A') {
        gaji = 5000;
    }
    else if (gol == 'B') {
        gaji = 7000;
    }
    else if (gol == 'C') {
        gaji = 8000;
    }
    else if (gol == 'D') {
        gaji = 10000;
    }

    gaji = gaji * 48;

    if (jam > 48) {
        int temp = jam - 48;
        gaji = gaji + (4000 * temp);
    }
    
    gaji = gaji * 48;

    if (jam > 48) {
        int temp = jam - 48;
        gaji = gaji + (4000 * temp);
    }

    cout <<nama<<"\nGaji anda sebesar : "<< gaji;
    cout<<"\n\n";

}
