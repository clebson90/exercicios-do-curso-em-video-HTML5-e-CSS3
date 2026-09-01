def somar(a = 0 , b = 0 , c = 0):
    s = a + b + c
    return s
r1 = somar(1 , 2 , 3)
r2 = somar(4 , 6)
r3 = somar(12)
print(f"A soma de {r1} , {r2} e {r3}")

def fatorial(num = 1):
    f = 1
    for c in range(num , 0 , -1):
        f = f * c
    return f
n = int(input("Digite um número: "))
print(f"O fatorial de {n} é igual a {fatorial(n)}")

dic = {"nome": "maria"}