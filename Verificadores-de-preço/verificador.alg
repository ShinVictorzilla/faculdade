algoritmo "VERIFICADOR DE PREÇO"

var
   produto: caractere
   preco_anterior: real
   preco_atual: real
   percentual: real

inicio
   escreval("NOME DO PRODUTO: ")
   leia(produto)

   escreval("PREÇO DO MÊS ANTERIOR: ")
   leia(preco_anterior)

   escreval("PREÇO ATUAL: ")
   leia(preco_atual)

   se (preco_anterior > 0) entao
      percentual <- ((preco_atual - preco_anterior) / preco_anterior) * 100
      escreval("PERCENTUAL: ", percentual:0:2, "%")
      escreval("")

      se (preco_atual = preco_anterior) entao
         escreval("Preço estável")
      senao
         se (percentual > 10) entao
            escreval("Houve aumento - Abuso de preço!")
         senao
            se (preco_atual > preco_anterior) entao
               escreval("Houve aumento")
            senao
               escreval("Diminuiu")
            fimse
         fimse
      fimse
   senao
      escreval("O preço anterior deve ser maior que zero.")
   fimse

fimalgoritmo
