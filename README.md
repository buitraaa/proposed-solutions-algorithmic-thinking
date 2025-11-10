# Proposed Solutions for Some Exercises Featured in the Book *Algorithmic Thinking*
# Nombre del estudiante: Buitrago Daniel

This repository contains proposed solutions to selected exercises from the book *Algorithmic Thinking*, written by Professor Andrés Ducuara.

> ⚠️ **Disclaimer**  
> This material is provided for educational and personal use only. **Commercial reproduction, distribution, or use is strictly prohibited.**

## Attribution

The original book *Algorithmic Thinking* is an **open-source** educational resource created by Professor Andrés Ducuara. All credit for the original content, problems, and pedagogical structure belongs to him.

Solutions presented here are independently developed and do not represent official answers unless explicitly stated.

---

**License:** This repository respects the terms of the original book's license. Please consult the book's official repository or publication for more details.


## Exercise [Implement a basic calculator supporting +,−,∗,/]
###  Estrategia de solución 
La estrategia para resolver este ejercicio se basó casi por completo en el uso de un bucle `while`. En este caso, la modularidad fue clave para lograr una solución, ya que al saber los argumentos de las funciones que se encuentran en el archivo operaciones.cpp se logra llevar a cabo una solución mas eficiente con los argumentos de entrada y salida.
### Explicación paso a paso de la solución

1. **Paso 1:** Se definen las funciones en el archivo operaciones.h
2. **Paso 2:** Se implementan las funciones en el archivo operaciones.cpp
3. **Paso 3:** Implementar las funciones con la experiencia de usuario (mediante consola).

---
## Exercise [Movie ticket reservation system]
###  Estrategia de solución 
Este ejercicio se caracterizó por el uso de una matriz bidimensional que hizo mucho más facil la implementación, se imprimir la matriz con un  "[ ]" si el asiento está vacio, si está ocupado imprime "[X]". Posteriormente hace la validación de: 
1. Si el asiento está fuera de la matriz (asiento inexistente).
2. Si el asiento está ocupado.
Después está la función `void bucleReservas()` la cual hace que el programa siga en un bucle para guardar asientos.
Como implementación adicional, está la función `void guardarReservasCSV`, la cual genera un archivo .CSV con las filas y columnas separadas por coma, esta función se implementó plenamente con la implementación realizada por el maestro Andres Ducuara durante una clase.
Finalmente, se realizó la implementación del código en el archivo `main.cpp`
---
