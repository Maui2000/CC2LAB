/*
#include <iostream>
#include <cstdlib>

using namespace std;

int base;
int exponente;
int resultado=0;
int calcular=1;

void potencia(){
    cout << "Ingrese la base:";
    cin >> base;
    cout << "Ingrese el exponente:";
    cin >> exponente;

int x=1;
while (x<exponente){
if (resultado<base){
resultado=base*base;
}

else{
resultado=resultado*base;
}
x++;
}
cout << "El resultado es: " << resultado << endl;
resultado=0;
}

int main(){
potencia();
return 0;

}
*/

/*
#include <iostream>

using namespace std;

void bisiesto(int anio){

    if (anio%4!=0 ||(anio%100==0 && anio%400!=0)){
        cout<<"No es bisiesto";
    }
    else{
        cout<<"Es bisiesto";
    }
}

int main(){
    int fecha;
    cout<<"Ingrese el ano: ";
    cin>>fecha;
    bisiesto(fecha);
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

//Prototipo de la funcion
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);

int main ()
{
    int anioAct;
    int mesAct;
    int fechAct;

    int anioNac;
    int mesNac;
    int fechNac;

    cout << "Ingrese Anio Actual: ";
    cin >> anioAct;
    cout << "Ingrese Mes Actual: ";
    cin >> mesAct;
    cout << "Ingrese Fecha Actual: ";
    cin >> fechAct;

    cout << "\nIngrese Anio Nacimiento: ";
    cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";
    cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";
    cin >> fechNac;

    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);

    return 0;
}

void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;

    if ( fechAct < fechNac  )
    {
        fechAct = fechAct + 30;
        mesAct = mesAct - 1;
        respFech =  fechAct - fechNac;
    }
    else
        respFech =  fechAct - fechNac;

    if( mesAct < mesNac )
    {
        mesAct = mesAct + 12;
        anioAct = anioAct - 1 ;
        respMes = mesAct - mesNac;
    }
    else
        respMes = mesAct - mesNac;

    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anioAct - anioNac << endl;
    cout << " Mes: " << respMes << endl;
    cout << " Dia: " << respFech << endl;
}
*/

/*
#include<iostream>
using namespace std;
void Primo(){
    int n=0,x=0,y=0,residuo=0,z=0;
  cout<<"Numero maximo: "; cin>>n;
  cout<<endl;
  cout<<"PRIMOS DEL 1 HASTA "<<n<<": "<<endl;
  for(x=1;x<=n;x++)
  {
    for(y=1;y<=x;y++)
    {
      residuo=x%y;
      if(residuo==0)
      {
        z=z+1;
      }
    }
    if(z==2)
    {
      cout<<" "<<x;
    }
    z=0;
  }
}

int main()
{
  Primo();
  return 0;
}
*/


#include<iostream>
#include<stdlib.h>
using namespace std;
void ValorEntre(){
    int n;
    cout<<"Digite el numero: ";
    cin>>n;

    if((n>=0)&&(n<=100)){
        cout<<"El numero que ingreso SI esta entre ese rango[1-100]";
    }
    else{
        cout<<"El numero que ingreso NO esta entre ese rango[1-100]";
    }
}

void ValorPar(){
    int n;

    cout<<"Digite el numero: ";
    cin>>n;

    if(n%2==0){
        cout<<"El numero que ingreso SI es PAR";
    }
    else{
        cout<<"El numero que ingreso NO es PAR";
    }
}

void SumaImpares(){
    int suma=1;
    int n,c=0;

    cout<<"Digite el maximo numero: ";
    cin>>n;

    while(suma<=n){
        if(suma%2==0){
            cout<<endl;
        }
        else{
            c=c+suma;
        }
        suma++;
    }
    cout<<"Suma de numeros impares: "<<c<<endl;

    system("pause");
}

int main()
{
    int a;
  do{


    cout<<"1. Valor entre los numeros de 0 a 100"<<endl;
    cout<<"2. Validar que sea valor par"<<endl;
    cout<<"3. Sumar todos los impares de 0 hasta x"<<endl;
    cin>>a;

    switch(a){
        case 1:
            ValorEntre();
            break;

        case 2:
            ValorPar();
            break;

        case 3:
            SumaImpares();
            break;
    }
  }
  while(a !=3);
  system("pause");
}

