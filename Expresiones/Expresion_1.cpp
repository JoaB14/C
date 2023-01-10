#include <iostream>  /*printf scanf cout cin*/
using namespace std;

int main(int argc,char*argv[]){

    float nmro1= 0,nmro2=0,resultado = 0;

    cout<<"Escribe el primer numero: "<<endl;
    cin>>nmro1;

    cout<<"\nEscriba el segundo numero: "<<endl;
    cin>>nmro2;

    resultado = (nmro1+nmro2)/2;

    cout<<"El resultado es : "<<resultado<<endl;
    cout<<"El resultado es: "<<nmro1/nmro2<<endl; 

    return 0;
}