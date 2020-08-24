#include <stdio.h>
#include <string.h>
int main() {
    int n=0, i=0, j=0, totalLeds=0;
    char configLed[101];

    scanf("%d", &n);
    for(n; n>0; n--)
    {
        scanf("%s", &configLed);
        i = strlen(configLed);

        //Lê cada algarismo do numero e soma a quantidade de leds necessária em totalLeds
        for(j=0; j<i; j++)
        {
            if (configLed[j] == '0') totalLeds+=6;
            else if (configLed[j] == '1') totalLeds+=2;
            else if (configLed[j] == '2') totalLeds+=5;
            else if (configLed[j] == '3') totalLeds+=5;
            else if (configLed[j] == '4') totalLeds+=4;
            else if (configLed[j] == '5') totalLeds+=5;
            else if (configLed[j] == '6') totalLeds+=6;
            else if (configLed[j] == '7') totalLeds+=3;
            else if (configLed[j] == '8') totalLeds+=7;
            else if (configLed[j] == '9') totalLeds+=6;
        }

        //Imprime o total de leds
        printf("%d leds\n", totalLeds);
        totalLeds=0;
    }

    return 0;
}

