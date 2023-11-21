// Consiste en dividir el vector en una parte ordenada y otra desordenada
// Voy a ir insertando los elementos desordenados ordenadamente, en la parte ordenada del vector
// Si separo un solo elemento, tengo un vector ordenado

// Basicamente uso la insercion ordenada para agregar los elementos de la parte desordenada en la parte ordenada

//  [1,  |5, 2, 8, 4 3]
//       ^ aca empieza la parte desordenada

/*
    La parte ordenada seria [1]

    Muevo la 'marca'=

    [1, 5, |2, 8, 4, 3]
        ^ Sigue estando ordenado, muevo la marca.
    
    [1, 5, 2, |8, 4, 3]
           ^ El 2 no esta ordenado pues es menor que su anterior 5
    Entonces lo inserto ordenadamente(Ver notas de insercion ordenada):
    Muevo la marca:

    [1, 2, 5, 8, |4, 3]
    [1, 2, 5, 8, 4, |3]
    [1, 2, 4, 5, 8, 3]
    inserto el ultimo y listo:
    [1, 2, 3, 4, 5, 8]



*/