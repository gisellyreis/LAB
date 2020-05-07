# LAB
Resoluções de problemas propostos na disciplina Laboratório de programação 1º parte

A - 
Organizando o inventário

O dovahkiin está com problemas para administrar a quantidade de artefatos mágicos que possui e seu maior problema é com as soul gems. Existem 6 tipos básicos de soul gems: petty soul gem, lesser, common, greater, grand e a black soul gem. Por ser acumulador dovahkiin pediu sua ajuda para saber a quantidade exata de cada tipo de soul gem em seu invetário.

Tarefa: 
Sua tarefa é simples, descobrir qual a quantidade de cada tipo de soul gem que o dovahkiin possui, lembrando que a quantidade pode aumentar conforme ele encontra mais soul gems de um tipo específico.

Entrada: 
Primeiramente será dado um inteiro ‘N’ (1 <= ‘N’ <= 1000) representando a sequência de itens que o dovahkiin colocou em seu inventário. Nas próximas ‘N’ linhas será dado uma string seguida de um número inteiro, representando o tipo de soul gem e a quantidade encontrada naquele momento.

Saída: 
Sua saída deverá conter o nome das soul gems, em ordem alfabética, e a quantidade das mesmas, uma por linha.


B - 
Melhorando a Pokédex
Autor: João Pedro Rodrigues

A Pokédex, também conhecida como Poké-Agenda, é uma enciclopédia virtual portátil de alta tecnologia que os treinadores Pokémon transportam para registrar todas as espécies diferentes de Pokémon que são encontradas durante a sua viagem como treinadores. O professor Oak está tentando incrementar as funcionalidades da Pokédex de Kanto para fazer com que ela mapeie as
populações de Pokémon que habitam as cidades da região. Um satélite direcionado para Kanto dá informação dos pokémons de uma determinada espécie encontrados em uma dada localidade. Você deverá calcular a fração da população de cada espécie.

Entrada: 
Será fornecida uma lista dos nomes dos Pokémon observadas na região, um por linha. Nenhum nome de espécie é superior a 15 caracteres. Os nomes não são acentuados. A entrada termina quando for lida a palavra “FIM”.

Saída: 
Imprima em ordem alfabética o nome de cada espécie representada na população, seguida pelo percentual da população que representa, com 2 casas decimais.


C - 
Negociações na Bolsa de Valores (use map)

As bolsas de valores são conhecidas mundialmente por negociarem ações de sociedades de capital aberto e outros valores mobiliários. A movimentação de compra e venda de ações em um único dia pode ser gigantesca. Nas primeiras décadas do século XX, a gritaria do tradicional pregão viva-voz das bolsas foi substituído pelo pregão eletrônico. No entanto, a bolsa da Patópolis ainda faz movimentações através do pregão viva-voz. Não querendo ficar presa ao passado, Tio Patinhas te contratou para implementar um programa que diz qual foi a ação mais negociada no dia e o número de ações negociadas de cada empresa.

Entrada: 
Seu programa receberá primeiramente um inteiro ‘N’ (1 ≤ ‘N’ ≤ 100000) representando a quantidade de operações realizadas em dado dia de negociações. A seguir serão dadas ‘N’ linhas, contendo em cada, o nome da ação e a respectiva quantidade, em inteiro, negociada.

Saída: 
Seu programa deverá imprimir na primeira linha o nome da ação mais negociada, seguido do número de ações negociadas. Nas próximas ‘N’-1 linhas você deverá imprimir em ordem alfabética o nome das outras ações e a quantidade negociada daquelas ações. É garantido que sempre haverá uma única ação com o maior número de negociações.


D - 
Censo galáctico (use map)

Há muito tempo atrás em uma galáxia muito muito distante, o Jedi mais famoso de todos os tempos, Mestre Yoda, começou a fazer um censo de origem de todos os Jedi espalhados pela galáxia. Sabendo de seu talento em programação, Yoda te selecionou para ajudar nesta delicada operação que além de tudo precisa manter o sigilo das informações. Assim, em cada planeta da federação foi verificado de onde vinham os Jedi que ali residiam. Ao final, Mestre Yoda desejava saber o nome dos planetas e a quantidade de Jedi oriundos daqueles planetas, além disso queria saber qual o planeta onde nasciam mais Jedi. Que a força esteja com você.

Entrada: 
Seu programa receberá primeiramente um inteiro ‘N’ (1 ≤ ‘N’ ≤ 100000) representando a quantidade de Jedi participantes do Censo. A seguir serão dados ‘N’ nomes de planetas, ou seja, as respostas dadas pelos Jedis sobre seu planeta de origem.

Saída: 
Seu programa deverá imprimir na primeira linha o nome do planeta onde nasceram mais Jedi, seguido do número de Jedi que ali nasceram. Nas próximas ‘N’-1 linhas você deverá imprimir em ordem alfabética o nome dos outros planetas e a quantidade de Jedi que nasceram naqueles planetas. É garantido que sempre haverá um único planeta com o maior número de nascimentos de Jedi.


E - 
Colônias marcianas (use map)

Começou a era da colonização de novos mundos e o primeiro planeta dessa aventura humana será Marte. Milhares de terráqueos foram selecionados para serem os primeiros colonos. Os cientistas e empresários responsáveis pelo projeto criaram ‘N’ colônias espalhadas pelo planeta vermelho. Sabendo de seu talento em programação o Prof. Rubisley te contratou para gerenciar esta delicada operação de distribuição dos ‘C’ novos colonos marcianos. Cada colono possui um identificador único em Marte e cada colônia possui um identificador único começando em 1. Será fornecido a você uma listagem dos identificadores dos colonos já na ordem em que foram selecionados. Você deverá distribuir os ‘N’ primeiros colonos um para cada uma das ‘N’ colônias, sendo o primeiro colono para a colônia 1, o segundo colono para a colônia 2, e assim sucessivamente. Os próximos ‘N’ colonos irão um para cada uma das ‘N’ colônias novamente, e assim sucessivamente até terminar a distribuição. Assim cada colono estará associado a uma colônia e fica fácil encontrá-lo no mapeamento.

Entrada: 
Seu programa receberá primeiramente um inteiro ‘N’ (2 ≤ ‘N’ ≤ 100) representando a quantidade de colônias em Marte. Em seguida outro inteiro ‘C’ (‘N’ ≤ ‘C’ ≤ 10000) representando a quantidade de colonos. Por fim teremos ‘C’ inteiros representando o identificador de cada colono.

Saída: 
Seu programa deverá imprimir ‘N’ linhas. Em cada uma destas linhas você deverá imprimir os identificadores (ordenados crescentemente) dos colonos de cada colônia, começando pela colônia de número 1, e assim sucessivamente.