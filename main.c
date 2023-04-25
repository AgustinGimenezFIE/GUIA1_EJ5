#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

/*
 5. Diseñar un programa que lleve el registro de una cantidad (que el usuario
determinará en tiempo de ejecución) de productos con los siguientes datos:
a. Código
b. Nombre
c. Stock
d. Stock Mínimo
Realizar una función que liste los códigos de los productos que se encuentran por
debajo del stock mínimo, junto con la cantidad que se requiere para que dejen de
estarlo.
 */


int main() {
    Producto  *producto;
    int cantProd=0 , i=0;
    printf("Ingrese Cantidad de producto : ");
    scanf("%d",&cantProd);
    printf("La cantidad de producto ingresados es de : %d",cantProd);
    producto = (Producto *) malloc(cantProd * sizeof(Producto));

    // Leer los datos de los producto desde la entrada estándar
    for (i = 0; i < cantProd; i++) {
        printf("\nIngrese los datos del producto %d:", i + 1);
        printf("\nCodigo: ");
        scanf("%d", &producto[i].codigo);
        printf("Nombre: ");
        scanf("%s", producto[i].nombre);
        printf("Stock: ");
        scanf("%d", &producto[i].stock);
        printf("Stock Minimo: ");
        scanf("%d", &producto[i].stockMin);
    }
        listarProductos(producto, cantProd);

        free(producto);
        return 0;
}
