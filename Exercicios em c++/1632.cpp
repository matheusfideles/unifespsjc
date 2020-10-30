#include <iostream>
using namespace std;

int findLength(char *word){
	int i=0;
	while(word[i]!='\0'){
		i++;
	}
	return i;
}

int main(){
	int n=0, m=0, i=0, totalOfCombinations=1;
	char password[27];
	std::cin >> n;
	while(n--){
		std::cin >> password;
		m=findLength(password);
		for(i=0;i<m;i++){
			if(tolower(password[i])=='a' || tolower(password[i])=='e' || tolower(password[i])=='i' || tolower(password[i])=='o' || tolower(password[i])=='s')
				totalOfCombinations*=3;
			else 
				totalOfCombinations*=2;
		}
		std::cout << totalOfCombinations << endl;
		totalOfCombinations=1;
	}
	
	return 0;
}
