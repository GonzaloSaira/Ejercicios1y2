#include <iostream>
#include <time.h>
using namespace std;

int main (){
    int n,num,i,x;
    srand(time(0));
    n = rand();
    n = (rand() % 10) + 1;
    while(num!=n){
    cout<<"Ingrese un numero: ";
    cin>>num;
    if (num<n){    
        cout<<"El numero a adivinar es más grande que el ingresado "; 
        }
    if (num>n){    
        cout<<"El numero a adivinar es más pequeño que el ingresado "; 
        }
    if (num=n){
        cout<<"Se ingreso el numero a adivinar "; 
        }
    }
}
