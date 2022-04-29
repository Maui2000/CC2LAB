/*

#include <iostream>
using namespace std;
int main(void){

	double salario, nuevosalario;

	cout << "Ingrese el salario del profesor: " << endl;
	cin >> salario;

	if (salario < 1800)	{
		salario = salario + (salario*0.12);
	}
	else if ((salario >= 18000) && (salario<= 30000)){
		salario = salario + (salario*0.08);
	}
	else if ((salario > 30000) && (salario <= 50000)){
			salario = salario + (salario*0.08);
    }
    else{
    	nuevosalario = salario + (salario*0.06);
	}

    cout <<"El nuevo salario del profesor es de : " << nuevosalario << endl;
}
*/

/*
#include <iostream>
using namespace std;
int main(void){

	int n1, n2;

	cout <<"Ingrese el primer numero :" <<endl;
	cin >> n1;
	cout <<"Ingrese el segundo numero :"<<endl;
	cin >> n2;

	if (n1 % n2 == 0){
		cout<<"n1 es divisor de n2"<<endl;
	}
	else{
		cout<<"n1 no es divisor de n2 :" <<endl;
	}

}
*/

/*

#include <iostream>
using namespace std;
int main(void){

	double monto, descuento;

	cout<<"Ingrese el monto :"<<endl;
	cin>> monto;

	if(monto < 800){
		descuento = monto;
	}
	else if((monto >= 800) & (monto <= 1500)){
		descuento = (monto - (monto*0.10));
	}
	else if((monto > 1500) & (monto <= 5000)){
		descuento = (monto - (monto*0.15));
	}
	else{
		descuento = (monto - (monto*0.20));
	}

	cout<<"El valor a pagar es de :"<< descuento <<endl;

}

*/


/*
#include <iostream>
using namespace std;

int main(void)
{
    int suma = 0;

    for( int i = 1; i <= 100; i++ ){
        if( i % 2 == 0 ) suma += i;
    }

    cout << "\nLa suma de los numeros pares es: " << suma << std::endl;

    return 0;
}

*/


/*
2. Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos.
*/

#include <iostream>
using namespace std;
int main(void){

	int n1, n2;

	cout<<"Ingrese el primer numero :"<<endl;
	cin>> n1;
	cout<<"Ingrese el segundo  numero :"<<endl;
	cin>> n2;

	cout<<"El producto de ambos numeros es :"<<n1*n2<<endl;

	return 0;
}



/*3. Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).

*/

/*
#include <iostream>
using namespace std;
int main(void){

	char nombre, ApellidoP, ApellidoM, primeraLetradelNombre, pLaM;


	cout<<"Ingrese su nombre :"<<endl;
	cin>> nombre;


	cout<<"Ingrese la primera letra del nombre :"<<endl;
	cin>> primeraLetradelNombre;

	cout<<"Ingrese su apellido paterno :"<<endl;
	cin>> ApellidoP;


	cout<<"Ingrese su apellido materno :"<<endl;
	cin>> ApellidoM;



	cout<<"Ingrese la primera letra de sua apellido materno :"<<endl;
	cin>> pLaM;

	cout<<"Su correo unsa generado es :"<<endl;





	return 0;

}

*/


/*
4. Calcule los primeros 50 números primos y muestre el resultado en pantalla.
*/

/*
#include <iostream>
using namespace std;
int main(void){

	int n;

	for( int i = 1; i <= 50; i++ ){
		if(i%n != 0)
		n=primo;
		else{
			n=no es primo;
		}
	}




	return 0;
}
*/

/*
1. Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos.


#include <iostream>
using namespace std;
int main(void){

	int n1, n2;

	cout<<"Ingrese el primer numero :"<<endl;
	cin>> n1;
	cout<<"Ingrese el segundo  numero :"<<endl;
	cin>> n2;

	cout<<"El producto de ambos numeros es :"<<n1*n2<<endl;

	return 0;
}

*/

/*2. Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).

*/

/*
#include <iostream>
using namespace std;
int main(void){

	char nombre, ApellidoP, ApellidoM, primeraLetradelNombre, pLaM;


	cout<<"Ingrese su nombre :"<<endl;
	cin>> nombre;


	cout<<"Ingrese la primera letra del nombre :"<<endl;
	cin>> primeraLetradelNombre;

	cout<<"Ingrese su apellido paterno :"<<endl;
	cin>> ApellidoP;


	cout<<"Ingrese su apellido materno :"<<endl;
	cin>> ApellidoM;



	cout<<"Ingrese la primera letra de sua apellido materno :"<<endl;
	cin>> pLaM;

	cout<<"Su correo unsa generado es :"<<endl;





	return 0;

}

*/


/*3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
formato de salida debe de estar en AM o PM según corresponda).
*/
/*
#include <iostream>
using namespace std;
int main(void){

	int hora, minuto;

	cout<<"Ingrese la hora :"<<endl;
	cin>> hora;
	cout<<"Ingrese los minutos :"<<endl;
	cin>> minuto;

	if(hora <12){
		cout<<"AM :"<<endl;
	}
	else{
		cout<<"PM :"<<endl;

	}

	return 0;
}

*/

/*
4. Escriba un código que solicite una cantidad de minutos específica y muestre como
resultado la hora y fecha resultante tomando como referencia la hora y fecha actual y
restarle el tiempo indicado.
*/


/*
6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
en binario.
*/
/*
#include <iostream>

using namespace std;

int main(void){

    int n1;
    short binario[900];

    cout << "Ingrese un numero entre 100 y 999 para convertir en binario :" << endl;
    cin >> n1;

    for (int i = 100; i < 999; i++)
    {
        binario[i] = n1 % 2;
        n1 /= 2;
    }

    cout << "El numero en binario es:" << endl;

    for (int i = 900; i >= 100; i--)
    {
        cout << binario[i];
    }

    cout << endl;
    system("PAUSE");

    return 0;

}
*/
/*
7 Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.
*/
/*
#include <iostream>

using namespace std;

int main(void){
	int n1, n2;

	cout<<"Ingrese el primer numero :"<<endl;
	cin>> n1;
	cout<<"Ingrese el segundo numero :"<<endl;
	cin>> n2;

	if(n1 % n2 == 0){
		cout<<"El numero "<<n2<<" Es multiplo de "<<n1<<endl;
	}
	else{
        cout<<"no es multiplo"<<endl;
	}
}


*/

















