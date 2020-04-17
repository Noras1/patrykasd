#include <iostream>
#include <fstream>

using namespace std;


int main() {
	int t[1000];
	int x = 0;
	
	ifstream asd;
	ofstream asdf;
	asd.open("asd.txt");
	asdf.open("asdf.txt");
	
	if(asd.good()){
		while(!asd.eof()){
			asd >> t[x++];
		}
	}
	
	if(asdf.good()){
		for(int i=x-1; i >=0; i--){
			asdf << " " << t[i];
		}
	}
	
	cout<<"Plik";
	
	asd.close();
	asdf.close();
	return 0;
}
