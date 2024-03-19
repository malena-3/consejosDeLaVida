#ifndef CONSEJOSDELAVIDA_SUBJUNTIVOS_H
#define CONSEJOSDELAVIDA_SUBJUNTIVOS_H

#include<iostream>
#include<string>
#include<switch>
using namespace std;

void subjuntivos(int chosenNum, string bestfriend);
/*Precondition: chosenNum has the integer chosen by the User
 and bedtfriend has the User's name.
 Postcondition: subjuntivos has ten commands in the informal 
 tu form. And outputs a subjuntivo based on the User's chosen number.
 SUBJUNTIVOS ARE EVEN.*/

void subjuntivos(int chosenNum, string bestfriend) //Subjuntivo Function with 10 Subjuntivos > all EVEN cases.
{
  switch(chosenNum)
    {
      case 2:
      cout << "Es importante que confíes en ti mismo, "
           << bestfriend << "." << endl; 
    break; 
      case 4:
      cout << "Yo sugiero que te sigas leal a tus fronteras, "
           << bestfriend << "." << endl;
    break;
      case 6: 
      cout << "Ojalá que entiendas el poder del amor y la " 
           << "felicidad" << endl << "dentro de ti, " 
           << bestfriend << "." << endl;
    break;
      case 8:
      cout << "Yo recomiendo que aceptes las cosas que no puedes " 
           << endl << "controlar, "
           << bestfriend << "." << endl;
    break;
      case 10:
      cout << "Yo espero que no le temas a tiempo y disfrutes cada " 
           << "paso" << endl << "de tu viaje, "
           << bestfriend << "." << endl;
    break;
      case 12:
      cout << "Yo sugiero que aprecies incluso los pequeños momentos, "
           << bestfriend << "." << endl;
    break;
      case 14:
      cout << "Es importante que duemas bien y bebaas mucha agua, "
           << bestfriend << "." << endl;
    break;
      case 16:
      cout << "Yo recomiendo que trabajes duro por el futuro que quieres crear, "
           << bestfriend << "." << endl;
    break;
      case 18:
      cout << "Es importante que conozcas tus fortalezas y debilidades, "
           << bestfriend << "." << endl;
    break;
      case 20:
      cout << "Yo espero que tengas confianza en tus habilidades, "
           << bestfriend << "." << endl;
    break;   

    }
}

#endif
