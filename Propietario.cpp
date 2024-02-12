//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

Propietario::Propietario(string nombre) {
    this->nombre = nombre;
}
Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}
Propietario::Propietario(std::string nombre, std::string doc, std::int edad) {
    this->nombre = nombre;
    this->docIdentidad = doc;
    this->edad=edad;
}


std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

string Propietario::mostrarInfo() {
    return "Nombre: " + nombre + ", Documento: " + to_string(docIdentidad) + ", Edad: " + to_string(edad);
}
void Propietario::setEdad(std::int edad){
    this->edad = edad;
}
void Propietario::setDoc(std::string doc){
  this->docIdentidad = doc;
}
string Propietario::getDoc(){
    return docIdentidad;
}

int Propietario::getEdad() {
    return edad;
}
