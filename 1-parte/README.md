# LAB
Resoluções de problemas propostos na disciplina Laboratório de programação 1º parte


A - 
Escolha as Caixas
Autor: Antônio Dias

Póvoa está tentando desenvolver um novo jogo de azar. Uma das ideias que lhe veio à mente foi a de distribuir inteiros aleatórios em caixas numeradas e pedir ao jogador que selecionasse algumas destas caixas. Caso a soma das caixas escolhidas pelo jogador for um múltiplo de 3, ele vence, caso contrário, o vencedor será Póvoa. Sua tarefa é ajudar na implementação do jogo descrito.

Entrada:
A entrada é composta por 3 linhas. A primeira linha é composta por dois inteiros ‘N’ e ‘M’, respectivamente, o número de caixas dispostas e o número de caixas selecionadas. A segunda linha contém ‘N’ inteiros separados por espaços onde o i-ésimo inteiro representa o conteúdo da i-ésima caixa. Analogamente, a terceira linha consiste dos ‘M’ identificadores das caixas selecionadas. A numeração das caixas começa em um.

Saída:
Seu programa deve imprimir uma única linha que diz “povoa” ou “jogador”, com base naquele que tiver vencido.


C -
Tópicos de Estudo
Autor: Antônio Dias

Visando fixar melhor os assuntos vistos em sala, você surgiu com uma maneira menos ortodoxa de estudar. Após listar cada assunto na ordem em que foi ensinado, você os colocou em ordem alfabética inversa e atribuiu um tempo fixo de estudo descanso para cada um.

Entrada:
A entrada é composta por várias linhas. Cada linha i consiste de uma string S, correspondente ao i-ésimo assunto visto em um dia. A entrada termina com EOF.

Saída:
Seu programa deve imprimir o mesmo número de linhas da entrada, ordenadas de maneira lexicograficamente decrescente.


E - 
Arrumando a Estante
Autor: Antônio Dias

No processo de limpeza do quarto, Isabela precisou retirar os livros da estante em que os guardava e agora busca uma maneira mais simples e organizada de colocá-los de volta. Diante dessa situação, você resolveu ajudá-la desenvolvendo um programa que ordene a coleção de livros dela com base no autor e título de cada exemplar. A posição de cada livro será determinada alfabeticamente pelo nome do autor e – caso diversos exemplares compartilhem autores – pelo título.

Entrada:
A entrada é composta por várias linhas. A primeira linha consiste de um inteiro N, correspondente ao número de livros. Os próximos N pares de linhas contêm duas strings, A e T, respectivamente. A representa o autor de um livro (reduzido para uma única palavra), enquanto T representa o título do mesmo.

Saída: 
Seu programa deve imprimir N linhas, cada uma com o título de um livro ordenados conforme deve ser a organização da estante.


O -  
Aula de Defesa contra as Artes das Trevas (Use set)

O novo professor de defesa contra as Artesdas Trevas, o elfo Dobbysley,ensinará a seus alunos da UFBA (Universidade de Feitiçaria para Bruxos Anônimos) como se defender do maligno Mausirius Black, que está a solta. Para a primeira aula, o professor Dobbysley deu a seus alunos diversos feitiços, que são formados por várias runas (pedras mágicas), e a tarefa deles é descobrir quantos desses feitiços são diferentes, para que assim aprendam a diferenciá-los e manipulá-los corretamente. Um feitiço é igual a outro se cada runa aparece a mesma quantidade de vezes em ambos os feitiços. Sua tarefa é ajudar os alunos escrevendo um programa que descubra quantos feitiços dados por Dobbysley são diferentes.

Entrada: 
A entrada consiste de vários casos de teste. Cada caso de teste inicia com um inteiro ‘F’ (0 ≤ ′F′ ≤ 65536 ), indicando o número de feitiços dados pelo professor. Em seguida, em cada uma das ‘F’ linhas será dado um feitiço, que possui no máximo 100 runas (Cada runa é indicada por uma letra do alfabeto de ‘A’ a ‘Z’). O último caso de teste inicia com ‘F’ = 0 e não deve ser processado.

Saída: 
Seu programa deve imprimir um inteiro indicando o número de feitiços diferentes dados por Dobbysley.


K - 
Tetrês
Autor: Antônio Dias

Graças ao bom trabalho que você fez “Ordenando o Placar”, uma nova tarefa foi atribuída à você na empresa de games®. Agora você deve desenvolver um jogo similar ao Tetris. Sua tarefa é implementar uma versão simplificada do jogo, na qual a torre terá uma altura máxima M e o comprimento fixado em 3. Nela, cada bloco terá um formato 1x3 e será representado por uma string composta por zeros e uns (0 para os espaços pretos e 1 para os cinzas). Existem então 6 tipos de bloco, os identificados na imagem ao lado. Caso a cobinação entre dois blocos seja perfeita, isto é, um bloco seja o inverso do outro – como acontece entre os blocos “100” e “011” –, a linha do topo deve desaparecer e a pontuação do jogador é acrescida em 10. Em qualquer outra situação, o próximo bloco é apenas colocado no topo da torre (mesmo que isso implique em partes cinzas flutuando). O jogo acaba caso a torre alcance a altura máxima ou não existam mais blocos a serem empilhados.

Entrada: 
A entrada é composta por várias linhas. A primeira linha é composta por dois inteiros N e M, respectivamente, o número de blocos a serem empilhados e a altura máxima permitida da torre. Cada linha i seguinte contém a string identificadora do i-ésimo bloco.

Saída: 
Seu programa deve imprimir uma única linha contendo a pontuação final do jogador ou “game over” caso a torre tenha alcançado a altura máxima em algum momento.


P - 
Filhos de Papai Noel (Use set)

Em um belo dia do mês de dezembro, um jovem estudante de Ciência da Computação estava cantando a seguinte musiquinha de Natal durante a aula de LAB I: “[...] Eu pensei que todo mundo fosse filho de Papai Noel, bem assim felicidade, eu pensei que fosse uma brincadeira de papel [...]”. Ouvindo isso, o professor, decidiu propor um desafio para ele. Crie um algoritmo para descobrir quem é filho de Papai Noel obedecendo às seguintes regras: Se A é filho de Papai Noel (diretamente) e B é filho de A, então B também é filho de Papai Noel (indiretamente). Em outras palavras, todo descendente de Papai Noel, é considerado filho dele. 

Entrada: 
A primeira linha da entrada consiste em dois inteiros N e M ( 1 ≤ N < M ≤ 10 ) 3 que representam a quantidade de filhos diretos do Papai Noel e a quantidade de duplas (pai e filho) a serem analisadas, respectivamente. A segunda linha contém os N filhos (diretos) do Papai Noel. As M linhas seguintes, são compostas por dois inteiros X e ( ), onde é pai de ( ). i Y i 1 ≤ X , i Y i ≤ 10 3 Xi Y i X X i ≤ i+1

Saída: 
A saída deverá ser composta apenas de um inteiro indicando a quantidade de filhos (diretos e indiretos) que o Papai Noel tem.


Q - 
Green Wall (use set)

O desmatamento, o aquecimento global, a caça predatória, a poluição são problemas globais e estão causando diretamente a perda irreversível de espécies e a desertificação de grandes áreas. Para tentar solucionar o problema, vários países africanos se uniram em torno de um grandioso projeto: plantar um enorme muro verde cortando a África de um lado ao outro. Esperam assim barrar o avanço do grande deserto do norte e conectar vários parques e florestas que estão fragmentados. Assim, os biólogos querem fazer um estudo de quais espécies tem maior perigo de extinção mesmo conectando as regiões pelo green wall. Uma espécie corre risco de extinção se só existirem indivíduos daquela espécie em uma única região, ou seja, mesmo conectando as regiões, esta espécie não encontrará indivíduos da espécie em outra região para ter variabilidade genética. Portanto, os parques e florestas fragmentadas serão unidos uns aos outros formando um grande corredor ecológico propiciando que animais e plantas possam encontrar indivíduos de sua espécie em regiões antes separadas. Sendo assim você poderá ajudar neste grande projeto ao desenvolver um programa que diz aos biólogos quais espécies correm risco de extinção pois não existem indivíduos em outras regiões.

Entrada: 
Seu programa receberá um inteiro ‘N’ (1 < ‘N’ < 100) representando a quantidade de parques ou florestas fragmentadas no caminho do grande muro verde. Cada uma das ‘N’ linhas seguintes terá primeiro um inteiro ‘Y’ (1 <= ‘Y’ <= 2000) dizendo a quantidade de espécies diferentes observadas naquela região, seguido de ‘Y’ identificadores inteiros ‘X’ (1 <= ‘X’ <= 10^6 ), ou seja, a
relação das espécies avistadas na região. Cada espécie possui um identificador único em todos os parques e florestas.

Saída: 
Seu programa deve apresentar um identificador por linha das espécies ameaçadas de extinção, apresentados seguindo a ordem crescente dos identificadores. Se não constar espécies em perigo o programa imprime o número zero. Note que o conjunto de espécies em extinção é dado após a junção de todas as regiões.
