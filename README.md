📊 Análise de Temperaturas em Diferentes Cidades
Projeto em C

Este projeto implementa um programa em C capaz de analisar temperaturas máximas registradas em 5 cidades ao longo de 7 dias. Os dados são inseridos pelo usuário, e o sistema realiza cálculos importantes para apoiar análises meteorológicas.

🧩 Problema

Você trabalha para um instituto de meteorologia que coletou temperaturas máximas diárias de 5 cidades durante uma semana. Agora, é necessário analisar essas informações para extrair estatísticas relevantes:

⚪ Média semanal de cada cidade

🔥 Dia e cidade mais quentes

❄️ Dia e cidade mais frios

📈 Quais cidades ficaram acima da média geral

O programa foi desenvolvido exatamente para resolver esse problema.

🎯 Objetivos do Programa

O sistema deve:

1️⃣ Entrada de dados

Solicitar ao usuário as temperaturas máximas de cada uma das 5 cidades durante os 7 dias.

As cidades são identificadas pelos números 1 a 5.

Os dias são identificados pelos números 1 a 7.

Os dados são armazenados em uma matriz 5 x 7 (cidade x dia).

2️⃣ Cálculo da Temperatura Média Semanal por Cidade

Para cada cidade, o programa calcula:

📌 A média das 7 temperaturas máximas registradas na semana
E exibe o valor correspondente.

3️⃣ Identificação do Dia Mais Quente e Mais Frio da Semana

O programa analisa todas as 35 temperaturas e encontra:

🔥 Temperatura mais alta da semana

❄️ Temperatura mais baixa da semana

🏙️ Em qual cidade ocorreram

📅 Em qual dia ocorreram

Em caso de empates, o programa considera a primeira ocorrência.

4️⃣ Cidades com Média Acima da Média Geral

Calcula a média geral, considerando todas as 35 temperaturas.

Compara as médias individuais das cidades com essa média geral.

Exibe quais cidades ficaram acima da média semanal geral.

🧠 Estrutura de Dados Utilizada

Foi utilizada uma matriz bidimensional:

float temperaturas[5][7];


Onde:

A primeira dimensão representa as cidades

A segunda dimensão representa os dias

Essa estrutura facilita o acesso, a navegação e os cálculos necessários.

▶️ Como Executar

Compile o programa:

gcc main.c -o temperaturas


Execute:

./temperaturas

📌 Funcionalidades Implementadas

Entrada dinâmica de temperaturas

Cálculo de médias

Busca de valores extremos

Comparação com média global

Exibição dos resultados formatados

📎 Exemplo de Organização Interna (Matriz)
Cidade \ Dia	1	2	3	4	5	6	7
Cidade 1							
Cidade 2							
Cidade 3							
Cidade 4							
Cidade 5

🔧 Tecnologias

Linguagem C

Compilador GCC

📜 Licença

Este projeto é livre para uso educacional.
