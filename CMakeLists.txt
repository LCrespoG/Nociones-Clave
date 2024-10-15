cmake_minimum_required(VERSION 3.29)

project(Nociones-Clave)

set(CMAKE_CXX_STANDARD 20)

# Primer ejecutable
add_executable(Nociones-Clave
        "Ejercicio 1/main.cpp"
        "Ejercicio 1/Persona.cpp"
        "Ejercicio 1/Estudiante.cpp"
)

# Segundo ejecutable
add_executable(Nociones-Clave2
        "Ejercicio 2/main.cpp"
        "Ejercicio 2/Nuevo.cpp"
        "Ejercicio 2/Matematicas.cpp"
        "Ejercicio 2/funciones.cpp"
)

# Libreria fmt
include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)
FetchContent_MakeAvailable(fmt)


target_link_libraries(Nociones-Clave2 PRIVATE fmt::fmt)

# Biblioteca estaticas y dinamicas
add_library(Matematicas STATIC "Ejercicio 2/Matematicas.cpp")

target_link_libraries(Nociones-Clave2 PRIVATE Matematicas)
