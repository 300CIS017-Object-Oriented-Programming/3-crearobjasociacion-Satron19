//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre);
    Propietario(std::string nombre, std::string docIdentidad);
    Propietario(std::string nombre, std::string doc, std::int edad);
    void mostrarInfo();
    std::string getNombre();
    void setNombre(std::string nombre);
    int getEdad();
    void setEdad(std::int edad);
    string getDoc();
    void setDoc(std::string docIdentidad);



};


#endif //PROPIETARIO_H
