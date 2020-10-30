#include <iostream>
using namespace std;
int main(){
	int conta[2], a[3],i=0; 
	while(std::cin >> a[0] >> a[1] >> a[2]){
		for(i=0; i<3; i++){
			if(a[i]==0){
				conta[0]++;
			}
			else{
				conta[1]++;
			}
		}
		i=0;
		if(conta[0]==1){
			while(conta[i]!=0){
				i++;
			}
			i++;
			if(i==0){
				std::cout << "A" << endl;
			}
			else if(i=1){
				std::cout << "B" << endl;
			}
			else{
				std::cout << "C" << endl;
			}
		}
		else if(conta[1]==1){
			while(conta[i]!=1){
				i++;
			}
			i++;
			if(i==0){
				std::cout << "A" << endl;
			}
			else if(i=1){
				std::cout << "B" << endl;
			}
			else{
				std::cout << "C" << endl;
			}
		}
		else{
			std::cout << "*" << endl;
		}
	}
	return 0;
}
