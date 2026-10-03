produto = input("NOME DO PRODUTO: ")
preco_anterior = float(input("PREÇO DO MÊS ANTERIOR: "))
preco_atual = float(input("PREÇO ATUAL: "))

if preco_anterior > 0:
    percentual = ((preco_atual - preco_anterior) / preco_anterior) * 100
    print(f"PERCENTUAL: {percentual:.2f}%\n")

    if preco_atual == preco_anterior:
        print("Preço estável")
    elif percentual > 10:
        print("Houve aumento - Abuso de preço!")
    elif preco_atual > preco_anterior:
        print("Houve aumento")
    else:
        print("Diminuiu")
else:
    print("O preço anterior deve ser maior que zero.")
