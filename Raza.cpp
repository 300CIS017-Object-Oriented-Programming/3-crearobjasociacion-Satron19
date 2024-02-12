//
// Samuel David Troncoso
//

#include "Raza.h"
using namespace std;
Raza::Raza(string name, string origin) {
    this->name = name;
    this->origin = origin;
}


string Raza::getName() {
    return name;
}
void Raza::setName(string name) {
    this->name = name;
}
string Raza::getOrigin() {
    return Origin;
}



void Raza::setOrigin(string Origin) {
    this->Origin = Origin;
}
