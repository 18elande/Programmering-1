#include <iostream>

using namespace std;

int main() {
	
	float tal1, tal2, tal3, tal4, summa;
	
	cout << "First ware:" << endl;
	cin >> tal1;
	cout << "Second ware:" << endl;
	cin >> tal2;
	cout << "First price per Kg:" << endl;
	cin >> tal3;
	cout << "Second price per Kg:" << endl;
	cin >> tal4;
	
	summa = (tal1 * tal3 + tal2 * tal4);
	
	cout << summa;
	
	return 0;
}
