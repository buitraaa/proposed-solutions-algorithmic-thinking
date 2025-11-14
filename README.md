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
---
## Exercise: [Decimal a binario]
### Estrategia de solución
Primero, buscamos la manera de pasar un decimal a binario, la cual se puede resumir como dividir el número sucesivamente entre 2, anotando cada residuo, hasta que el cociente sea 0. Luego, se leen los residuos de abajo hacia arriba para formar el número binario. Asi podemos hacer una implementación calculando el residuo de cada división hasta que dé 0, luego, se imprime.

---
## Exercise: [Generar un número aleatorio del 1-100]
### Estrategia de solución
Importamos dos librerías, para escoger un número, y para tener un manejo del tiempo. Al tener de entrada un tiempo actual, nos aseguramos de que sea al azar. Utilizamos la función para determinar el número y le sumamos uno para que se genere entre 1-100 y no entre 0-99.

---
## Exercise: [Find the GCD and LCM of three numbers]
### Estrategia de solución
Para resolver el ejercicio dividí el programa en partes usando funciones y archivos separados. Primero se creó una función para calcular el MCD mediante restas sucesivas, restando el número menor al mayor hasta que ambos fueran iguales; ese resultado es el MCD. Luego hice otra función para el MCM aprovechando la relación entre ambos valores, multiplicando los dos números y dividiendo por su MCD. Las funciones se declararon en un archivo .h y se implementaron en un .cpp para mantener el código organizado. Finalmente, en el programa principal pedí los números al usuario, llamé las funciones y mostré los resultados, aplicando estructuras básicas como condicionales y ciclos.

---
## Exercise: [Calcular el area de triangulo]
### Estrategia de solución
Utilizamos la sugerencia de la formula de Heron, pedimos 3 inputs y calculamos con la funcion sqrt de <cmath> el area total.

---
## Exercise: [Solve a quadratic equation]
### Estrategia de solución
Se creó una función que recibe los valores de a, b y c, calcula el discriminante y, según su valor, determina cuántas soluciones reales existen. Si el discriminante es positivo, la función calcula dos raíces; si es cero, una sola; y si es negativo, informa que no hay soluciones reales. 

---
## Exercise: [Implement the collatz conjecture]
### Estrategia de solución
Se hizo un bucle de validacion de pares e impares para aplicar los pasos de la conjetura.

---
## Exercise: [Calculate volume of a sphere]
### Estrategia de solución
Se hizo una implementación sencilla que pide el radio de la esfera y calcula el volumen.

---
## Exercise: [Euler’s number estimation]
### Estrategia de solución
Se dividió en módulos, creando una función que recibe la cantidad de términos a usar en la serie. Dentro de ella se inició el valor de e en 1 y se usó un ciclo for para calcular los factoriales sucesivos, sumando el inverso de cada uno a la aproximación. De esa forma, mientras más términos se usan, más precisa es la estimación. En el programa principal pedí al usuario el número de términos, validé que fuera no negativo y mostré el resultado calculado por la función.

---
## Exercise: [Determine if a number is perfect, abundant, or a triangular number. ]
### Estrategia de solución
Se dividió en funciones para identificar cada tipo de número. En una función se sumó los divisores propios para verificar si el número era perfecto o abundante, comparando esa suma con el valor original. En otra, se usó una suma acumulada que avanza de uno en uno hasta igualar o superar el número, determinando si era triangular. Luego, en el programa principal pedí el número al usuario y llamé las funciones, mostrando los resultados según las condiciones cumplidas.

---
## Exercise: [ Determine if a number is a Fibonacci, Kaprekar, Narcissistic, or Mersenne number.]
### Estrategia de solución
Se separó el problema en cuatro tipos de comprobaciones diferentes, una por cada categoría numérica. Para determinar si un número era Fibonacci, se generó la secuencia sumando los dos valores anteriores hasta alcanzar o pasar el número dado. En el caso de Kaprekar, se razonó que al elevar un número al cuadrado, si al dividirlo en dos partes la suma de esas mitades daba el número original, entonces pertenecía a esa clase. Para identificar un número narcisista, se consideró la idea de que cada dígito, elevado a la cantidad total de dígitos, debía sumar exactamente el número mismo. Finalmente, para los números de Mersenne se analizó si podían expresarse como una potencia de dos menos uno, lo que implicaba verificar esa relación de forma sucesiva.

---
## Exercise: [Leibniz]
### Estrategia de solución
Para implementarla:
  Se separó la lógica en una función llamada estimarpi, que recibe la cantidad de términos a usar.
  Dentro de la función, se suma cada término positivo y negativo alternando el signo con (-1)^i (o usando una condición con % 2).
  Al final, se multiplica la suma por 4, porque la fórmula de Leibniz así lo define.

En el main, solo se pide al usuario cuántos términos usar y se llama la función para mostrar la aproximación.
Mientras más términos se suman, más se acerca el resultado a π.

---
## Exercise: [Newtons square]
### Estrategia de solución
Se separó el problema en dos funciones: una para la raíz cuadrada y otra para la cúbica. En ambas se aplicó el método de Newton-Raphson, que parte de una estimación inicial y la mejora repetidamente usando una fórmula que aproxima el resultado real. Para la raíz cuadrada se promedia el valor actual con el cociente del número entre ese valor, y para la cúbica se ajusta con una fórmula similar pero adaptada a la potencia tres. El ciclo se repite hasta que la diferencia entre aproximaciones es mínima, logrando una raíz precisa.

---
## Exercise: [Binomial theorem]
### Estrategia de solución
En la primera parte se usó una función que calcula los coeficientes binomiales mediante multiplicaciones y divisiones sucesivas, y otra que usa esos coeficientes para expandir ((a + b)^n) término a término. En la segunda se aplicó la fórmula de Stirling, que aproxima el factorial de un número grande usando raíces, potencias y la constante (e). Así, el programa permite elegir entre mostrar la expansión binomial o la estimación factorial.

---
## Exercise: [Taylor sequence]
### Estrategia de solución
Se creó una funcion que aplica la serie de Taylor para el logaritmo natural de 1 mas x. La expansion es x menos x al cuadrado sobre 2 mas x al cubo sobre 3 y asi sucesivamente alternando los signos. En la funcion se suman esos terminos usando potencias y divisiones hasta la cantidad de terminos que el usuario indique. El programa principal pide el valor de x, verifica que sea mayor que menos uno para que la serie converja, y luego muestra la aproximacion del logaritmo calculada por la funcion.

---
## Exercise: [Fibonacci, lucas and Padovan sequences]
### Estrategia de solución
Se usa un menú con switch para escoger la secuencia y un do-while para repetir hasta salir; cada secuencia se genera iterativamente con arreglos y casos base: Fibonacci F0=0, F1=1, Lucas L0=2, L1=1 y Padovan P0=P1=P2=1 con Pn=Pn-2+Pn-3; se emplean funciones modulares para calcular y para imprimir, y una matriz n×3 para la opción que llena las tres secuencias a la vez.

---
## Exercise: [Determine if it's arithmetic or geometric]
### Estrategia de solución
El programa recibe una cantidad de números, los guarda en un arreglo y verifica si la diferencia o la razón entre términos consecutivos es constante; si lo es, determina si la secuencia es aritmética o geométrica respectivamente, o ninguna si no cumple ninguna condición.

---
## Exercise: [Sum of squares of the first N]
### Estrategia de solución
El programa pide un número N, genera los primeros N números impares usando un contador y una variable que aumenta de 2 en 2, eleva cada impar al cuadrado y acumula la suma hasta completar N repeticiones.

---
---
## Exercise: [Print a pyramid pattern of asterisks]
### Estrategia de solución
El programa usa dos bucles `for` anidados para imprimir una pirámide de 5 filas. El primer bucle controla las filas, el segundo imprime espacios y el tercero imprime los asteriscos necesarios para formar cada nivel de la figura.

---
## Exercise: [Print right-aligned, inverted, and square patterns]
### Estrategia de solución
Cada función imprime un patrón distinto de asteriscos: el primero forma una pirámide alineada a la derecha, el segundo una versión invertida y el tercero un bloque cuadrado. Los bucles for controlan filas y columnas, alternando espacios y asteriscos según el tipo de figura.

---
## Exercise: [Print a hollow rectangle of size N ×M. ]
### Estrategia de solución
El programa pide las dimensiones N y M y usa dos bucles for anidados: el exterior controla las filas y el interior las columnas. Imprime asteriscos solo en los bordes del rectángulo y espacios en el interior, formando un rectángulo hueco.

---
## Exercise: [ Print an asterisk chessboard with * and +. ]
### Estrategia de solución
Se recogen filas y columnas, y con dos bucles for anidados se imprime * o + según la paridad de la suma de índices para alternar las casillas.

---
## Exercise: [ Print a zig-zag number pattern]
### Estrategia de solución
El programa imprime una cuadrícula de números donde las filas impares van en orden ascendente y las pares en orden descendente, creando un recorrido visual en forma de zig-zag al alternar la dirección en cada fila.

---
---
## Exercise: [ Simulate a dice roll]
### Estrategia de solución
El programa pide cuántas veces lanzar el dado, usa una semilla aleatoria con srand(time(0)), genera números del 1 al 6 con rand() % 6, y muestra el resultado de cada lanzamiento.

--
## Exercise: [Simulate rock paper scissors]
### Estrategia de solución
El programa pide una opción al jugador, elige otra al azar para la computadora con rand() % 3, y determina el resultado comparando ambas elecciones mediante condiciones if y un switch para mostrar la jugada del oponente.

--
## Exercise: [Number guessing game (1-20)]
### Estrategia de solución
El programa genera un número aleatorio entre 1 y 20 y pide al usuario que adivine. Usa un bucle while para repetir intentos hasta acertar, mostrando si cada intento es mayor o menor que el número secreto.

--
## Exercise: [Generate Pythagorean triplets. ]
### Estrategia de solución
La función recorre todas las combinaciones de valores entre 1 y N usando tres bucles y verifica con una condición si cumplen a² + b² = c²; cuando la igualdad se cumple imprime la terna pitagórica correspondiente.

--
## Exercise: [ Random number generator using uniform or normal distribution]
### Estrategia de solución
La función uniforme convierte valores de rand() en números entre 0 y 1; la función normal usa dos números uniformes y aplica la transformación Box–Muller para obtener valores con distribución normal estándar.

