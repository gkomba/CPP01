# NOTES:

## PONTEIROS:
Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Ele permite manipular diretamente a memória e acessar valores indiretamente.

1. Podem ser inicializados como nullptr ou apontar para diferentes variáveis.
2. Podem ser alterados para apontar para outra variável.
3. Permitem aritmética de ponteiros (incremento, decremento, etc.).
4. Podem ser usados para alocar memória dinamicamente com new e delete.
5. O operador * (desreferência) retorna o valor armazenado no endereço apontado por ptr.


## REFERENCIAS:
C++ introduz um tipo indireto de tipo que C não tem, a **referência**. Uma referência em si não é um tipo, ela sempre é uma referência de algum tipo,
assim como arrays são arrays de algo e ponteiros são ponteiros para algo.

Uma referência é um meio de indireção. É uma maneira de alcançar outra variável. Isso pode soar muito como um ponteiro, mas não confunda os dois,
eles são muito diferentes. Veja uma referência mais como um alias para outra variável. Alguns detalhes sobre referências:

1. As referências devem ser inicializadas para se referir a algo. Não existe referência 0.
2. Uma vez vinculada a uma variável, não há como fazer a referência se referir a outra coisa.
3. Não existe "aritmética de referência".
4. Você não pode obter o endereço de uma referência. Você pode tentar, mas o que obtém é o endereço da variável referenciada.
5. As referências são indicadas com um unário "&", da mesma forma que os ponteiros são indicados com um unário "*".

A partir disso, alguém pode se perguntar, para que servem as referências? Por que alguém as quereria? Bem, para começar,
elas oferecem uma certa segurança sobre ponteiros; é tão fácil obter um ponteiro se referindo a algo que não existe,
ou algo diferente do pretendido. Elas também são úteis como um atalho para "structs" e arrays aninhados longos.
