#include <iostream>

using namespace std;

int main(){

 //Aca definimos la variable edad como un valor entero y solicitamos al usuario que la ingrese

int edad;


 cout<<"Ingrese la edad de la persona: ";

 cin >> edad;

 //Aca comprobamos el rango de edad en que se encuentra la persona y le informamos sobre el costo

  if(edad < 5&& edad >0){

  cout <<"La persona entra gratis  ";


  }else if(edad >=5 && edad <= 12){

 cout <<"El costo es de $5  ";


  }else{
    cout <<"El costo es de $12  ";


}

//Agradecemos y finalizamos el codigo

 cout<<"Muchas gracias por elegir nuestro parque";

    return 0; 
}