#include <iostream>
int main(){
    int x=0, i=0;
    while(1){
        std::cin >> x;
        if(x==0) break;
        for(i=1; i<=x; i++){
            if(i!=x) std::cout << i << " ";
            else std::cout << i << std::endl;
        }
    }
    return 0;
}
