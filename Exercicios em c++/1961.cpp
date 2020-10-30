#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int i=0, p=0, n=0, canos[100];
	std::cin >> p >> n;
	for(i=0; i<n; i++){
		std::cin >> canos[i];
	}
	for(i=1; i<n; i++){
		if(abs(canos[i] - canos[i-1])>p){
			std::cout << "GAME OVER" << endl;
			return 0;
		}
	}
	std::cout << "YOU WIN" << endl;
	return 0;
}
