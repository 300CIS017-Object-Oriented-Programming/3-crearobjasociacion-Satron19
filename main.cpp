#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar

    Perro* pepper = new Perro("Pepper", 2, "Schnauzer", "Brown", "Small");
    pepper->ladrar();

    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");
    
    Propietario* juan = new Propietario(123456789);
    juan->setNombre("Juan");
    juan->setEdad(30);

    pepper.agregarPropietario(juan);
    pepper->asociarVeterinario(new Veterinario("Dr. Smith", 5));
    

    // Consultar el nombre del pPropietario del perro Firulais

    cout << juan->mostrarInfo() << endl;
    cout << "Documento del propietario: " << pepper->getPropietario()->getDocumento() << endl;
    cout << "Edad del propietario: " << pepper->getPropietario()->getEdad() << endl;
    cout << "Veterinario de miPerro: " << miPerro->getVeterinario()->getName() << endl;

    
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    return 0;
}
