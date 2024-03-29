#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}
Perro::Perro(string n, int e, string r, string c, string t){
    this->nombre = n;
    this->edad = e;
    this->raza = r;
    this->tamanio = t;
    this->color = c; 
void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}
void Perro::asociarVeterinario(std::string nombre, std::int aniosExperiencia) {
    this->pVeterinario = new Veterinario(nombre, aniosExperiencia);
}


void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
void Perro::setVeterinario(Veterinario *pVeterinario) {
    this->pVeterinario = pVeterinario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}
Propietario *Perro::getVeterinario(){
    return this->pVeterinario;
}
int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

void Perro::agregarRaza(string name, string origin) {
    this->pRaza = new Raza (name,origin);
}

void Perro::setRaza(Raza* pRaza){
    this->pRaza = pRaza;
}

Raza* Perro::getRaza() {
    return pRaza;
}
Perro::~Perro() {
    delete pPropietario;
    delete pVeterinario;
}


