#include <iostream>

using namespace std;

int main() {
	
	int tal1, tal2, summa;
	
	cout << "M�tarst�llningen idag: " << endl;
	cin >> tal1;
	cout << "M�tarst�llningen f�r ett �r sedan: " << endl;
	cin >> tal2;
	
	summa = tal1 - tal2;
	
	cout << "Du har k�rt s�h�r m�nga mil det senaste �ret: " << summa;
	return 0;
}
