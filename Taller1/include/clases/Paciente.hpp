#ifndef PACIENTE_HPP
#define PACIENTE_HPP
// paciente hpp
#include "Persona.hpp"
class Paciente {
private:
    std::string id;
    std::string servicioDestino;

public:
    Paciente();
    Paciente(std::string id, std::string nombre, int edad, std::string servicio);
    
    // Getters y Setters
    std::string getId() const;
    std::string getServicio() const;
    void mostrar() const;
};

#endif
