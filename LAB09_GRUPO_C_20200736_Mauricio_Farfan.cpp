//LAB 09
/*
#include <iostream>
#include <string>

using namespace std;

template <typename T>
T mayor(T a, T b, T c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

template <typename T>
T menor(T a, T b, T c){
    if(a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main()
{
    cout << "El menor numero es: ";
    cout << menor<int>(9,6,15) << endl;
    cout << "El mayor numero es: ";
    cout << mayor<int>(9,6,15) << endl;
    return 0;
}
*/
/*
#include <iostream>
#include <string>

using namespace std;

template <typename T>
T suma(T a, T b){
    a+b;
}

template <typename T>
T multiplicacion(T a, T b){
    a*b;
}

template <typename T>
T resta(T a, T b){
    if(a>b){
        a-b;
    }
    else{
        b-a;
    }
}

template <typename T>
T division(T a, T b){
     if(a>b){
        a/b;
    }
    else{
        b/a;
    }
}
int main()
{
    cout << "Suma: ";
    cout << suma<int>(9,6) << endl;
    cout << "Resta: ";
    cout << resta<int>(9,6) << endl;
    cout << "Multiplicacion: ";
    cout << multiplicacion<int>(9,6) << endl;
    cout << "Division: ";
    cout << division<int>(9,6) << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <conio.h>

using namespace std;

template <class T>
T minimo (T * Array, int num_elemen)
{
   T min= Array [0] ;

   for (int i=1; i< num_elemen; i++)
        if( Array[ i ] < min)
            min = Array [ i ];

   return min;
} ;

template <class T>
T maximo (T * Array, int num_elemen)
{
   T max= Array [0];

   for (int i=1; i< num_elemen; i++)
        if( Array[ i ] > max)
            max = Array [ i ];

   return max;
};

int main(void)
{
   int ArrayInt [5] = {10,7,2,8,6};
   float ArrayFloat [5] = { 12.1, 8.7, 5.6 , 8.4, 1.2};
   int i;

   cout <<"Arreglo de enteros: ";
   for (i=0; i<3; i++)
         cout << ArrayInt[ i ] << " ";

   cout << endl << "Numero minimo: " << minimo (ArrayInt, 3) << endl
         <<"Numero maximo: " << maximo (ArrayInt, 3) << endl << endl;

   cout << "Arreglo de flotantes: ";
   for (i=0; i<3; i++)
        cout << ArrayFloat[ i ] << " ";
        cout << endl <<"Numero minimo: " << minimo (ArrayFloat, 3) << endl
               <<"Numero maximo: " << maximo (ArrayFloat, 3);

   getch();
}
*/

#include <iostream>
#include <conio.h>

using namespace std;

template <class T>
void Ordenar ( T * a, int st, int fn)
{
   int i, j , k;
   T item_a_ordenar;

   k = 1 ;

   do
   {
       k= 3 * k + 1;
    } while (k < fn - st + 1) ;

   do
   {
       k /= 3 ;

       for (i= st+k; i<=fn; i++)
       {
             item_a_ordenar = a [ i ] ;
             j = i ;

            while (item_a_ordenar < a [ j-k])
            {
               a [ j] =a [ j-k] ;
               j -=k;

               if(j < st+k)
                 break;
            }

            a [j]=item_a_ordenar;
        }
   } while(k > 1);
}

int main(void)
{
    int Arraylnt[3] = { 2, 3, 1 } ;
    float ArrayFloat[3] = {25.0, 3.0, 45.2 } ;
    int i ;

    cout << "Enteros: " << endl
          << "Arreglo original: ";

    for (i=0; i<3; i++)
          cout << Arraylnt[ i ] << " ";

    Ordenar(Arraylnt, 0, 2);
    cout << endl << "Luego de ordenar: ";

    for (i=0; i<3; i++)
          cout << Arraylnt[ i ] << " ";


    cout << endl << endl
          << "Flotantes: " << endl
          << "Arreglo original: ";

    for (i=0; i<3; i++)
          cout << ArrayFloat[ i ] << " ";

    Ordenar(ArrayFloat, 0, 2);
    cout << endl << "Luego de ordenar: ";

    for (i=0; i<3; i++)
          cout << ArrayFloat[ i ] << " ";


    getch() ;
}
