#include <iostream>
using namespace std;
main(){
//and (y) &&
// or (o)
char lapiz, lapicero, cuaderno;
cout<<"Trae Lapiz (s/n):";
cin>>lapiz;
cout<<"Trae lapicero (s/n):";
cin>>lapicero;
cout<<"Trae cuaderno (s/n):";
cin>>cuaderno;
// puede entrar a si clase si usted trae un lapiz y un Lapicere 
// and el valor es verdadero si ambos son verdaderas
if((lapiz=='s' or lapicero=='s' )&& cuaderno =='s'){
cout<<"Ingresa"<<endl;
}else{
cout<<"Lo siento no puede Ingresar"<<endl;
}
system("pause");
}
