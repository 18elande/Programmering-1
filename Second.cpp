#include <iostream>

using namespace std;

int main(){
	  float tal1, tal2, summa;
	  
	  cout << "Antal k�rda mil" << endl;
	  cin >> tal1;
	  cout << "Antal liter bensin f�rbrukat" << endl;
	  cin >> tal2;
	  summa = tal2 / tal1;
	  
	  cout << "Liter per dag" << summa;
	  return 0;
}
