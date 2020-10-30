#include <iostream>

using namespace std;

int main(){
	int i=1, j=7;
	while(i<=9){
		cout << "I=" <<  i << " J=" << j << endl;
		j--;
		if(j<5){
			j+=3;
			i+=2;
		}
	}	
	return 0;
}
