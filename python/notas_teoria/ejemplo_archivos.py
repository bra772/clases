import csv
import os

# USEN CONSTANTES

def imprimir_mayor_ingreso():
    try:
        archivo = open("monedero.csv")
    except:
        # Si no pudo abrir el archivo
        print("No se pudo abrir el archivo")
        return

    lector = csv.reader(archivo, delimiter = ";")

    valor_max = -1
    detalle = ""
    for fila in lector:
        if fila[1] == "entrada":
            if int(fila[0]) > valor_max:
                valor_max = int(fila[0])
                detalle = fila[2]

    archivo.close()
    print(detalle)


def agregar_operacion(tipo: str, precio: int, detalle: str):
    try:
        archivo = open("monedero.csv", "a")
    except:
        print("No se pudo abrir el archivo")
        return

    escritor = csv.writer(archivo, delimiter = ";")

    escritor.writerow([precio, tipo, detalle])

    archivo.close()


def agregar_pago(precio: int, detalle: str):
    agregar_operacion("salida", precio, detalle)


def agregar_ingreso(precio: int, detalle: str):
    agregar_operacion("entrada", precio, detalle)


# Si existe un archivo aux.csv, se va a eliminar
def corregir_nombre_stitch():
    try:
        archivo_original = open("monedero.csv")
    except:
        print("No se pudo abrir el archivo")
        return

    try:
        archivo_aux = open("aux.csv", "w")
    except:
        archivo_original.close()
        print("No se pudo crear un archivo auxiliar")
        return

    lector = csv.reader(archivo_original, delimiter = ";")
    escritor = csv.writer(archivo_aux, delimiter = ";")

    for fila in lector:
        if fila[2] == "pago stish":
            fila[2] = "pago Stitch"
        # Las 2 líneas de arriba se pueden reemplazar con la siguiente:
        # fila[2] = fila[2].replace("stish", "Stitch")
        escritor.writerow(fila)

    archivo_original.close()
    archivo_aux.close()

    os.rename("aux.csv", "monedero.csv")


def eliminar_gasto_caramelos():
    try:
        archivo_original = open("monedero.csv")
    except:
        print("No se puede abrir el archivo")
        return

    try:
        archivo_aux = open("aux.csv", "w")
    except:
        archivo_original.close()
        print("No se pudo crear un archivo auxiliar")
        return

    for linea in archivo_original:
        if linea.strip().split(";")[2] != "compra caramelos":
            archivo_aux.write(linea)

    archivo_original.close()
    archivo_aux.close()

    os.rename("aux.csv", "monedero.csv")


def main():
    imprimir_mayor_ingreso()
    agregar_pago(15600, "Pago de tarjeta")
    corregir_nombre_stitch()
    eliminar_gasto_caramelos()


if __name__ == "__main__":
    main()
