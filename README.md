# Relatório Final – Projeto de Introdução à Computação

Projeto final da cadeira de introdução a computação

# Identificação do Grupo
**Nome do grupo:** HerWare

**Integrantes:**  
Ayllane Maria Silva de Santana – amss  
Júlia Almeida Brainer Dantas– jabd  
Larissa Paiva dos Santos – lps8  
Livia dos Santos Ferreira – lsf4  
Yasmim Taveira Lopes - ytl  

**Título do Projeto:**
Braille Tone 

# Descrição do Projeto
 O projeto tem como objetivo principal a criação de um protótipo reduzido de piano  utilizando Arduino e teclas impressas em 3D com inscrições em braille, que identificam as respectivas notas musicais. A proposta busca desenvolver um instrumento mais acessível para pessoas com deficiência visual, de modo a facilitar o primeiro contato com a prática musical, visto que nele, o usuário pode ler, por meio do braille, a nota correspondente a cada tecla e, assim, identificar com maior facilidade sua posição no instrumento, tornando o processo de aprendizado mais intuitivo.  

 A principal motivação do projeto é promover a inclusão de pessoas com deficiência visual no aprendizado musical. O piano tradicional depende intensamente da visão para identificar as notas e ler partituras, o que cria barreiras e dificulta o processo de aprendizagem. Dessa forma, o Braille Tone busca eliminar essas limitações, utilizando a tecnologia e oferecendo recursos acessíveis e intuitivos que incentivem a representatividade e a introdução ao universo musical.

# Materiais e peças utilizadas
* 9 Botões
* Jumpers macho-macho
* Jumpers macho-fêmea
* Arduino Nano
* 2 Mini Protoboard 170 Pontos
* 1 Alto falante
* 1 Amplificador
* 1 Bateria

Estrutura do piano: 
*	Modelagem e Impressão 3D

# Dificuldades enfrentadas
A maior dificuldade enfrentada foi o processo de montagem do circuito, pois alguns materiais não estavam funcionando. Dessa forma, tudo precisava ser testado antes de ser implementado no circuito. 

 Durante o desenvolvimento do projeto, houve indecisão sobre qual Arduino utilizar. A princípio, idealizamos o projeto com o Arduino Uno, utilizando uma protoboard de 830 pontos para o circuito completo e um buzzer. Logo, fomos orientadas de que, com o Arduino Mega e um alto falante, o projeto seria executado da melhor forma. Diante disso, após troca pelo Arduino Mega, observamos que a impressão escolhida, que já estava em andamento, não era projetada para esse modelo, mas sim para o Arduino Nano. Desse modo, optamos por utilizar o Arduino Nano. 

 Também foi necessária a remoção da protoboard de 830 pontos, que incluía os botões das notas e os botões de grave e agudo. Por isso, decidiu-se soldar os fios responsáveis pela ligação desses botões e utilizar apenas a mini protoboard para os botões que alteram os tons das notas.

 Inicialmente, o código não funcionava corretamente. Ao testá-lo, foi perceptível que não apresentava o comportamento esperado, sendo necessário identificar o erro. Assim, realizamos uma adaptação adicionando o Serial.print() para todos os botões na programação e, dessa forma, verificamos o Serial Monitor. Com isso, observamos que o problema estava na leitura do estado do botão. Portanto, no decorrer de vários testes com o código e o circuito, ficou evidente que os erros não eram extensos, mas exigiam maior atenção.

# Criatividade e Diferenciais
 O diferencial desse modelo de projeto com Arduino está na preocupação em garantir visibilidade a pautas como a inclusão de pessoas com deficiência visual no ambiente acadêmico. Visto que contém as marcações das células braille em alto-relevo, o trabalho também demonstra como o uso da tecnologia pode favorecer a acessibilidade em projetos desenvolvidos no Centro de Informática. 

 Ademais, o Braille Tone possui caráter educativo, uma vez que propõe o incentivo ao contato com práticas artísticas, como a música. Nesse sentido, o cuidado com a estética está relacionado à necessidade de tornar a proposta atrativa, atraindo um público geral e diferenciando-a dos demais.

# Documentação dos circuitos desenvolvidos
 Inicialmente, um fio terra foi soldado em todos os botões. Logo após, outro fio foi soldado em uma perna de um dos botões da extremidade, puxando o GND do Arduino Nano. Realizamos a ligação do pino de cada botão, os quais também foram soldados e conectados ao Arduino. Como utilizamos dois botões em uma mini protoboard, também fizemos a ligação dos respectivos pinos deles ao Arduino e conectamos um fio do GND até a mini protoboard.

 Para o alto-falante, foram soldados dois fios, indicando o positivo e o negativo, os quais foram ligados ao amplificador de som. Na bateria, também foram soldados dois fios (um no polo positivo e outro no polo negativo), que foram conectados ao amplificador. Ainda sobre o amplificador, utilizamos uma porta analógica (A1) do Arduino e outro fio ligado ao GND do Arduino, ambos conectados ao amplificador. Com isso, conseguimos obter um circuito funcionando corretamente.

# Análise sobre o cumprimento da proposta inicial
  O projeto inicial consistia em uma versão bastante simplificada da proposta final desenvolvida ao longo do trabalho. Nessa primeira etapa, os componentes do circuito se limitavam a sete botões, um buzzer, o Arduino Uno e alguns jumpers para as conexões. A ideia inicial era construir um piano básico que reproduzisse apenas as sete notas musicais (dó, ré, mi, fá, sol, lá e si), o que restringia significativamente as possibilidades de execução musical. Dessa forma, não seria possível tocar músicas mais variadas ou explorar diferentes combinações de notas, tornando o projeto limitado tanto em funcionalidade quanto em aplicação prática. 

 Com a ampliação do projeto, foi possível desenvolver uma proposta mais completa e inclusiva, especialmente voltada para deficientes visuais que estão iniciando o aprendizado do piano. A nova configuração permite uma experiência mais rica e abrangente, facilitando o reconhecimento das notas e a prática musical de forma progressiva. Esse aspecto é fundamental para iniciantes, pois contribui para um aprendizado mais eficaz, intuitivo e acessível.

 Além disso, a inclusão de um amplificador no circuito representou uma melhoria significativa na qualidade sonora do projeto. Com esse acréscimo, garantimos que o alto falante produza um som mais forte, limpo e audível, o que melhora a percepção das notas musicais e torna o uso do instrumento mais agradável e funcional em diferentes ambientes.

# Considerações finais sobre o desenvolvimento do projeto
  Por fim, apesar dos desafios enfrentados durante o desenvolvimento do projeto, conseguimos contornar as dificuldades, o que serviu como aprendizado para trabalhos futuros. Ao longo do desenvolvimento, tivemos a oportunidade de aplicar na prática os conteúdos abordados na disciplina de Introdução à Computação, ampliando nossa compreensão sobre lógica, componentes eletrônicos e funcionamento de circuitos. Apesar dos erros e ajustes necessários durante o processo, ele foi concluído como idealizamos, dentro do prazo. 

 Dessa forma, a experiência contribuiu bastante para nosso aprendizado, fortalecendo a base para futuros projetos ao longo do curso.

# Referências Utilizadas

* Build a simple digital keyboard that plays real notes using Arduino. Project Hub, 2025. Disponível em: https://projecthub.arduino.cc/rexhepmustafovski/build-a-simple-digital-keyboardthatplays-real-notes-using-arduino-373f0e   

* Iniciação na Musicografia Braille, Como Funciona, Educação Musical, Notas Sistema  Braille. Disponível em: https://essaseoutras.com.br/iniciacao-na-musicografia-braille-como-funciona-educacao-musical-notas-sistema-braille/ 

* https://www.printables.com/model/305419-arduino-piano-sound-board

