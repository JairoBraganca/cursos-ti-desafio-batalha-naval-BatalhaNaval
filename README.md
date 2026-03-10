# Batalha Naval - Posicionamento de Navio

Um programa em C que implementa a lógica básica de posicionamento de um navio em um tabuleiro de Batalha Naval 10x10.

## 📋 Descrição

O programa simula o posicionamento de um navio em um tabuleiro de jogo. O usuário fornece a linha, coluna e direção do navio, e o programa exibe o tabuleiro atualizado com o navio posicionado.

## 🎮 Como Funciona

1. **Inicialização:** Cria uma matriz 10x10 preenchida com zeros (0 = posição vazia)
2. **Entrada de Dados:** Solicita ao usuário:
   - **Linha:** Uma letra de A a Z (representando as linhas)
   - **Coluna:** Um número de 1 a 10 (representando as colunas)
   - **Direção:** H (Horizontal) ou V (Vertical)
3. **Conversão de Dados:** Converte letras minúsculas para maiúsculas e ajusta os índices para o array
4. **Posicionamento:** Coloca um navio de tamanho 3 na matriz (3 = navio)
5. **Exibição:** Mostra o tabuleiro completo com o navio posicionado

## 🚀 Como Executar

### Compilação:
```bash
gcc batalhaNaval.c -o batalhaNaval
```

### Execução:
```bash
./batalhaNaval
```

### Exemplo de Entrada:
```
Escolha a linha do navio de ( A - Z): A
Escolha a coluna do navio de (1 - 10): 1
Direcao do navio (H = Horizontal, V = Vertical): H
```

### Exemplo de Saída:
```
Tabuleiro atualizado:
    1  2  3  4  5  6  7  8  9 10
A   3  3  3  0  0  0  0  0  0  0
B   0  0  0  0  0  0  0  0  0  0
C   0  0  0  0  0  0  0  0  0  0
D   0  0  0  0  0  0  0  0  0  0
E   0  0  0  0  0  0  0  0  0  0
F   0  0  0  0  0  0  0  0  0  0
G   0  0  0  0  0  0  0  0  0  0
H   0  0  0  0  0  0  0  0  0  0
I   0  0  0  0  0  0  0  0  0  0
J   0  0  0  0  0  0  0  0  0  0
```

## 🛠️ Funcionalidades Implementadas

- ✅ Matriz 10x10 para representar o tabuleiro
- ✅ Entrada interativa do usuário (linha, coluna, direção)
- ✅ Conversão de letras minúsculas para maiúsculas
- ✅ Posicionamento de navio com tamanho 3
- ✅ Suporte a direções Horizontal (H) e Vertical (V)
- ✅ Exibição clara do tabuleiro com coordenadas

## 📊 Estrutura do Código

- **Matriz:** Array 10x10 para armazenar o estado do tabuleiro
- **Loops aninhados:** Para preenchimento e exibição da matriz
- **Conversão de valores:** Letra → índice e número → índice
- **Printf formatado:** Exibição organizada do tabuleiro

## 📝 Requisitos

- Compilador C (gcc)
- Sistema operacional com suporte a C padrão






