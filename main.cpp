// Para realizar o build em modo debug:
//      bazel build :main -c dbg --cxxopt=-DEXIBIR_MENSAGEM
// Utilizei uma flag para verificar se realmente estava funcionando

// Para compilar em modo diferente do debug:
//      bazel build :main

// Para executar:
// .\bazel-bin\main.exe

#include <iostream>

#ifdef EXIBIR_MENSAGEM
    #include "teste.h"
    #define SHOW(x) std::cout << x << "\n"
#else
    #include "generica.h"
    #define SHOW(x) std::cout << "Macro nao implementada...\n"
#endif

int main()
{
    SHOW("Hello, World!");

    #ifdef EXIBIR_MENSAGEM
        testando();
    #else
        funcGenerica();
    #endif
}