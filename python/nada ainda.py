matriz = [[0 , 0 , 0] , [0 , 0 , 0] , [0 , 0 , 0]]
spar = 0
s3coluna = 0
maior2l = 0
for l in range(0 , 3):
    for c in range(0 , 3):
        matriz [l] [c] = int(input(f"Digite um número pro valor [{l} {c}]: "))
        if matriz [l] [c] % 2 == 0:
            spar += matriz [l] [c]
        if c == 2:
            s3coluna += matriz [l][c]
for l in matriz:
    print(f"[{l[0]}] [{l[1]}] [{l[2]}]")
maior2l = max(matriz[1])
print(f"A soma dos valores pares é {spar}.")
print(f"A soma dos valores da terceira coluna é {s3coluna}.")
print(f"O maior valor da segunda linha é {maior2l}.")