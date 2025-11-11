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
## Exercise: [Movie Ticket Reservation System]
### Estrategia de solución
Este ejercicio se caracterizó por el uso de una **matriz bidimensional**, lo cual facilitó la implementación.  
El sistema imprime la matriz con un `[ ]` si el asiento está vacío y con un `[X]` si está ocupado.
Posteriormente, se realiza la validación de:
1. Si el asiento está fuera de la matriz (asiento inexistente).
2. Si el asiento está ocupado.
La función `void bucleReservas()` permite que el programa se mantenga en un bucle para seguir reservando asientos.
Como implementación adicional, se desarrolló la función `void guardarReservasCSV()`, la cual genera un archivo `.csv` con las filas y columnas separadas por comas.  
Esta función se implementó siguiendo la explicación del profesor **Andrés Ducuara** durante una clase.
Finalmente, toda la lógica fue integrada en el archivo `main.cpp`.
---
## Exercise: [Student grade management system]
### Estrategia de solución

Se usó un bucle para mantener haciendo una suma de notas basado en el input de notas que previamente el usuario dá. Finalmente se hace el cálculo y se imprime en consola.

---
## Exercise: [Currency converter]
### Estrategia de solución
El programa convierte de 4 posibles monedas (COP, USD, GBP, EUR). Se utilizó un menú para poder preguntar desde qué moneda se desea convertir.
También se utilizó la libreria `iomanip`, la cual pasa los grandes números de notación científica a enteros.

---

## Exercise: [User authenticaction system]
### Estrategia de solución

La solución consiste en diseñar un sistema que permita a una persona crear una cuenta y luego iniciar sesión con su usuario y contraseña. Para lograrlo, se guarda la información en un archivo que funciona como una lista de usuarios registrados. Cuando alguien intenta ingresar, el sistema revisa si los datos coinciden con los que ya están guardados

---

## Exercise: [Expression evaluator]
### Estrategia de solución

El programa resuelve expresiones matemáticas simples sin paréntesis respetando la prioridad de operaciones. Primero, separa los números y operadores del texto ingresado por el usuario, almacenándolos en arreglos distintos. Luego, evalúa las operaciones de mayor prioridad (multiplicación y división) modificando los arreglos para eliminar los elementos ya procesados. Finalmente, aplica las operaciones restantes (suma y resta) en orden, obteniendo así el resultado final que se muestra al usuario.

---

## Exercise: [Voting system with automatic counting]
### Estrategia de solución
Se hizo un bucle que siga el número de veces que el usuario defina. Adicionalmente, se suma un voto cada vez que una persona decide votar por uno de los candidatos.

---

## Exercise: [Game score tracking system]
### Estrategia de solución
Se construyó un programa que permite registrar jugadores, asignarles puntajes en varios juegos y mostrar esos datos en pantalla. Para mantener el código organizado, se separaron las funciones en archivos distintos, y se tuvo que usar punteros para actualizar el número total de jugadores desde otras funciones.

---

## Exercise: [Calorie and BMI calculator]
### Estrategia de solución
Para solucionar este ejercicio, utilizamos principalmente dos formulas:
1. **Formula 1:** La fórmula BMI la cual dice qué: bmi = peso / (altura * altura)
2. **Formula 2:** Debido a que obtener el índice de calorías apróximado de una persona sin tener un registro de su alimentación es complicado, se utilizó la formula Harris-Benedict, la cual es la siguiente: TMB = 88.362 + (13.397 × weight in kg) + (4.799 × height in cm) - (5.677 × age in years).

Finalmente, solo se llaman las funciones en el `main.cpp` y se piden los datos del usuario.

---


