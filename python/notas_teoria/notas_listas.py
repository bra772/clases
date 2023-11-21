# Listas en python
# No es necesario darles un tamaño

#declaro:
#[] --> Vector vacio

vector = [1, 2, 3, 4]

vector_vacio = []

fibonacci = [1, 1, 2, 3, 5, 8, 13]

#tomar solo los dos primeros numeros:
#iria desde el principio hasta el 1, sin incluir el indice 2:

fibonacci[:2]
#desde el indice 2 hasta el final (si incluye el indice 2):

fibonacci[2:]

# El indice puesto antes cuenta pero el indice siguiente del : no

# Iterar:
#for i in range(inicio, fin, pasos):
    #codigo

#fibonacci[inicio:fin:pasos]

# "Recorrerlo" alrevez

fibonacci[::-1] #-1 pasos :)

# No necesitamos el tope, python ya sabe cuantos elementos tiene

# Esta forma de "recorrer el vector", crean una copia, no modifican el vector original

len(fibonacci) # Devuelve el tamaño de ese vector, tambien sirve para un string

# Recorrer un vector

for numero in fibonacci:
    print(numero)

# No cree ningun i, por cada iteracion se va agregando el elemento del vector a numero :)
# No usar la variable numero fuera del ciclo

# Sumar vectores

fibonacci + vector

# Buscar elemento en vector

buscado = 7

buscado in fibonacci #False
# Muy facil :)

# Agregar elemento al vector, agrega al final, modifica la lista original

fibonacci.append(21)

# Agregar en posicion especifica
indice = 6
elemento = 10

fibonacci.insert(indice, elemento)

# Eliminar elemento, mantiene el orden, elimina el primer elemento que tenga ese valor
# Si el valor no esta presente tira error

fibonacci.remove(elemento)

# Eliminar el elemento en la posicion, tambien devuelve el valor

fibonacci.pop(indice) #devuelve 10 y elimina el valor en el indice 6

# Dejar el vector vacio

numeros = [0, 5, 6, 7]
numeros.clear # numeros = []

# Saber el indice de un elemento, sino existe tira error

fibonacci.index(5) #4
fibonacci.index(13) #6

# Contar cuantos hay de ese valor de elemento

fibonacci.count(1) #2
fibonacci.count(5) #1

# Dar vuelta un vector

fibonacci.reverse()
fibonacci.reverse()

# Ordenar un vector :O

fibonacci.sort()
#fibonacci.sort(reverse = True) lo ordena de mayor a menor
# Puedo usar el sort en el tp3, pero recordar que el ordenamiento es algo "costoso", no usarlo mucho

# Todos estos metodos modifican el vector original

# Armar una lista con un string, cada espacio separa un elemento de otro

saludo = "Hola mundo que hermoso dia"

saludo.split() #El corte por defecto es un espacio en blanco


