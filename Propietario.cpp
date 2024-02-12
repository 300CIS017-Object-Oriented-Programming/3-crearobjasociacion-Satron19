//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

string Propietario::mostrarInfo() {
    return "Nombre: " + nombre + ", Documento: " + to_string(documento) + ", Edad: " + to_string(edad);
}

int Propietario::getEdad() const {
    return edad;
}
