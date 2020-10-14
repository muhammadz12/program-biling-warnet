/*billing warnet*/
#include<iostream>

using namespace std;
int main(){
	char no[2];
	int totW;
	int jam,totJ;
	int menit,totM;
	int detik,totD;
	int W;
	
	cout<<"=========================================================================================="<<endl;
	cout<<"===================================== WELCOME ============================================"<<endl;
	cout<<" tarif Rp. 5000,/jam\n";
	cout<<" no. komputer : "; cin>>no;
	
	cout<<"-------------------------------------"<<endl;
	cout<<"Lama anda bermain \n";
	cout<<"Masukkan jam   : "; cin>>jam;
	cout<<"Masukkan menit : "; cin>>menit;
	cout<<"Masukkan detik : "; cin>>detik;
	totJ=jam*5000;
	totM=menit*83.33;
	totD=detik*1.833;
	cout<<"total yang harus anda bayar : Rp. ";
	totW=totJ+totM+totD;
	cout<<totW<<endl<<endl;
	cout<<"=========================================================================================="<<endl;
	cout<<"------------------------------------ THANK YOU -------------------------------------------"<<endl;
	cout<<"==========================================================================================\n"<<endl;
	
	cout<<"by. muhammad zaki najib/20051397067\n;"<<endl;
return 0;
}

