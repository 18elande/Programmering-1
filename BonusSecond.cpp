#include <iostream>

using namespace std;

int main() {
	
	float tal1, summa, svar;
	
	cout << "Enter a number: " << endl;
	cin >> tal1;
	summa = tal1;
	cout << "Enter a number: " << endl;
	cin >> tal1;
	summa = (tal1 + summa);
	cout << "Enter a number: " << endl;
	cin >> tal1;
	summa = (tal1 + summa);
	cout << "Enter a number: " << endl;
	cin >> tal1;
	summa = (tal1 + summa);
	cout << "Enter a number: " << endl;
	cin >> tal1;
	summa = (tal1 + summa);
	
	svar = (summa / 5);
	cout << svar;
	
	return 0;
}
