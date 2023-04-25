//
// Created by xDarkStone on 24/4/2023.
//

#ifndef GUIA1_EJ5_HELPER_H
#define GUIA1_EJ5_HELPER_H

typedef struct producto {
    int codigo,stock,stockMin;
    char nombre[50];
} Producto ;

void listarProductos(Producto *productos, int n);

#endif //GUIA1_EJ5_HELPER_H
