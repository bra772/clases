# Comentario
# INDENTANCION OBLIGATORIA
# Operadores logicos: and , or, not.
# Operadores: == != > < >= <= /     -= += /= ---> Como en C
#  // --> Division entera % --> Resto   ** ---> Potencia

# No puedo multiplicar ni restar strings

# Estructuras condicionales

numero = 0
nombre = 'Panchita'

if numero == 0 and nombre == 'Panchita':
    #codigo
    numero = 8
elif numero == 5 and nombre != 'Panchita':
    #codigo
    numero = 0
else:
    #codigo
    numero = 1

# Estructuras iterativas

while numero > 0:
    numero -= 1

for i in range(10): #Es igual que range(0, 10)
    print(i, end="")

for i in range(0, 5):
    print(i)

# Fuciones 
# IMPORTANTE: una funcion puede devolver mas de una cosa
nombre = 'Panchita'

def saludo(nombre):
    print("Hola " + nombre)

def suma(a, b):
    return a + b

saludo(nombre)
# Guardar respuesta del usuario

respuesta = input('Cual es tu respuesta?')

# Casteo

respuesta = '4'

int(respuesta) #Devuelve el string casteado como un entero

# Saber que la variable es un numero

respuesta.isnumeric() #True

# Constantes: No hay en python, pero usamos una convencion
#si esta en mayusculas, es una constante y no la cambiamos

NOMBRE_PERRO = 'Panchita'

# "Emular" un main:


if __name__ == "__main__":
    print("Hola mundo")