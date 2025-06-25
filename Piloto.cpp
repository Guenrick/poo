#include "Piloto.h"
#include <sstream>

Piloto::Piloto(const string& nome, const string& matricula, const string& breve, int horasDeVoo)
    : Pessoa(nome), matricula(matricula), breve(breve), horasDeVoo(horasDeVoo) {}

void Piloto::setMatricula(const string& novaMatricula) {
    this->matricula = novaMatricula;
}

string Piloto::getMatricula() const {
    return this->matricula;
}

void Piloto::setBreve(const string& novoBreve) {
    this->breve = novoBreve;
}

string Piloto::getBreve() const {
    return this->breve;
}

void Piloto::setHorasDeVoo(int novasHoras) {
    this->horasDeVoo = novasHoras;
}

int Piloto::getHorasDeVoo() const {
    return this->horasDeVoo;
}

string Piloto::serializar() const {
    stringstream ss;
    ss << "PILOTO," << this->nome << "," << this->matricula << "," << this->breve << "," << this->horasDeVoo;
    return ss.str();
}
