//
Samuel David Troncoso


#include <string>
#include <iostream>
using namespace std;
class Raza {
private:
    string name;
    string origin;
public:
    Raza(string nombre, string Origin);
    string getName();
    string getOrigin();
    void setName(string nombre);
    void setOrigin(string Origin);
};

