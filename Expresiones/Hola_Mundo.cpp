#include <iostream>
using namespace std;

/*

    !Tipo de Dato Primitivo
    int: entero -> %d 
    string: cadena de caracteres -> %s
    char: caracter -> %c
    float: numeros con coma -> %f

    ?Tipo de dato primitivo nombre de variable = numero;

    !Forma en C
    printf(""); 
    scanf("%d", &variable);

    !Forma en C++
    cout<<""; 
    cin>>variable;

*/
int main(int argc,char*argv[]){

    int uwu = 0,uwu3 = 0,uwu4 = 0;
    string manu = "Manuel";
    char letra = 'M';
    float uwu2 = 5.2;


    cout<<"Este es mi numero: "<<uwu;
    printf("Este es mi numero: %d",uwu);


    cout<<"Este es mi primer numero "<<uwu<<" este es mi segundo numero "<<uwu2<<endl;
    printf("Este es mi primer numero %d este es mi segundo numero %f\n",uwu,uwu2);

    printf("\n\nEscribime un numero: ");
    scanf("%d", &uwu);

    cout<<"\n\nEscribi un numero: "<<endl;
    cin>>uwu3;


    printf("%d\n",uwu);

    cout<<uwu3<<endl;

    return 0;
}
