#include <iostream>
using namespace std;
int main()
{
    int n=0, i=0, cont=0;
    std::cin >> n;
    for(n; n>0; n--){
    	i=n;
    	while(i>0){
    		i/=10;
    		cont++;
		}	
	}
	std::cout << cont << endl;
    return 0;
}
