# Heap - Ejercicio 1
Se desea construir un programa que se encargue de intercalar un conjunto de K listas ordenadas, de diferente tamaño. Se debe resolver en O(P log2 K), siendo P la cantidad total de elementos.

El algoritmo esperado se describe en: 
https://en.wikipedia.org/wiki/K-way_merge_algorithm

## Formato de entrada
| Entrada           |
| ----------------- |
| K                 |
| N1                |
| Elemento 1 de L1  |
| Elemento 2 de L1  |
| …                 |
| Elemento N1 de L1 |
| N2                |
| Elemento 1 de L2  |
| Elemento 2 de L2  |
| …                 |
| Elemento N2 de L2 |
| …                 |

La primera línea K indica cuántas listas contendrá el archivo de entrada. 

La siguiente línea, N1 nos indica el tamaño de la lista L1. Luego, las siguientes Ni líneas, contienen los elementos de dicha lista. Esto se repite K veces, una vez por cada lista.

## Formato de salida
La salida contendrá P líneas, cada una con los elementos de la lista resultante de intercalar las K listas ordenadamente.

## Ejemplos
### Ejemplo 1
| Entrada     |
| ----------- |
| 3           |
| 2           |
| 1           |
| 2           |
| 3           |
| 1           |
| 2           |
| 3           |
| 1           |
| 5           |

| Salida      |
| ----------- |
| 1           |
| 1           |
| 2           |
| 2           |
| 3           |
| 5           |
