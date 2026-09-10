/*
 * Archivo: conjunto.c
 * Implementación de conjuntos de enteros con arreglos de capacidad fija.
 * Completen las funciones pendientes según conjunto.h.
 * Usen funciones, arreglos y apuntadores; no usen estructuras, memoria
 * dinámica, archivos ni ordenamientos.
 * Autoría: Completa tu nombre.
 */

#include <stdio.h>

#include "conjunto.h"

/* Busca únicamente en las posiciones utilizadas del conjunto. */
int buscarElemento(const int conjunto[], int cantidad, int elemento) {
    for (int indice = 0; indice < cantidad; indice++) {
        if (conjunto[indice] == elemento)
            return indice;
    }
    return -1;
}

/* Agrega un elemento si no existe y queda espacio. */
int agregarElemento(int conjunto[], int capacidad, int *cantidad,
                    int elemento) {
    // Aquí va su código.
}

/* Elimina un elemento y conserva el orden de los restantes. */
int eliminarElemento(int conjunto[], int *cantidad, int elemento) {
    // Aquí va su código.
}

/* Sustituye un elemento sin cambiar la cantidad ni introducir repetidos. */
int reemplazarElemento(int conjunto[], int cantidad, int elemento,
                       int reemplazo) {
    // Aquí va su código.
}

/* Deja el conjunto vacío, conservando el arreglo y su capacidad. */
void vaciarConjunto(int *cantidad) {
    // Aquí va su código.
}

/* Copia los elementos a otro arreglo, conservando su orden. */
int copiarConjunto(const int origen[], int cantidad,
                   int destino[], int capacidadDestino) {
    // Aquí va su código.
}

/* Indica si A es subconjunto de B, sin importar el orden. */
int esSubconjunto(const int conjuntoA[], int cantidadA,
                 const int conjuntoB[], int cantidadB) {
    // Aquí va su código.
}

/* Indica si los conjuntos tienen los mismos elementos, sin importar el orden. */
int sonConjuntosIguales(const int conjuntoA[], int cantidadA,
                       const int conjuntoB[], int cantidadB) {
    // Aquí va su código.
}

/* Calcula la unión conservando primero A y después los elementos nuevos de B. */
int unirConjuntos(const int conjuntoA[], int cantidadA,
                 const int conjuntoB[], int cantidadB,
                 int resultado[], int capacidadResultado) {
    // Aquí va su código.
}

/* Calcula la intersección conservando el orden de A. */
int intersectarConjuntos(const int conjuntoA[], int cantidadA,
                        const int conjuntoB[], int cantidadB,
                        int resultado[], int capacidadResultado) {
    // Aquí va su código.
}

/* Calcula la diferencia A-B conservando el orden de A. */
int diferenciarConjuntos(const int conjuntoA[], int cantidadA,
                        const int conjuntoB[], int cantidadB,
                        int resultado[], int capacidadResultado) {
    // Aquí va su código.
}

/* Muestra el conjunto con llaves, comas y un salto de línea al final. */
void mostrarConjunto(const int conjunto[], int cantidad) {
    printf("{");
    for (int indice = 0; indice < cantidad; indice++) {
        if (indice > 0)
            printf(", ");
        printf("%d", conjunto[indice]);
    }
    printf("}\n");
}
