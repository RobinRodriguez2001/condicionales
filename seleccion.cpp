#include <iostream>
using namespace std; main(){
int n1=8,n2=0, n3=0, promedio=0; 
cout<<"Ingrese Nota 1:";
cin>>n1;
cout<<"Ingrese Nota 2:"; cin>>n2;
cout<<"Ingrese Nota 3:";
cin>>n3;
promedio = (n1+n2+n3) /3;
string mensaje =" ";
mensaje = promedio>=61 ? "Aprobado" : "Reprobado";
cout<<"su promedio es de "<<promedio<<"por lo tanto "<<mensaje<<endl;


if (promedio>=0 && promedio<61){
	cout<<"mala nota"<<endl;
}
if (promedio>=61 && promedio<81){
	cout<<"buena nota"<<endl;
}
if (promedio>=81){
	cout<<"excelente nota"<<endl;
}



system("pause");
}
