/*
//PROBLEMA #1
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct amigo{
	string nombres;
	string fecha;
};


void cumpleMes(amigo a, string actual){
	string m1 = a.fecha.substr(3,2);
	string m2 = actual.substr(3,2);
	if(m1==m2){
		cout<<a.nombres<<" cumple años este mes"<<endl;
	}
}
int main(int argc, char *argv[]){
	string actual;
	vector<amigo> lista;
	int n;
	string tempn;
	string tempf;

	cout<<"Nro de amigos: ";
	cin>>n;
	cout<<"Fecha: ";
	getline(cin,actual);
	getline(cin,actual);
	cout<<endl;

	for(int i=0; i<n; i++){
		cout<<"Nombre de su amigo: ";
		getline(cin,tempn);
		cout<<"Fecha de cumpleaños de su amigo: ";
		getline(cin,tempf);
		amigo a={tempn,tempf};
		lista.push_back(a);
	}
	cout<<endl;

	for(auto i=lista.begin(); i!=lista.end(); i++){
		cumpleMes(*i,actual);
	}


	return 0;
}
*/
/*
//PROBLEMA 2

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct alumno{
	string nombre;
	string grupo;
	double nota1;
	double nota2;
	double nota3;
	double notapf;
	double total;
};

int main(int argc, char *argv[]){
	vector<alumno> lista;
	string si;

	do{
		alumno a;
		cout<<"Nombre: ";
		getline(cin,a.nombre);
		cout<<"Grupo: ";
		getline(cin,a.grupo);
		cout<<"Nota primera fase: ";
		cin>>a.nota1;
		cout<<"Nota segunda fase: ";
		cin>>a.nota2;
		cout<<"Nota tercera fase: ";
		cin>>a.nota3;
		cout<<"Nota proyecto final: ";
		cin>>a.notapf;
		a.total=((a.nota1*15)+(a.nota2*20)+(a.nota3*25)+(a.notapf*40))/100;
		cout<<"Continuar(s/n)? ";
		getline(cin,si);
		getline(cin,si);
		lista.push_back(a);
		cout<<endl;
	} while(si=="s");

	for(auto i=lista.begin(); i!=lista.end(); i++){
		cout<<"El alumno "<<(*i).nombre<<" del grupo "<<(*i).grupo<<" tiene una nota final de "<<(*i).total<<"\n";
	}

	return 0;
}
*/


//PROBLEMA 3

#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct jugador{
	string nombre;
	int edad;
	double talla;
};
int main(int argc, char *argv[]){
	vector<jugador> lista;
	string si;

	for(int i=0; i<10; i++){
		jugador a;
		cout<<"Nombre: ";
		getline(cin,a.nombre);
		if(i>=1){
			getline(cin,a.nombre);
		}
		cout<<"Edad: ";
		cin>>a.edad;
		cout<<"Talla: ";
		cin>>a.talla;
		lista.push_back(a);
		cout<<endl;
	}

	for(auto i=lista.begin(); i!=lista.end(); i++){
		if((*i).edad<20&&(*i).talla>1.70){
			cout<<"El jugador "<<(*i).nombre<<" es menor de 20 años y tiene una talla mayor a 1.70mts"<<endl;
		}
	}

	return 0;
}


