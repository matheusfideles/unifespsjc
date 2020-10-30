#include <iostream>
using namespace std;
int main(){
	void conversao(int n, char *tipo);
	int n=0, x=0, i=0;
	char tipo[4];
	
	std::cin >> n;
	for(i=0; i<n; i++){
		std::cin >> x >> tipo;
		std::cout << "Case " << i+1 << endl;
		conversao(x, tipo);
		std::cout << endl;
	}
	return 0;
}

void conversao(int n, char *tipo){
	int decPraBin(int n);
	int binPraDec(int n);
	if(tipo=="bin"){
		std::cout << binPraDec(n)  << " dec" << endl;
		std::cout << hex << binPraDec(n) << " hex" << endl;
	}
	else if(tipo=="dec"){
		std::cout << decPraHexa(n) << " hex" << endl;
		std::cout << decPraBin(n)  << " bin" << endl;
	}
	else if(tipo=="hex")
		
	}
}

int decPraBin(int n){
	if(n==0) return 0;
	else return n%2+10*decPraBin(n/2);
}

int binPraDec(int n){
	
}
