// persona hpp
#include <string>

class Persona {
protected:
    std::string nombre;
    int edad;

public:
    Persona(std::string n, int e) : nombre(n), edad(e) {}
    std::string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
};
