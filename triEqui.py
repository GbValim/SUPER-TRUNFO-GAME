numero1 =  float(input("primeiro numero"))
numero2 =  float(input("segundo numero"))
numero3 =  float(input("terceiro numero"))
soma = numero1 + numero2 

if  soma > numero3: 
    (print("A soma é maior que o terceiro lado\n"))


     
     #Equilátero: possui 3 lados iguais
    if (numero1 == numero2 and numero3): 
        print("É equilatero\n")


    #Isósceles: possui 2 lados iguais e 1 lado diferente
    elif (numero1 and numero2 != numero3)\
      or (numero2 and numero1 != numero3)\
      or(numero3 and numero2 != numero3):
        print("isósceles\n")


     #Escaleno: possui 3 lados diferentes 
    else:
        print("Escaleno\n")

else:
    print("Erro!!") 