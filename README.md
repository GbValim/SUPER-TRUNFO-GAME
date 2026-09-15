# 🃏 Jogo Super Trunfo em C - Países e Cidades

Projeto desenvolvido em linguagem **C** que simula o clássico jogo **Super Trunfo**, onde é possível cadastrar duas cartas com informações socioeconômicas e geográficas de diferentes cidades e realizar a comparação dos atributos para determinar a vencedora.

---

## 📌 Funcionalidades

- **Cadastro de Cartas:** Entrada interativa para registrar informações geográficas e econômicas de duas cidades.
- **Cálculo de Indicadores:**
  - **Densidade Populacional:** Razão entre a população e a área da cidade ($\text{Habitantes} / \text{km}^2$).
  - **PIB per Capita:** Produto Interno Bruto dividido pela população.
  - **Super Poder:** Atributo especial calculado pela soma de todos os atributos, invertendo a densidade populacional (pois menor densidade é melhor no contexto do jogo).
- **Comparação Personalizada:** Menu interativo para escolher qual atributo comparar entre as duas cartas.
- **Tratamento de Regra Especial:** Para a **Densidade Populacional**, a menor pontuação vence, enquanto para os demais atributos a maior pontuação vence.

---

## 🛠️ Atributos das Cartas

Cada carta cadastrada possui os seguintes atributos:

| Atributo | Descrição |
| :--- | :--- |
| **Estado** | Letra identificadora do estado (ex: A-H) |
| **Código** | Código identificador da carta (ex: A01) |
| **Cidade** | Nome da cidade cadastrada |
| **População** | Número total de habitantes |
| **Área** | Área total em km² |
| **PIB** | Produto Interno Bruto (em bilhões) |
| **Pontos Turísticos** | Quantidade de atrações turísticas |
| **Densidade Populacional** | População / Área |
| **PIB per Capita** | PIB total / População |
| **Super Poder** | Soma ponderada de todos os atributos |

---

## 🚀 Como Executar o Projeto

### Pré-requisitos
Para compilar e executar o código, você precisará de um compilador C instalado em sua máquina (como o `gcc`).

### Passo a Passo

1. **Clonar o Repositório:**
   ```bash
   git clone [https://github.com/GbValim/JogoSuperTrunfoTerminal.git](https://github.com/GbValim/JogoSuperTrunfoTerminal.git)

  ### DIVIRTA-SE !!
