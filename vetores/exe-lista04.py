
#Construa um programa onde o usuário digitará dez números inteiros para preencher um
#vetor. Em seguida, o programa deve percorrer o vetor e substituir todos os números
#negativos por zero, exibindo o vetor final na tela.
numeros = []

for i in range (0 , 3): 
  numero = int(input("Digite um numero"))
  numeros.append(numero)


for numero in numeros:
    if (numero < 0):
        numeroNeg = numeros.index(numero)
        numeros.remove(numero)
        numero = 0
        numeros.insert(numeroNeg, numero)

print (numeros)

