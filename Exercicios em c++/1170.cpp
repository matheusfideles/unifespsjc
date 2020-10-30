#include <iostream>
using namespace std;
int main(){
	int n=0, d=0;
	double m=0;
	std::cin >> n;
	while(n--){
		std::cin >> m;
		while(m>1){
			m/=2;
			d++;
		}
		std::cout << d << " dias" << endl;
		d=0;
	}
	return 0;
}
