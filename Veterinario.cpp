/*

Nombre: Samuel David Troncoso
Profesor: Gonzalo Noreña 
*/

#include "Veterinario.h"
using namespace std;

Veterinario::Veterinario(string nombre, int aniosExperiencia){
    this->nombre = nombre;
    this->aniosExperiencia = aniosExperiencia;
}

string Veterinario::getNombre() {
    return nombre;
}

void Veterinario::setName(string nombre) {
    this->nombre = nombre;
}

int Veterinario::getAniosExperiencia()  {
    return aniosExperiencia;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia) {
    this->aniosExperiencia = aniosExperiencia;
}
