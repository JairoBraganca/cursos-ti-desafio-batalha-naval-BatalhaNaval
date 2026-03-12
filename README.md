# Batalha Naval - Exibição de Tabuleiro

Um programa em C que exibe um tabuleiro de Batalha Naval 10x10 com navios posicionados de forma fixa.

## 📋 Descrição

O programa cria um tabuleiro de jogo 10x10 e posiciona dois navios de tamanho 3 em posições pré-definidas. Em seguida, exibe o tabuleiro completo mostrando as posições dos navios.

## 🎮 Como Funciona

1. **Inicialização:** Cria uma matriz 10x10 preenchida com zeros (0 = posição vazia)
2. **Posicionamento Fixo:** Coloca dois navios de tamanho 3 nas seguintes posições:
   - Navio 1: Linhas 7-9, Coluna 9 (índices 6-8, coluna 8)
   - Navio 2: Linha 4, Colunas 5-7 (índice 3, colunas 4-6)
3. **Exibição:** Mostra o tabuleiro completo com os navios posicionados (3 = navio)


### Exemplo de Saída:
```
   A  B  C  D  E  F  G  H  I  J

 1  0  0  0  0  0  0  0  0  0  0
 2  0  0  0  0  0  0  0  0  0  0
 3  0  0  0  0  0  0  0  0  0  0
 4  0  0  0  0  3  3  3  0  0  0
 5  0  0  0  0  0  0  0  0  0  0
 6  0  0  0  0  0  0  0  0  0  0
 7  0  0  0  0  0  0  0  0  3  0
 8  0  0  0  0  0  0  0  0  3  0
 9  0  0  0  0  0  0  0  0  3  0
10  0  0  0  0  0  0  0  0  0  0
```

##  Funcionalidades Implementadas

-  Matriz 10x10 para representar o tabuleiro
-  Posicionamento de navio com tamanho 3
-  Exibição clara do tabuleiro com coordenadas







