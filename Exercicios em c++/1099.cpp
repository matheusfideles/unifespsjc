#include <iostream>

using namespace std;
int main(){
	void troca(int *n, int*m);
	int somaImpares(int n, int m);
	int n=0, m=0, soma=0, vezes=0, acrescimo=0;
	cin >> vezes;
	while(vezes--){
		std::cin >> n >> m;
		troca(&n, &m);
		soma=somaImpares(n, m);
		cout << soma << endl;
	}
	return 0;
}
void troca(int *n, int *m){
	//maior fica na variavel m, menor fica em n
	int aux;
	if(*n > *m){
		aux=*m;
		*m=*n;
		*n=aux;	
	}
}

int somaImpares(int n, int m){
	int soma=0, i=0;
	for(i=n+1; i<m; i++){
		if(i%2!=0){
			soma+=i;
		}
	}	
	return soma;
}
