#ifndef MATRIX_TAD_H
#define MATRIX_TAD_H


/**
 * @brief Tipo abstracto de datos para representar una matriz.
 *
 * La definición interna de la estructura puede mantenerse oculta
 * en el fichero de implementación.
 */
typedef struct MatrixTAD MatrixTAD;

/**
 * @brief Crea una nueva matriz de enteros.
 *
 * Reserva memoria dinámica para una matriz con el número de filas
 * y columnas indicado. Todos los elementos se inicializan a 0.
 *
 * @param filas Número de filas de la matriz.
 * @param columnas Número de columnas de la matriz.
 * @return Puntero a la nueva matriz creada, o NULL si no se pudo reservar memoria.
 */
MatrixTAD *creaMatriz(int filas, int columnas);

/**
 * @brief Asigna un valor a una posición concreta de la matriz.
 *
 * Si la posición indicada está dentro de los límites de la matriz,
 * el valor se almacena correctamente.
 *
 * @param miMatriz Puntero a la matriz.
 * @param fila Índice de la fila donde se quiere almacenar el valor.
 * @param columna Índice de la columna donde se quiere almacenar el valor.
 * @param valor Valor entero que se desea guardar.
 * @return 0 si la operación se realiza correctamente, -1 si ocurre un error.
 */
int asignaElemento(MatrixTAD *miMatriz, int fila, int columna, int valor);

/**
 * @brief Obtiene el valor almacenado en una posición de la matriz.
 *
 * Devuelve el contenido de la celda indicada por fila y columna.
 *
 * @param miMatriz Puntero a la matriz.
 * @param fila Índice de la fila del elemento que se desea consultar.
 * @param columna Índice de la columna del elemento que se desea consultar.
 * @return Valor almacenado en la posición indicada, o -1 si ocurre un error.
 */
int obtieneElemento(MatrixTAD *miMatriz, int fila, int columna);

/**
 * @brief Muestra por pantalla el contenido completo de la matriz.
 *
 * Imprime la matriz organizada por filas y columnas.
 *
 * @param miMatriz Puntero a la matriz que se desea mostrar.
 */
void imprimeMatriz(MatrixTAD *miMatriz);

/**
 * @brief Vacía el contenido de la matriz.
 *
 * Establece todos los elementos de la matriz a 0, manteniendo
 * la memoria ya reservada.
 *
 * @param miMatriz Puntero a la matriz que se desea vaciar.
 */
void vaciaMatriz(MatrixTAD *miMatriz);


/**
 * @brief Libera la memoria ocupada por la matriz.
 *
 * Debe llamarse cuando la matriz ya no vaya a utilizarse.
 *
 * @param miMatriz Puntero a la matriz que se desea liberar.
 */
void liberaMatriz(MatrixTAD *miMatriz);

#endif