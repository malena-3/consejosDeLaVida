#ifndef CONSEJOSDELAVIDA_MANDATOS_H
#define CONSEJOSDELAVIDA_MANDATOS_H

#include<iostream>
#include<string>
#include<switch>
using namespace std;

void mandatos(int chosenNum, string bestfriend);
/*Precondition: chosenNum has the integer chosen by the User
 and bedtfriend has the User's name.
 Postcondition: mandatos has ten commands in the informal 
 tu form. And outputs a mandato based on the User's chosen number.
 MANDATOS ARE ODD.*/


void mandatos(int chosenNum, string bestfriend) //Mandato function with 10 mandatos > all ODD cases.
{
  switch(chosenNum)
    {
      case 1: 
      cout << "No importa cuán difícil o imposible sea" 
           << ", nunca pierdas de vista tu objetivo, " 
           << bestfriend << "." << endl;
    break;
      case 3:
      cout << "Si no te arriesgas, no puedes crear un futuro. Toma" 
           << " riesgos, " << endl << bestfriend << "." << endl;
    break; 
      case 5:
      cout << "El poder no está determinado por tu tamaño sino por " 
           << "el tamaño de tu corazón y tus sueños. " 
           << "Sueña en grande, " << bestfriend << endl;
    break;
      case 7:
      cout << "La comida es combustible. Come Bien, "
           << bestfriend << endl;
    break;
      case 9:
      cout << "Sé ti mismo, " << bestfriend << "; "
           << "todos los demás ya están ocupados." << endl;
    break;
      case 11:
      cout << "El éxito no es definitivo, el fracaso "
           << "no es fatal: es el coraje de continuar lo que "
           << "cuenta. Ten coraje, " << bestfriend << "." << endl;
    break;
      case 13:
      cout << "No dejes que nadie apague tu luz, " << bestfriend 
           << "." << endl;
    break;
      case 15:
      cout << "No subestimes tu valor. Tú eres digno, "
           << bestfriend << "." << endl;
    break; 
      case 17:
      cout << "Todo el mundo tiene cosas que puede y no "
           << "puede hacer." << endl << "Haz lo que puedas, " 
           << bestfriend << "." << endl;
    break;
      case 19:
      cout << "Deja de contar solo las cosas que has perdido "
           << "y recuerda" << endl << "las cosas que tienes, "
           << bestfriend << "." << endl;
    break;
    }
}

#endif
