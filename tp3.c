/* Hello World
* Lanneponders Yonadi, Matías
*25/04/2015
*/

#include <stdio.h>

float getCelcius(float f);


int main(void)
{
    const int min=0;                        //Limite inferior de tabla
    const int max=300;                        //Limite superior de tabla
    const int incre=20;                      //Incremento de tabla
    float f;

    printf("Tabla de Temperaturas\n");
    printf("\n");
    printf("%7s %11s\n","Fahrenheit","Celcius");
    for(f=min;f<=max;f=f+incre)
        printf("%7.1f %11.1f\n",f,getCelcius(f));
}

float getCelcius(float f){
   return 5.0*(f-32)/9.0;
}
