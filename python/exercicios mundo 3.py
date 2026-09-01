def area(l , c):
    area = l * c
    print(f"A largura é {l} e o comprimento é {c}. E a área é {area} ")

l = int(input("Qual a largura? "))
c = int(input("Qual o comprimento? "))
area(l , c)

def escreva(msg):
    tam = len(msg)
    print(f"-" * tam)
    print(f"{msg}")
    print(f"-" * tam)

escreva("clebson")
escreva("heloisa")