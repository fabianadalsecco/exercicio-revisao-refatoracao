#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    Vendedor();
    Vendedor(std::string _nome, double _salario, int _vendas, double _horas);
    double quotaVendasAnual();
    void print();
};

#endif