#include <iostream>
using namespace std;
int main()
{
    int horaInicio=0, minutoInicio=0, horaFim=0, minutoFim=0, duracaoHora=0, duracaoMinuto=0;
	while(std::cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim){
	    duracaoHora=horaFim-horaInicio;
	    duracaoMinuto=minutoFim-minutoInicio;
	    if(duracaoMinuto==0 && duracaoHora==0){
	        break;
	    }
	    else{
	        if(duracaoHora < 0){
	            duracaoHora += 24;
	        }
	        if(duracaoMinuto < 0){
	            duracaoMinuto+=60;
	            duracaoHora--;
				if(duracaoHora < 0){
	            	duracaoHora += 24;
	            }
	        }
	        std::cout << duracaoHora*60 + duracaoMinuto <<endl;
	    }    
	}
    return 0;
}
