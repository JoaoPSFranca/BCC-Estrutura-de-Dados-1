# Estrutura de Dados I

Repositório dedicado aos materiais, exercícios e implementações desenvolvidos durante a disciplina de Estrutura de Dados I do curso de Bacharelado em Ciência da Computação.

## Sobre a Disciplina

Este repositório contém implementações em linguagem C de diversas estruturas de dados fundamentais, abordando tanto implementações estáticas (utilizando vetores) quanto dinâmicas (utilizando alocação dinâmica de memória e ponteiros).

## Estrutura do Repositório

### 01 - Lista Linear Estática
Implementações de listas lineares usando arrays com tamanho fixo.

**Operações implementadas:**
- Inserção (início, fim, posição específica)
- Remoção (início, fim, posição específica)
- Busca de elementos
- Acesso por posição
- Concatenação e intercalação de listas
- Inversão de listas
- Inserção ordenada

**Exercícios destacados:**
- `Ex1.c` - Operações básicas em listas
- `Ex3.c` - Lista ordenada crescente
- `Ex7.c` - Sistema de cadastro de barracas (aplicação prática)

### 02 - Pilha Estática
Implementação da estrutura LIFO (Last In, First Out) usando arrays.

**Operações implementadas:**
- Push (empilhar)
- Pop (desempilhar)
- Verificação de pilha vazia/cheia
- Exibição de elementos

**Exercícios destacados:**
- `Ex4.c` - Verificação de palíndromos usando pilha
- `Ex5.c` - Inversão de pilha

### 03 - Fila Estática
Implementação da estrutura FIFO (First In, First Out) usando arrays circulares.

**Operações implementadas:**
- Enqueue (enfileirar)
- Dequeue (desenfileirar)
- Verificação de fila vazia/cheia
- Exibição clássica e não-clássica

### 04 - Deque Estático
Implementação de Double-Ended Queue (fila de duas pontas) usando arrays.

**Operações implementadas:**
- Inserção no início e no fim
- Remoção do início e do fim
- Verificações de estado
- Exibição em diferentes modos

### 05 - Lista Dinâmica

#### 05.1 - Lista Simplesmente Encadeada
Implementação de lista usando nós com ponteiros para o próximo elemento.

**Operações implementadas:**
- Inserção (início, fim, posição)
- Remoção (início, fim, posição, por valor)
- Busca e exibição

#### 05.2 - Lista Duplamente Encadeada
Implementação de lista com nós contendo ponteiros para o próximo e anterior.

**Operações implementadas:**
- Navegação bidirecional
- Inserção e remoção otimizadas
- Aplicações práticas (Ex8.c - Sistema de canais de TV)

#### 05.3 - Lista Ordenada
Implementação de lista com contador de acessos e heurísticas de otimização.

**Técnicas implementadas:**
- Move-to-Front: move elemento acessado para o início
- Transposição: troca elemento com seu antecessor
- Ordenação por frequência de acesso

### 06 - Pilha Dinâmica
Implementação de pilha usando alocação dinâmica de memória.

**Vantagens:**
- Tamanho flexível
- Uso eficiente de memória
- Sem limitação de tamanho fixo

### 10 - Árvores
Introdução às estruturas de árvores binárias de busca.

**Operações implementadas:**
- Inserção de nós
- Busca de elementos
- Contagem de nós e folhas
- Cálculo de altura
- Percursos (in-order, pre-order, post-order)

## Modelos de Funções Básicas

O diretório `Funcoes Basicas (Modelos)` contém implementações template organizadas por tipo:

### Estruturas Estáticas
- `Lista.c` - Modelo de lista estática
- `Pilha.c` - Modelo de pilha estática
- `Fila.c` - Modelo de fila estática
- `Deque.c` - Modelo de deque estático

### Estruturas Dinâmicas
- `Lista.c` - Lista simplesmente encadeada
- `Lista_Duplamente.c` - Lista duplamente encadeada
- `Lista_Ordenada.c` - Lista com heurísticas de acesso
- `Pilha.c` - Pilha dinâmica
- `Fila.c` - Fila dinâmica

## Tecnologias Utilizadas

- **Linguagem:** C 
- **Compilador:** GCC
- **Conceitos aplicados:**
  - Ponteiros e referências
  - Alocação dinâmica de memória (malloc, free)
  - Estruturas (struct)
  - Recursão
  - Manipulação de strings

## Como Compilar e Executar

### Requisitos
- GCC (GNU Compiler Collection)
- Make (opcional)

### Compilação individual
```bash
gcc nome_do_arquivo.c -o nome_do_executavel
```

### Execução
```bash
./nome_do_executavel
```

### Exemplo
```bash
gcc "01 - Lista Linear Estatica/Exercicios/Ex1.c" -o lista_ex1
./lista_ex1
```

## Licença

Este é um repositório educacional. O código está disponível para fins de estudo e referência.

---

**Nota:** Este repositório foi construído exclusivamente para fins acadêmicos e de aprendizado durante a disciplina de Estrutura de Dados I.
