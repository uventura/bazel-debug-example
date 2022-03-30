cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps =
        select({
            ":x64_debug_build":["//lib:teste"], # inclusão da biblioteca utilizada, porém só funcionando em modo debug
            ":release":["//lib:generic"]
        })
    ,  
    includes = ["lib/"]    # Arrumando o caminho de inclusão, para permitir algo como #include "teste.h"
)

config_setting(
    name = "x64_debug_build",
    values = {
        "cxxopt":"-DEXIBIR_MENSAGEM", # o define de exibir mensagem deverá ser criado
        "compilation_mode": "dbg"   # Criando uma configuração para modo debug
    },
)

config_setting(
    name = "release",
    values = {
        "compilation_mode": "opt"   # Criando uma configuração para modo debug
    }
)