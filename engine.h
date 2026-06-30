#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <string>

inline void mostrarStatus(std::string classe, std::string nome, int v, int atq) {
    std::cout << "[" << classe << "] " << nome << " -> HP: " << v << " | ATQ: " << atq << std::endl;
}
inline int calcularDano(int ataque, int escudo) {
    int danoFinal = ataque - escudo;
    return (danoFinal < 0) ? 0 : danoFinal;
}
inline int aplicarCritico(int danoBase, bool sorte) {
    return sorte ? (danoBase * 2) : danoBase;
}
#endif
