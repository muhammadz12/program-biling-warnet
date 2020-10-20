// MENGHITUNG PANJANG SEGITIGA
// MUHAMMAD ZAKI NAJIB 20051397067
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int pil,alas,tinggi;
	
	cout<<"masukkan alas segitiga : "; cin>>alas;
	cout<<"masukkan tinggi segitiga : "; cin>>tinggi;
	cout<<"\n";
	cout<<"MENU SEGITIGA SIKU-SIKU";
	cout<<"\n";
	cout<<"1. menghitung panjang sisi miring" <<endl;
	cout<<"2. menghitung luas" <<endl;
	cout<<"3. menghitung keliling" <<endl;
	cout<<"4. keluar";
	cout<<"\n";
	cout<<"pilih menu : "; cin>>pil;
	
	switch (pil){
			case 1:
			cout<<"panjang sisi miring = " <<sqrt(alas*alas+tinggi*tinggi) <<endl ;
			break;
		case 2:
			cout<<"luas segitiga = " <<0.5*alas*tinggi <<endl;
			break;
		case 3 :
			cout<<"keliling segitiga = " << tinggi+alas+sqrt(alas*alas+tinggi*tinggi) <<endl;
			break;
		case 4 :
			cout<<" terimakasih " <<endl;
		
return 0;
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


