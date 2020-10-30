#include <iostream>
#include <cstdlib>
#define ano 2015
using namespace std;
int main(){
	int n=0, a=0, dif=0;
	std::cin >> n;
	while(n--){
		std::cin >> a;
		dif=ano-a;
		if(dif<=0){
			dif=abs(dif);
			dif++;
			std::cout << dif << " A.C." << endl;
		}
		else{
			std::cout << dif << " D.C." << endl;
		}
	}
	return 0;
}
