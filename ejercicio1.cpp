#include <iostream>
using namespace std;

int main(){
    int i,n,x,d=0,c=0,s=0,p;
    cout<<"Ingrese total de notas: ";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Ingrese nota " <<i<< " : ";
        cin>>x;
        if(x<10.5){
            d=d+1;
        }
        if(x>=10.5){
            c=c+1;
        }
        if(x>=0){
            s = s+x;
            p = s/n;
        }
    }
    cout<<"Porcentaje de desaprobados: " <<d<< endl;
    cout<<"Cantidad de aprobados: " <<c<< endl;
    cout<<"Promedio del salon: " <<p<< endl;
    return 0;
}