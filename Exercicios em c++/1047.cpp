#include <iostream>
using namespace std;
int main()
{
    int horaInicio=0, minutoInicio=0, horaFim=0, minutoFim=0, duracaoHora=0, duracaoMinuto=0;
	std::cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;

    duracaoHora=horaFim-horaInicio;
    duracaoMinuto=minutoFim-minutoInicio;
    
    if(duracaoMinuto==0 && duracaoHora==0){
        std::cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else
    {
        if(duracaoHora < 0){//Se for negativa, horaFim > horaInicio, o jogo termina no dia seguinte
            duracaoHora += 24;
        }

        if(duracaoMinuto < 0){//se for negativo, minutoFim > minutoInicio, não se passou uma hora completa(60min). Ex: 15:30 para 16:20.
            duracaoMinuto+=60;
            duracaoHora--;

            if(duracaoHora < 0){ //No caso em que a hora é a mesma, mas o minutoInicio é maior que o minutoFim. a hora fica valendo -1, deveria valer 23 
            duracaoHora += 24;
            }
        }
        std::cout << "O JOGO DUROU "<< duracaoHora <<" HORA(S) E "<< duracaoMinuto << " MINUTO(S)"<<endl;
    }    
    return 0;
}
