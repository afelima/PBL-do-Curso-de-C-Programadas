# PBL-do-Curso-de-C-Programadas
> Aula prática do curso de linguagem em C que tem como tutoras o grupo "Programada" de Engenharia de Computação da Universidade Estadual de Feira de Santana (UEFS) 


> O problema se resume nas informações contidas no texto a seguir:
  # Tema: Feira de Graduação da UEFS

  A Universidade Estadual de Feira de Santana está organizando a Feira de Graduação. O evento tem o objetivo de mostrar as produções dos docentes e discentes dos diversos cursos de graduação da instituição.
  Como é o primeiro ano da Feira de Graduação na Instituição, ainda não foi pensado e planejado um sistema para a gestão das inscrições de propostas de atividades no evento, assim como para a organização e escala das apresentações. Nesse sentido, o Coordenador do curso de Engenharia de Computação, em uma de suas reuniões com a reitoria para tratar sobre este assunto, sugeriu que este software fosse requisitado aos estudantes de computação, que, mesmo em processo de formação, têm habilidades para fazer-lo.

  > O sistema deverá cumprir os seguintes requisitos listados:
  
    1 - Ler a quantidade de cursos que vão participar
    2 - Cada curso pode conter no máximo 10 prostas
        2.1 - Cada proposta deve informar seu [título], [data], [horário], [tipo de apresentação], [nome dos proponentes].
          2.1.1 - Para horário, as atividades podem iniciar às 8h e concluir às 20h, com intervalo fixo de 1h entre elas.
          2.1.2 - Tipo de apresentação pode ser: Oral, oficina, poster ou laboratório.
          2.1.3 - Os proponentes são podem ser estudantes e/ou professores.
          2.1.4 - Cada proposta pode ter, no máximo, 5 proponentes, não precisando ter professores envolvidos.
    3 - Ter certeza que não coincidam apresentações de um mesmo curso no mesmo horário.
        3.1 - Se houver coincidência a prioridade deverá ser da primeira incluída.
    4 - O sistema deve calcular:
        4.1 - Quantas apresentações de cada tipo acontecerão em cada um dos dias. 
        4.2 - Qual curso tem maior representativa na Feira de Graduação. Caso aconteçam empates, estes devem ser apresentados.
        4.3 - Qual curso tem menor representativa na Feira de Graduação. Caso aconteçam empates, estes devem ser apresentados.
        4.5 - Mostrar todas as propostas ofertadas apenas por estudantes.
    5 - A saída do sistema será em um relatório em um arquivo texto, que deverá conter as informações descritas anteriormente, de forma organizada.

  > Finalmente:
   O programa deve ser bem modularizado, não pode conter variáveis globais e deve atender todos os requisitos do sistema. O sistema deverá perguntar ao usuário o nome do arquivo de saída antes de gerá-lo. O código-fonte deverá estar hospedado num repositório público do GitHub contendo todo o processo de desenvolvimento.

  > Data de entrega: 20/11/2019
