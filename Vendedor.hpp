#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas = 0;

  public:
    Vendedor();
    Vendedor(std::string _nome, double _salario, int _vendas, double _horas);
    double setVendas(double _vendas);
    double getVendas();
    double quotaVendasAnual();
    void print();
};

#endif