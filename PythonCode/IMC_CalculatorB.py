#Universidad del Valle de Guatemala


def IMC_Calculator():
    print("Ingresar peso en KG:")
    peso = float(input())
    print("Ingresar estatura en metros:")
    estatura = float(input())

    IMC = peso/(estatura**2)
    print("Su IMC es de: ")
    print(IMC)
    
    
def IMC_Rango(IMC):
    print("Su rango de IMC es de:")
    if IMC < 18.5:
        print("Peso insuficiente")

    elif IMC < 24.9 and IMC > 18.5:
        print("Peso normal o saludable")

    elif IMC < 29.9 and IMC > 25.0:
        print("Rango de sobrepeso")

    elif IMC >= 30.0:
        print("Rango de obesidad")
        

