
#Universidad del Valle de Guatemala
from Ejercicio1b import IMC_Calculator, IMC_Rango

opcion = 999

while opcion != 3:
    print("Bienvenido:")
    print("1. Calcular IMC")
    print("2. Ver mi rango")
    print("3. Salir")
    opcion = int(input())

    if opcion == 1:
        IMC_Calculator()
        
    elif opcion == 2:
        print("Ingrese su IMC:")
        IMC = float(input())
        IMC_Rango(IMC)
            

