#include<iostream>
using namespace std;
int main() {
	int   soy , nots, sayı =3 ;
	string ad, gisim;
	cout << "kayit edilcek kisi sayisini giriniz";
	if (0 < sayı) {
		cin >> sayı;
	}
	

    string* adı = new string[sayı];
	int* puan = new int[sayı];

	for (int i = 0; i < sayı; i++) {
		cout << "adinizi giriniz    ";
		cin >> ad;
		adı[i] = ad;
		cout << "notunuzu giriniz    ";
		cin >> nots;
		puan[i] = nots;

	}
	cout << "isim giriniz    ";

	cin >> gisim;
	bool ert = false;
	
	for (int i = 0; i < sayı; i++)

	{
		for (int i = 0; i < sayı; i++) {
			if (gisim == adı[i]) {
				cout <<"puaniniz  "<< puan[i]<<endl;
				ert = true;
				break;
			}
			//else { cout << "listede ad yok"; }
		}
		
	}
	if (!ert) {
		cout << endl<<"listede böyle bir isim yok"<<endl;
	}

      


	delete[]adı;
	delete[]puan;
	return 0;
}