# LAB
Resoluções de problemas propostos na disciplina Laboratório de programação


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