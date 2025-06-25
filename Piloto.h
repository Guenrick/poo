#ifndef PILOTO_H
#define PILOTO_H

#include "Pessoa.h"
#include <string>

using namespace std;

class Piloto : public Pessoa {
private:
    string matricula;
    string breve;
    int horasDeVoo;

public:
    Piloto(const string& nome, const string& matricula, const string& breve, int horasDeVoo);

    void setMatricula(const string& novaMatricula);
    string getMatricula() const;

    void setBreve(const string& novoBreve);
    string getBreve() const;

    void setHorasDeVoo(int novasHoras);
    int getHorasDeVoo() const;

    string serializar() const override;
};

#endif // PILOTO_H
