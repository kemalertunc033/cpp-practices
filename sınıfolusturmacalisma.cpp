#include <iostream>
using namespace std;


class Hesapla {

public:
	int h;
	int x;
	//int y;
	int hacim;

	void giris() {

		cout << "y�ksekli�i giriniz " << endl;
		cin >> h;

		cout << "uzunlu�u giriniz " << endl;
		cin >> x;
		//cout << "geni�li�i giriniz " << endl;
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