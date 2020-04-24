#include <iostream>
#include <string>

using namespace std; 


int main(int argc, char** argv) {
	string imie, nazwisko;
	cout << "Podaj imie: ";
	cin >> imie;
	cout<< "Podaj nazwisko: ";
	cin >> nazwisko;
	
	cout << "[ \n { \n \"imie\" : \" " << imie << " \", 
	\n \"nazwisko\"??""<<nazwisko<<"\" \n } \n] \n";
	return 0;
}
