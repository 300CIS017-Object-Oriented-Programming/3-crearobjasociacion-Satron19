//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;

public:
    Perro();
    Perro(string nombre, int edad, string raza, string color, string tamano);

    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Veterinario* pVeterinario;

    // Sirve para.......
    void agregarPropietario(std::string nombre, std::string docIdentidad);  // The agregarPropietario method sets the pPropietario attribute of the Perro class
                                                                            // to establish a relationship between the Perro and Propietario classes.

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
