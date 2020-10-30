#include <iostream>
int main(){
    void convertToLower(char *s);
    char name[27];
    int t=0;
    std::cin >> t;
    while(t--){
        std::cin >> name;
        convertToLower(name);
        if(name=="batmain") std::cout << "N" << std::endl;
        else std::cout << "Y" << std::endl; 
    }
    return 0;
}

void convertToLower(char *s){
    int i=0;
    for(i=0; i<sizeof(s)/sizeof(char); i++){
        s[i] = tolower(s[i]);
    }
}