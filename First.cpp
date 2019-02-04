#include <iostream>

using namespace std;

int main() {
	
	int tal1, tal2, summa;
	
	cout << "Mätarställningen idag: " << endl;
	cin >> tal1;
	cout << "Mätarställningen för ett år sedan: " << endl;
	cin >> tal2;
	
	summa = tal1 - tal2;
	
	cout << "Du har kört såhär många mil det senaste året: " << summa;
	return 0;
}
