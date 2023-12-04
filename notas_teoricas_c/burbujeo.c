// Vamos a empujar el mayor o menor "Hacia arriba" como una burbuja
// Cuando el elemento se encuentra con un valor mayor, se queda ahi y el valor
// mayor comienza a subir.

/*

[9, 5, 7, 1, 10, 8]

No se cual sera el mas grnde pero tomare el primero

[9, 5, 7, 1, 10, 8]
 ^  ^ lo comparo con el 5, como es mas grande lo "empujo" hacia adelante intercambiando con el 5

[5, 9, 7, 1, 10, 8]
    ^  ^ lo sigo comparando y empujo intercambiando cada vez que este 9 sea mayor que el siguiente
[5, 7, 1, 9, 10, 8]
          ^   ^   El 9 es menor que el 10, se encontro con una burbuja mas grande
                  entonces ahora burbujeo el 10
[5, 7, 1, 9, 10, 8]
              ^  ^  Comparo y sube el 10
              
[5, 7, 1, 9, 8, 10]

otra vez desde el principio y hasta que no queden mas sin ordenar:

[5, 7, 1, 9, 8, 10]
 ^  ^ ahora el 7 > 5 Tomo el 7
[5, 7, 1, 9, 8, 10]
    ^  ^   sube el 7

[5, 1, 7, 9, 8, 10]
       ^  ^  9 > 7 sube el 9 entonces. como 9 > 8 sube.

[5, 1, 7, 8, 9, 10] Listo llegue al 10 > 9

[5, 1, 7, 8, 9, 10] 
 ^  ^  Tomo el 5 y sube

[1, 5, 7, 8, 9, 10] como 5 < 7 y 7 no puede subir mas, listo :)

    En cada iteracion, solo accedo a la parte desordenada del vector.
    
*/ 