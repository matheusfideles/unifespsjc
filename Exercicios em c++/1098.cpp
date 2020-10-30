#include <iostream>

using namespace std;

int main(){
	float i=0,j=1;
	int aux=0;
	while(i<=2.2){
		cout << "I=" <<  i << " J=" << j+i << endl;
		j++;
		if(j>3){
			j=1;
			i+=0.2;
		}
	}
	return 0;
}
