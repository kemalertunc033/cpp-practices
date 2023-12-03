#include <iostream>
using namespace std;


class Hesapla {

public:
	int h;
	int x;
	//int y;
	int hacim;

	void giris() {

		cout << "yüksekliði giriniz " << endl;
		cin >> h;

		cout << "uzunluðu giriniz " << endl;
		cin >> x;
		//cout << "geniþliði giriniz " << endl;
		//cin >> y;

	}

	void result() {

		cout << h * x /* * y*/<< endl;


	}




};





int main() {

	Hesapla hesap;
	hesap.giris();
	hesap.result();







}