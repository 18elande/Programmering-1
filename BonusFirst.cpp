#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	float Katet1, Katet2, Hypo;
	
	cout << "Enter the length of the first side: " << endl;
	cin >> Katet1;
	cout << "Enter the length of the second side: " << endl;
	cin >> Katet2;
	
	Hypo = (sqrt(Katet1 * Katet1 + Katet2 * Katet2));
	
	cout << "The answer is: " << Hypo;
	
	return 0;
}
