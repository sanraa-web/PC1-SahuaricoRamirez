Problema asignado:
Evaluate Reverse Polish Notation

Especificación:
Dado un vector de strings que representa una expresión en notación polaca inversa (RPN), se debe evaluar y devolver el resultado entero.

Entrada:
vector<string> tokens con números y operadores (+, -, *, /)

Salida:
Un entero con el resultado de la expresión

Tamaño de entrada:
n = numero de tokens

Descripción de la solución:
Se usa una pila (stack). 
Si el token es numero, se inserta en la pila.
Si es operador, se sacan dos elementos, se aplica la operación y se guarda el resultado.
Al final, la cima de la pila es el resultado.

Determinismo:
Para la misma entrada, siempre produce la misma salida.

Factibilidad:
Las operaciones son simples (push, pop, operaciones aritméticas), por lo que el algoritmo es ejecutable.

Finitud:
Se recorre el vector una sola vez, por lo tanto termina.

Correctitud:
La pila mantiene resultados parciales correctos en cada paso de la evaluación.

Invariante:
La pila contiene resultados correctos de sobrexpresiones ya evaluadas.

Complejidad temporal:
O(n)

Complejidad espacial:
O(n)

Mejor caso:
O(n)

Peor caso:
O(n)

Caso promedio:
O(n)

Jerarquía:
O(n)

Alternativa ingenua:
Convertir la expresión a notación infija y luego evaluarla, lo cual es menos eficiente.

Robustez:
Se detectan errores como división por cero y expresiones invalidas.

Casos borde:
- Un solo numero
- Números negativos
- División entera
- División por cero
- Expresión invalida

Reutilización:
La función evalRPN esta separada y puede reutilizarse.

ADT utilizado:
Stack (pila)

Pruebas:
Se usaron assert para probar:
- casos normales
- operaciones
- negativos
- casos complejos
- errores

Observación:
Se usa vector y string de STL.
