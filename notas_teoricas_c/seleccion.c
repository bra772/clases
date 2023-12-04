// Consiste en busca un valor minimo o maximo en el vector
// Este se encuentra comparando un minimo elegido (Comenzando con el el primer elemento desordenado, com si fuera un pivote)
// con cada uno de los demas elementos, cambiando el minimo cuando encuentre una carta menor

// Cuando se termina de comparar este minimo, no quedara la carta mas chica guardada
// esta la intercambiaremos de lugar con el pivote.
// se continua con el siguiente elemento desordenado

/*   
    Ejemplo:
        [5, 1, 0, 3, 6, 10, 2]

    Comienzo con el primer elemento como pivote :
            [1] --> lo comparo con el 5 y como es menor, lo reservo como minimo.
        [ ,   , 0, 3, 6, 10, 2]
         5 -> pivote, elemento seleccionado

    Comparo el minimo reservado[1] con los siguientes valores, si encuentro uno menor ese sera mi nuevo minimo
    como 0 < 1, 0 es el nuevo minimo
              [0] --> nuevo minimo
        [ , 1,  , 3, 6, 10, 2]
         [5] -> pivote, elemento seleccionado
    
    Ahora no encuentro elemento mas chico que el 0, entonces lo intercambio con el pivote asi:

        [0| , 1,  5, 3, 6, 10, 2]
         ^ esta parte esta ordenada
    Vamos de nuevo:
        [0| , ,  5, 3, 6, 10, 2]
            [1] -> pivote
    Ningun elemto es menor a 1 entonces lo dejo como esta.
    y tomo otro pivote:
                      [3] -> minimo  
        [0 , 1|,    ,   , 6, 10, 2]
                  [5] -> pivote
                              [2] --> minimo
        [0 , 1|,  , 3, 6, 10,   ]
                 [5]
    Intercambio de lugares el minimo con el elemento seleccionado:

        [0 , 1 , 2|, , 6, 10, 5]
                    3 --> elemento seleccionado
                                [5] --> MINIMO
        [0 , 1 , 2, 3|,    , 10,  ]
                        [6] --> ELEMETO SELECCIONADO
            [6] <--> [5]
                                [6] --> MINIMO
        [0 , 1 , 2, 3, 5|,     ,  ]
                            [10] --> ELEMENTO SELECCIONADO

           [10] <--> [6]                     
        [0 , 1 , 2, 3, 5, 6 , 10] Listo :)

*/