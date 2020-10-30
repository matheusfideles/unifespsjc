#include <iostream>
int main(){
    int m=0, n=0, i=0, sum=0;
    void swap(int *a, int *b);
    while(1){
        //m irá conter o maior valor, n conterá o menor
        std::cin >> m >> n;
        if(n<=0||m<=0) break;
        if(n>m) swap(&n, &m);
        for(i=n; i<=m; i++){
            std::cout << i <<" ";
            sum+=i;
        }
        std::cout << "Sum=" << sum << std::endl;
        sum=0;
    }
    return 0;
}

void swap(int *a, int *b)
{
    int c=0;
    c=*a;
    *a=*b;
    *b=c;
}