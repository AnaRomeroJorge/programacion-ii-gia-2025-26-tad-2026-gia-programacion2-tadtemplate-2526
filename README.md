# Práctica 5 – Tipos Abstractos de Datos

## MatrixTAD

Dado que la gestión de matrices en C puede resultar limitada, se propone la creación de un TAD llamado **MatrixTAD** que permita inicializar, almacenar y recuperar datos de una matriz de forma sencilla y estructurada. En este primer ejemplo, se trabajará con matrices de números enteros (`int`).

Para ello será necesario implementar el tipo de datos **MatrixTAD** así como las siguientes funciones:

```MatrixTAD *creaMatriz(int filas, int columnas);```  
Crea en memoria dinámica una matriz con el número de filas y columnas indicado. Todos los elementos deben **inicializarse por defecto al valor 0**.

```int asignaElemento(MatrixTAD *miMatriz, int fila, int columna, int valor);```  
Asigna un valor a la posición indicada de la matriz. Si los índices están fuera de rango, muestra un mensaje de error y devuelve -1. En caso contrario, devuelve 0.

```int obtieneElemento(MatrixTAD *miMatriz, int fila, int columna);```  
Devuelve el valor almacenado en la posición especificada. Si los índices no son válidos (fuera de rango), muestra un mensaje de error y devuelve -1.

```void imprimeMatriz(MatrixTAD *miMatriz);```  
Muestra por pantalla el contenido completo de la matriz con formato de filas y columnas.

```void vaciaMatriz(MatrixTAD *miMatriz);```  
Establece todos los elementos de la matriz a 0 sin liberar la memoria reservada.

```void liberaMatriz(MatrixTAD *miMatriz);```  
Libera la memoria ocupada por la estructura MatrixTAD y sus elementos.

Este TAD puede ampliarse en el futuro con operaciones adicionales, como la suma o multiplicación de matrices.
