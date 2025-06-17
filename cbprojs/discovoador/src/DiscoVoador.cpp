#include <DiscoVoador.h>
#include <iostream>

DiscoVoador::DiscoVoador()
{
    //ctor
}

DiscoVoador::~DiscoVoador()
{
    //dtor
}

void DiscoVoador::dispararLasers()
{
    carga-= 10;
    std::cout << "Piuuuu!!!" << std::endl;

}

DiscoVoador& DiscoVoador::operator=(const DiscoVoador& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
