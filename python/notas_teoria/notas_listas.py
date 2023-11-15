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

