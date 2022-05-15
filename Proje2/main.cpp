#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 

{
	
	
	int a,b,wait;
	cout << "BIRINCI KENARI GIRINIZ: ";
	cin >> a;
	cout << "IKINCI KENARI GIRINIZ: ";
	cin >> b;
	
	if(sqrt(a*a+b*b) == floor(sqrt(a*a+b*b)))
	{
		cout << "OZEL UCGENDIR \n";
		cout << "BIRINCI KENAR " << a << "^2 (" << a*a << ")\nIKINCI KENAR " << b << "^2 (" << b*b << ")\n" << "HIPOTENUS " <<sqrt(a*a+b*b) <<" -->  SQRT"<<(a*a+b*b);
	}else{
		cout << "OZEL UCGEN DEGILDIR \n";
		cout << "BIRINCI KENAR " << a << "^2 (" << a*a << ") + IKINCI KENAR " << b << "^2 (" << b*b << ") = " << "HIPOTENUS =" <<sqrt(a*a+b*b) <<" -->  SQRT"<<(a*a+b*b);
	}
	cin>>wait;
	
	return 0;
	
}

