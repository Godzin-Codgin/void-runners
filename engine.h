#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <string>

inline void mostrarStatus(std::string classe, std::string nome, int v, int atq) {
    std::cout << "[" << classe << "] " << nome << " -> HP: " << v << " | ATQ: " << atq << std::endl;
}
#endif
