#include <iostream>
using namespace std;
int main(){
	int filhos, filhas;
	while(1){
		std::cin >> filhos >> filhas;
		if(filhos==0 && filhas==0){
			break;
		}
		std::cout << filhos+filhas << endl;
	}
	return 0;
}
