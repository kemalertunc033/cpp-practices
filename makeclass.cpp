#include <iostream>
using namespace std;

class odeme {
	public:
		float tutar = 0.0;
		string birim = "TL";
		int sifre1 = 0000;
		int pin = 0000;
	
	void sifre() {
		this->pin = this->sifre1;
		cout << "Sifreniz basariyla degistirildi" << endl;
	}

	void setSifre(int newSifre) {
		this->sifre1 = newSifre;
	}
	private:
			int hashcode = 1321564;
	
};

void dvm() {
	
	cout << "Devam etmek istiyor musunuz?" << endl;
	cout << "1->evet" << endl;
	cout << "2->hayir" << endl;
	
}
void dvm2() {
	cout << "tekrar denemek istiyor musunuz?" << endl;
	cout << "1->evet" << endl;
	cout << "2->hayir" << endl;


}


int main() {
	odeme a;
	a.tutar;
	a.birim;
	a.sifre1;
	int islem = 0;
	int sifreg = 0000;
	int dvm1 = 0;
	
	continues:
	cout << "sifrenizi giriniz"<<endl;
	cin >> sifreg;
	if (sifreg==a.sifre1){
		cout << "sifreniz dogru giris yapiliyor..." << endl;

		
		while (true){

		
			
			again:
			cout << "ne islem yapmak istiyorsunuz?(1,2,3)" << endl;
			
			cout << "1->sifre degistirme" << endl;
			cout << "2->birim degistirme (suanda " << a.birim << ")" << endl;
			cout << "3->tutar belirleme (suanda " << a.tutar << ")"  << endl;
			cin >> islem;


			if (islem == 1) {
				continue2:
				cout << "suanki sifrenizi giriniz" << endl;
				cin >> sifreg;
				if (sifreg == a.sifre1) {

					yeni:
					cout << "Yeni sifrenizi giriniz" << endl;
					cin >> sifreg;
					a.setSifre(sifreg);
					a.sifre();
					if (sifreg>9999&&sifreg<1000&&sifreg!=0000)
					{
						cout << "tanimsiz veri girdiniz lutfen tekrar deneyiniz" << endl;
						goto yeni;
					}
					else {
						dvm();
										cin >> dvm1;

					}

				}else {
						cout << "sifreniz yanlis";
						dvm2();
						cin >> dvm1;
						if (dvm1 == 1)
						{
							goto continue2;
						}
				}
				
					
				


				
				
			}
			else if (islem==2){

				cout << "secmek istediginiz birim turunu giriniz " << endl;
				cin >> a.birim;
				cout << endl << "birim basarirla degistirildi" << endl;
				dvm();
				cin >> dvm1;



			}
			else if (islem == 3)
			{
				cout << "tutar giriniz" << endl;
				cin >> a.tutar;
				cout << "tutar basariyla degistirildi" << endl;
				dvm();
				cin >> dvm1;
			}
			else
			{
				cout << "tanimsiz veri girdiniz lutfen tekrar deneyiniz" << endl;
				goto again;
			}

			if (dvm1 == 1)
			{
				continue;
			}
			else if (2)
			{
				break;
			}

			

		}
	}
	else{
		cout << "sifreniz yanlis";
		dvm3:
		dvm2();
		cin >> dvm1;
	}if (dvm1 == 1)
	{
		goto continues;
	}
	else if (dvm1==2)
	{
		goto stop;
	}
	else
	{
		cout << "tanimsiz veri girdiniz lutfen tekrar deneyiniz" << endl;
		goto dvm3;
	}

	stop:
	cout << "tekrar bekleriz:)";
	
	return 0;

}

