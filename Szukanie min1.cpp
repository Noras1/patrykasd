#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
int t[10];
int min=t[0];
	
ifstream wej�cie;
ofstream wyj�cie;
wejscie.open("a.txt");
wyjscie.open("liczba.json");
	
for (int i=0; i<10; i++){
if (min > t[i]){
min=t[i];
	}

}
if(wej�cie.good()){
while(wej�cie.eof()){
for(int i=0; i<10; i++){
wejscie >> t[i];
}
}
}
wynik << "[\n{\n\"\"min " <<min<< "\n}\n]"; 
cout<<"x";

wej�cie.close();
wyj�cie.close();
	
	return 0;
}
