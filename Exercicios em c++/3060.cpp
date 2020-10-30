#include <iostream>
using namespace std;
int main(){
	int v=0, p=0, i=0, resto=0;
	int parcelas[18];
	cin >> v >> p;
	for(i=0; i<p; i++){
		parcelas[i]=v/p;
	}
	i=0;
	resto=v%p;
	while(resto--){
		parcelas[i]++;
		i++;
		if(i>p){
			i=0;
		}
	}
	for(i=0; i<p; i++){
		cout << parcelas[i] << endl;
	}
	return 0;
}
