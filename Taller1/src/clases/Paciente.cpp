#ifndef PACIENTE_CPP
#define PACIENTE_CPP

#include "Persona.hpp" 
#include <string>
#include <iostream>

class Paciente : public Persona {
private:
    std::string id;
    std::string servicioDestino;

public:
    // Constructores
    Paciente();
    Paciente(std::string id, std::string nombre, int edad, std::string servicio);

    // Gets
    std::string getId() const;
    std::string getServicio() const;
    
    void mostrar() const;

    //destrool
    ~Paciente() override;
};

#endif
