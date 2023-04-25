//
// Created by xDarkStone on 24/4/2023.
//

#include "helper.h"

void listarProductos(Producto *producto, int cantProd) {
    int i;
    int cantFaltante;
    printf("Productos con stock por debajo del minimo:\n");
    for (i = 0; i < cantProd; i++) {
        if (producto[i].stock < producto[i].stockMin) {
            cantFaltante = producto[i].stockMin - producto[i].stock;
            printf("Codigo: %d, Cantidad faltante: %d\n", producto[i].codigo, cantFaltante);
        }
    }

}
