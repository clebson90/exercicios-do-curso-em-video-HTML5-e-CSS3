#72-
cont = ("Zero", "Um", "Dois", "Três", "Quatro", 
    "Cinco", "Seis", "Sete", "Oito", "Nove", 
    "Dez", "Onze", "Doze", "Treze", "Quatorze", 
    "Quinze", "Dezesseis", "Dezessete", "Dezoito", "Dezenove", "Vinte")
while True:
    n = int(input("Digite um número entre 0 e 20: "))
    if n >= 0 and n <= 20:
        print(f"Você digitou o número {cont[n]}")
        condicao = " "
        while condicao not in "SN":
            condicao = input("Quer continuar? S/N ").strip().upper()[0]
        if condicao == "N":
            break
print("FIM DO PROGRAMA")

#73-
times_brasileirao = ("Palmeiras","Flamengo","Fluminense","Athletico-PR","Red Bull Bragantino","Bahia","Coritiba","São Paulo","Atlético-MG",
    "Corinthians","Cruzeiro","Botafogo","Vitória","Internacional","Santos","Grêmio","Vasco da Gama","Remo","Mirassol","Chapecoense")
print(f"Lista de times do Brasileirão: {times_brasileirao}")
print(f"Os 5 primeiros são: {times_brasileirao[0:5]}")
print(f"Os 4 últimos são {times_brasileirao[-4:]}")
print(f"Times em ordem alfabética: {sorted(times_brasileirao)}")
print(f"O Chapecoense está na {times_brasileirao.index("Chapecoense")+1}º posição")

#74-
from random import randint
sorteio = (randint(0 , 5) , randint(0 , 5) , randint(0 , 5) , randint(0 , 5) , randint(0 , 5))
print(f"Os valores sorteados foram: {sorteio}")
print(f"O maior valor sorteado foi {max(sorteio)}")
print(f"O menor valor sorteado foi {min(sorteio)}")

#75-
num = (int(input("Digite um número: ")) , int(input("Digite um número: ")) , 
       int(input("Digite um número: ")) , int(input("Digite um número: ")))
print(f"Você digitou os valores {num}")
print(f"O valor 9 apareceu {num.count(9)} vezes")
print(f"O valor 3 apareceu na {num.index(3)}ª posição")

#76-
listagem = ('Lápis', 1.75,'Borracha', 2.00,'Caderno', 15.90,'Estojo', 25.00,'Transferidor', 4.20,
            'Compasso', 9.99,'Mochila', 120.32,'Canetas', 22.30,'Livro', 34.90)
print('-' * 40)
print(f'{"LISTAGEM DE PREÇOS":^40}')
print('-' * 40)
for pos in range(0, len(listagem)):
    if pos % 2 == 0:
        print(f'{listagem[pos]:.<30}', end='')
    else:
        print(f'R${listagem[pos]:>7.2f}')
print('-' * 40)

#77-
palavras = ('aprender', 'programar', 'linguagem', 'python', 
            'curso', 'gratis', 'estudar', 'praticar', 
            'trabalhar', 'mercado', 'programador', 'futuro')
for p in palavras:
    print(f'\nNa palavra {p.upper()} temos ', end='')
    for letra in p:
        if letra.lower() in 'aeiou':
            print(f'{letra}', end=' ')

#78-
n = []
for c in range (0 , 5):
    n.append(int(input(f"Digite um valor para a posição {c}: ")))
print(f"Você digitou os valores {n}")
print(f"O maior valor digitado foi {max(n)} na posição" , end = " ")
for i , v in enumerate(n):
    if v == max(n):
        print(f"{i}..." , end = " ")
print()
print(f"O menor valor digitado foi {min(n)} na posição" , end = " ")
for i , v in enumerate(n):
    if v == min(n):
        print(f"{i}..." , end = " ")

#79-
num = []
while True:
    n = int(input("Digite um número! "))
    if n not in num:
        num.append(n)
    else:
        print("Não vou adicionar número já existe na lista")
    condicao = " "
    while condicao not in "NS":
        condicao = input("Quer continuar? [S/N] ").strip().upper()[0]
    if condicao == "N":
        break
num.sort()
print(num)

#80-
num = []
for c in range(0 , 5):
    n = int(input("Digite um número! "))
    if c == 0:
        num.append(n)
        print("Adicionado ao final da lista...")
    elif n > max(num):
        num.append(n)
        print("Adicionado ao final da lista...")
    else:
        pos = 0
        while pos < len(num):
            if n <= num[pos]:
                num.insert(pos , n)
                print(f"Adicionado na posição {pos} da lista...")
                break
            pos += 1
print(f"Os valores digitados em ordem foram {num}")

#81-
valores = []
while True:
    n = int(input("Digite um valor: "))
    valores.append(n)
    resp = str(input("Quer continuar? [S/N] ")).strip().upper()
    if resp == 'N':
        break
print(f"Você digitou {len(valores)} elementos.")
valores.sort(reverse=True)
print(f"Os valores em ordem decrescente são: {valores}")
if 5 in valores:
    print("O valor 5 faz parte da lista!")
else:
    print("O valor 5 não foi encontrado na lista.")

#82-
