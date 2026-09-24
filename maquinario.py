#Um sistema de controle de maquinário pesado deve autorizar a operação
#com base em: cargo (string: "operador" ou "supervisor"), hora_atual (inteiro
#de 0 a 23) e chave_emergencia (booleano).

#  O acesso deve ser concedido se:
#◆ A chave_emergencia estiver ativa (True), independentemente de
#qualquer outra variável; OU
#◆ O usuário for "supervisor"; OU
#◆ O usuário for "operador" E a hora_atual estiver entre 8 e 17 (inclusive).
#◆ Caso contrário, o sistema deve exibir "Acesso Bloqueado".

#com base em: cargo (string: "operador" ou "supervisor")

cargo = input("Digite Seu Cargo")
list_cargo = ["operador", "Supervisor"]
hora = int (input("Digite o horario"));
chave_emergencia = input("A chave está ativa?")

for i in list_cargo:
    if cargo == i:
        if (cargo == "Supervisor" ) or chave_emergencia == "1" or 8 < hora <=17:
         print("Acesso Liberado") 

        else:
           print("Acesso Negado")
          


   