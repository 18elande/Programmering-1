#include <iostream>

using namespace std;

int main() {
	
	int tal1, tal2, tal3;
	
	cout << "Skriv A:" << endl;
	cin >> tal1;
	cout << "Skriv B:" << endl;
	cin >> tal2;
	
	tal3 = tal2;
	tal2 = tal1;
	
	cout << "A: " << tal3;
	cout << "B: " << tal2;
	
	return 0;
}
