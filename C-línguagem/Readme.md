# 💻 Estudos de Linguagem C

Repositório para registar o meu progresso e exercícios práticos desenvolvidos na linguagem C.
---

---

## 🔹 Exercício 01: Verificador de Par ou Ímpar (`ex01_par_impar.c`)

**Descrição:** 
Programa que recebe um número inteiro digitado pelo utilizador e determina se ele é PAR ou ÍMPAR através de operações matemáticas e estruturas de decisão.

**Tudo o que aprendi e pratiquei neste exercício:**

* **Operador de Resto/Módulo (`%`):**
  * Compreendi que o operador `%` calcula o resto de uma divisão inteira (e não o resultado decimal da divisão).
  * Exemplo: `5 % 2` resulta em `1`, pois $5 = (2 \times 2) + 1$.

* **Lógica do Par ou Ímpar:**
  * Entendi a regra matemática fundamental: qualquer número par dividido por `2` deixa resto `0` (`numero % 2 == 0`).
  * Qualquer número ímpar dividido por `2` deixa resto `1` (`numero % 2 != 0`).

* **Estrutura de Decisão (`if / else`):**
  * Usei o `if` para testar a condição lógica do resto da divisão (`if (numero % 2 == 0)`).
  * Compreendi que o bloco dentro do `if` só é executado quando a condição é verdadeira (`TRUE`).
  * Usei o `else` para capturar a alternativa oposta: se a condição do `if` for falsa (`FALSE`), o programa executa automaticamente o bloco do `else` (número ímpar).

* **Comparações de Igualdade (`==`):**
  * Pratiquei a diferença entre `=` (atribuição de valor a uma variável) e `==` (comparação de igualdade entre dois valores).

* **Entrada, Saída e Interpolação:**
  * Leitura de números inteiros com `scanf("%d", &numero)`.
  * Exibição dinâmica do valor da variável junto com o resultado no terminal utilizando `printf("... %d ...", numero)`.

---

---
---

## 🔹 Exercício 02: Verificador de Maioridade (`ex02_maioridade.c`)

**Descrição:** 
Programa que recebe a idade de uma pessoa digitada no terminal e verifica se ela já atingiu a maioridade (18 anos ou mais) ou se ainda é menor de idade.

**Tudo o que aprendi e pratiquei neste exercício:**

* **Operadores Relacionais (`>=`):**
  * Pratiquei o operador **maior ou igual a** (`>=`), que combina o sinal de maior (`>`) com o de igual (`=`).
  * Entendi que a condição `idade >= 18` aceita tanto o valor 18 exato quanto qualquer número maior que 18 (ex.: 19, 25, 50).

* **Análise Detalhada de Sintaxe (`if (idade >= 18)`):**
  * Compreendi a função de cada caractere na estrutura de decisão:
    * `if`: comando que define o teste condicional ("se").
    * `()`: delimitadores que definem o início e o fim da condição a ser testada.
    * `idade`: a variável que armazena o valor informado pelo utilizador.
    * `>=`: o operador relacional de comparação.
    * `18`: o valor numérico de referência para a maioridade.

* **Estrutura Condicional e Fluxo de Execução (`if / else`):**
  * O bloco do `if` é executado apenas se a condição for verdadeira (`TRUE` -> idade 18 ou mais).
  * O bloco do `else` assume o controlo automaticamente caso a condição seja falsa (`FALSE` -> idade menor que 18).

* **Entrada e Saída de Dados:**
  * Uso do `scanf("%d", &idade)` para ler valores inteiros do terminal.
  * Organização do código com mensagens claras para o utilizador através do `printf()`.
