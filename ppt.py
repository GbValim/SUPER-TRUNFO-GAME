escolha = input("Escolha o que vai jogar: ")
escolha2 = input("Escolha o que outro vai jogar: ")
if escolha == "Pedra" and escolha2 == "Tesoura":
    print("o 1 ganhou")
elif escolha == "Tesoura" and escolha2 == "Papel":
    print("o 1 ganhou")
elif escolha == "Papel" and escolha2 == "Pedra":
    print("o 1 ganhou")
elif escolha2 == "Pedra" and escolha == "Tesoura":
    print("o 2 ganhou")
elif escolha2 == "Tesoura" and escolha == "Papel":
    print("o 2 ganhou")
elif escolha2 == "Papel" and escolha == "Pedra":
    print("o 2 ganhou")
elif escolha2 == "Pedra" and escolha == "Pedra":
    print("empate")
elif escolha2 == "Tesoura" and escolha == "Tesoura":
    print("empate")
elif escolha2 == "Papel" and escolha == "Papel":
    print("empate")