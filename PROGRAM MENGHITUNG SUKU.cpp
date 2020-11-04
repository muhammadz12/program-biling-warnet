// muhammad zaki najib
// nim 20051397067
// tugas 3

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int a=1,b,p;
	int jumlah,pil;
	
	cout << "PROGRAM MENGHITUNG JUMLAH SUKU" << endl;
	cout << "\n";
	cout << "masukan suku pertama   : ";cin >> a;
	cout << "masukan indeks pangkat : ";cin >> p;
	cout << "masukan banyak deret   : ";cin >> b;
	cout << "=====================================\n";
	
	for(a=1;a<=b;a++)
	{
		cout << pow(a,p) <<",";
		jumlah = jumlah+pow(a,p);
	}
	cout << "\n";
	cout << "jumlah " <<b<< " deret bilangan : ";
	cout << jumlah  <<endl;
	cout << "\n====================================";
	

	return 0;
}
