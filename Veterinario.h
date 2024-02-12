/*

Nombre: Samuel David Troncoso
Profesor: Gonzalo Noreña 
*/


#ifndef VETERINARIO_H
#define VETERINARIO_H
#include <iostream>
#include <string>

using namespace std;

class Veterinario{

    string nombre;
    int aniosExperiencia;


    public:
      Veterinario();
      Veterinario(string nombre, int aniosExperiencia);
      void setName(string nombre);
      void setAniosExperiencia(int anos);
      string getName();
      int getAniosExperiancia();
