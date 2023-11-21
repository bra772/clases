import sys

FERTILIZANTES_DEFECTO = 9

# Busca en los argumentos que el usuario escribio en la terminal, la palabra --fertilizantes
# Si la encuantra busca que el siguiente argumento exista y sea un numero
# Si es un numero, entonces de vuelve la cantidad de fertilizantes que el usuario quiere usar

def fertilizantes_parametro(argumentos: list[str]):
    if "--fertilizantes" not in argumentos:
        return FERTILIZANTES_DEFECTO
    
    indice_fertilizantes = argumentos.index("--fertilizantes")

    if indice_fertilizantes + 1 >= len(argumentos):
        return FERTILIZANTES_DEFECTO
    
    n = argumentos[indice_fertilizantes + 1]
    if n.isnumeric():
        numero = int(n)
    else: 
        numero = FERTILIZANTES_DEFECTO
    
    return numero

    
         


def inicializar_personaje(cantidad_fertilizantes):
    return None

def main():
    fertilizantes = fertilizantes_parametro(sys.argv) #sys.argv: "Lo enviado a la terminal" echo una lista
    print(fertilizantes)

#El .argv hace que lo comandos puestos en la terminal, sean una lista
# sys serian los comandos en la terminal

# .argv lo usa el manual, y python para saber que ejecutar y que buscar
# Es muy potente, ya que puedo parametriza el programa sin cambiar el codigo
# con sys.argv tomo esos datos :)


if __name__ == '__main__':
    main()