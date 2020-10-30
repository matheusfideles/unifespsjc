#include <iostream>

using namespace std;

int main(){
	int i=1, j=7, aux=j;
	while(i<=9){
		cout << "I=" <<  i << " J=" << j << endl;	
		j--;
		if(aux-j>2){
			aux+=2;
			j=aux;
			i+=2;
		}
	}
	return 0;
}
