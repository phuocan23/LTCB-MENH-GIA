#include <iostream>
using namespace std;
int main() {
	int so, soto500, soto200, soto100, soto50, soto20, soto10, soto5, soto1;
	cout << "Nhap so:";
	cin >> so;
	while (so > 0)
	{
		soto500 = so /500;
		so = so % 500; // soto = soto - soto500 * 500; hoac soto = soto500 * 500;
		cout << "so to 500 la" << soto500 << endl;
		
		soto200 = so /200;
		so = so % 200;
		cout << "so to 200 la" << soto200 << endl;
		
		soto100 = so /100;
		so = so % 100;
		cout << "so to 100 la" << soto100 << endl;

		soto50 = so /50;
		so = so % 50;
		cout << "so to 50 la" << soto50 << endl;

		soto20 = so /20;
		so = so % 20;
		cout << "so to 20 la" << soto20 << endl;

		soto10 = so / 10;
		so = so % 10;
		cout << "so to 10 la" << soto10 << endl;

		soto5 = so /5;
		so = so % 5;
		cout << "so to 5 la" << soto5 << endl;

		soto1 = so /1;
		so = so % 1;
		cout << "so to 1 la" << soto1 << endl;
	}
	return 0;
}
