#Clase del 9/11
#Ejercicio: hacer una funcion que pregunte al usuario cuantas medialunas quiere y de que tipo

GRASA = 'G'
MANTECA = 'M'
    
def preguntarMedialuna():
    cantidad = int(input(f"Cuantas medialunas queres?"))
    tipo = input(f"Queres tus medialunas de Gasa ({GRASA}) o Manteca ({MANTECA})")

    while tipo != GRASA and tipo != MANTECA:
        tipo = input(f"Queres tus medialunas de Gasa ({GRASA}) o Manteca ({MANTECA})")

    return cantidad, tipo

if __name__ == "__main__":
    #IMPORTANTE el orden, pero puedo ponerle cualquier nombre.
    cantidad, tipo = preguntarMedialuna()
    print(f"Entonces son {str(cantidad)} medialunas de: {tipo}")