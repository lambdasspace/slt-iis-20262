/*
 * Archivo: conjunto.c
 * Implementación de un conjunto de estudiantes con capacidad fija.
 * Completen las funciones pendientes según conjunto.h.
 * No usen memoria dinámica ni archivos.
 * Autoría: Completa tu nombre.
 */

#include <stdio.h>

#include "conjunto.h"

/* Inicializa la cantidad y la capacidad del conjunto. */
void inicializarConjunto(Conjunto *conjunto, int capacidad) {
    conjunto->cantidad = 0;
    conjunto->capacidad = capacidad;
}

/* Obtiene una posición utilizada para consultarla o modificarla. */
Estudiante *obtenerElemento(Conjunto *conjunto, int indice) {
    if (indice < 0 || indice >= conjunto->cantidad)
        return NULL;
    return &conjunto->elementos[indice];
}

/* Busca por matrícula sólo en las posiciones utilizadas. */
int buscarElemento(const Conjunto *conjunto, const Estudiante *estudiante) {
    for (int indice = 0; indice < conjunto->cantidad; indice++) {
        if (compararEstudiantes(&conjunto->elementos[indice], estudiante) == 0)
            return indice;
    }
    return -1;
}

/* Agrega un estudiante si no existe y queda espacio. */
int agregarElemento(Conjunto *conjunto, const Estudiante *estudiante) {
    // Aquí va su código.
}

/* Elimina un estudiante y conserva el orden de los restantes. */
int eliminarElemento(Conjunto *conjunto, const Estudiante *estudiante) {
    // Aquí va su código.
}

/* Sustituye un estudiante sin introducir matrículas repetidas. */
int reemplazarElemento(Conjunto *conjunto, const Estudiante *estudiante,
                       const Estudiante *reemplazo) {
    // Aquí va su código.
}

/* Deja el conjunto vacío y conserva su capacidad. */
void vaciarConjunto(Conjunto *conjunto) {
    // Aquí va su código.
}

/* Copia todos los estudiantes del origen. */
int copiarConjunto(const Conjunto *origen, Conjunto *destino) {
    // Aquí va su código.
}

/* Comprueba si todos los estudiantes de A pertenecen a B. */
int esSubconjunto(const Conjunto *conjuntoA, const Conjunto *conjuntoB) {
    // Aquí va su código.
}

/* Comprueba si ambos conjuntos contienen las mismas matrículas. */
int sonConjuntosIguales(const Conjunto *conjuntoA,
                        const Conjunto *conjuntoB) {
    // Aquí va su código.
}

/* Calcula la unión conservando primero el orden de A. */
int unirConjuntos(const Conjunto *conjuntoA, const Conjunto *conjuntoB,
                  Conjunto *resultado) {
    // Aquí va su código.
}

/* Calcula la intersección conservando el orden de A. */
int intersectarConjuntos(const Conjunto *conjuntoA,
                         const Conjunto *conjuntoB, Conjunto *resultado) {
    // Aquí va su código.
}

/* Calcula la diferencia A-B conservando el orden de A. */
int diferenciarConjuntos(const Conjunto *conjuntoA,
                         const Conjunto *conjuntoB, Conjunto *resultado) {
    // Aquí va su código.
}

/* Muestra todos los estudiantes del conjunto entre llaves. */
void mostrarConjunto(const Conjunto *conjunto) {
    printf("{");
    for (int indice = 0; indice < conjunto->cantidad; indice++) {
        if (indice > 0)
            printf(", ");
        mostrarEstudiante(&conjunto->elementos[indice]);
    }
    printf("}\n");
}
