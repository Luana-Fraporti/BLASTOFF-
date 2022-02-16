// Questão 1: 
float MediaIdades(float i, float j, float k, float x, float y){
    // Retornando o somatório das idades divido pelo número de entradas
    return ((i + j + k + x + y) / 5);
}

/*
// Resultado esperado: 24.8
Console.log(MediaIdades(20, 21, 23, 25, 35).ToString("F2"));
*/

// Questão 2: 
float ConsumoMedio(float a, float b){
    // Retornando o consumo médio dado pela distância percorrida divida pelo consumo 
    return (a / b);
}

/*
// Resultado esperado: 13,33
Console.log(ConsumoMedio(200, 15));
*/

// Questão 3:
int MenorValor(int a, int b, int c){
    // Método Math.Min retorna o menor valor entre dois números
    return Math.Min(a, Math.Min(b, c));
}

/*
// Resultado esperado: 2
Console.log(MenorValor(2, 10, 9));
*/

// Questão 4: 
float ConversaoDeTemperatura(float c){
    // Retornando o valor após o cálculo a partir da fórmula
    return (c * 9 / 5) + 32;
}

/*
// Resultado esperado: 68
Console.log(ConversaoDeTemperatura(20));
*/

// Questão 5:
bool NumerosMultiplos(int a, int b){
    // Variável auxíliar guarando o menor valor entre as entradas
    int aux = Math.Min(a, b);

    // Garantindo que sempre que houver um valor maior ele seja armazenado em a
    a = Math.Max(a, b);
    b = aux;

    // Retornando o módulo da divisão entre as entradas, se o resultado for 0 os números são múltiplos entre si
    return a % b == 0;
}

/*
// Resultado esperado: False
Console.log(NumerosMultiplos(12, 9));
*/

// Questão 6: Calcular tempo de duração de uma partida a partir da hora do ínicio e hora do fim
TimeSpan TempoDuracaoPartida(DateTime inicioPartida, DateTime fimPartida){
    
    // Método Subtract retorna um TimeSpan entre dois DateTime
    return fimPartida.Subtract(inicioPartida);
}

/*
// Resultado esperado: 01:00:00 (hh:mm:ss)
Console.log(TempoDuracaoPartida(new DateTime(2022, 2, 15, 17, 0, 0, 0), new DateTime(2022, 2, 15, 18, 0, 0, 0)));
*/


// Questão 7: Retornar lista com números pares
int[] NumerosPares(int[] a){
    // Método FindAll da classe Array retorna um novo array com o filtro especificado
    return Array.FindAll(a, numero => numero % 2 == 0);
}

/*
// Resultado esperado: { 6, 2, 20 }
var retorno = NumerosPares(new int[] {1, 6, 2, 61, 20, 13, 17});
foreach(int numero in retorno){
    Console.log(numero);
}
*/

// Questão 8: 
bool NumeroPrimo(int numero){

    // Variável para guardar o número de divisores
    int divisores = 0;

    // Contador de parada
    int parada = 0;

    // Loop enquanto o número de divisores for menor que 3 e o contador de parada for menor ou igual ao valor de entrada
    while(divisores < 3 && parada <= numero){
        
        // Módulo entre a entrada e o contador verificando se o resultado é 0
        if(numero % (parada + 1) == 0){
            // Sendo 0 o número de divisores é incrementado
            divisores++;
        };
        parada++;
    }

    // Se o número de divisores for maior que 2 o número não é primo
    return divisores <= 2;
}

/*
// Exemplo de retorno se o número é primo
// Resultado esperado: True
Console.log(NumeroPrimo(19));
*/

// Questão 9: 
int[] Tabuada(int numero){

    // Criando uma lista zerada
    var tabuada = new List<int>();

    // Loop percorrendo até 10
    for (int i = 0; i < 10; i++)
    {
        tabuada.Add(numero * (i + 1));
    }

    // Retornado os valores em Array
    return tabuada.ToArray();
}

/*
// Resultado esperado: { 19, 38, 57, 76, 95, 114, 133, 152, 171, 190}
var tabuada = Tabuada(19);
foreach (int valor in tabuada)
{
    Console.log(valor);
}
*/

// Questão 10: Retornar o fatorial de um número
int Fatorial(int n){

    // Variável que guardará o valor do fatorial
    int fatorial = n;

    // Loop percorrendo do valor da entrada até 1
    for (int i = n; i > 1; i--)
    {
        fatorial *= n - 1;
        n--;
    }

    return fatorial;
}

/*
// Resultado esperado 720
Console.log(Fatorial(6));
*/

// Questão 11: 
List<int> Interseccao(List<int> a, List<int> b){
    // Método Intersect realiza a intersecção de coleções
    return new List<int>(a.Intersect(b));
}

/*
// Retorno esperado: { 1, 2 }
var lista = Interseccao(new List<int>(){ 1, 2, 3, 4}, new List<int>() { 1, 2, 5, 8});
foreach (var numero in lista)
{
    Console.log(numero);
}
*/

// Questão 12: 
List<int> Concatenacao(List<int> a, List<int> b){
    // Método Concat realiza a concatenação de coleções
    return new List<int>(a.Concat(b));
}

/*
// Retorno esperado: { 1, 2, 3, 4, 1, 2, 5, 8}
var lista = Concatenacao(new List<int>(){ 1, 2, 3, 4}, new List<int>() { 1, 2, 5, 8});
// Loop para imprimir os valores da lista resultado da concatenação
foreach (var numero in lista)
{
    Console.log(numero);
}
*/

// Questão 13: 
void ImprimeMatriz(int[,] matriz){
    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < matriz.GetLength(0); i++)
    {
        // Loop para percorrer as colunas
        for (int j = 0; j < matriz.GetLength(1); j++)
        {
            // Imprimindo o valor
            Console.Write("{0} ", matriz[i, j]);
        }
        // Pulando linha
        Console.Write("\n");
    }
}

/*
// Função fazendo a impressão e não retornando valor
ImprimeMatriz(new int[,] { {1, 6, 1}, {3, 2, 9}, {4, 0, 3} });
*/

// Questão 14:
bool Palindromo(string entrada){

    // Convertendo a entrada de string para um vetor de caractéres e transformando toda a entrada em letras maiúsculas
    char[] entradaChar = entrada.ToUpper().ToCharArray();

    // Criando o vetor para comparação
    char[] comparacao = new char[entradaChar.Length];

    // Contador auxiliar com ínicio na última posição da palavra de entrada
    int contadorAuxiliar = entradaChar.Length - 1;
    
    // Loop para percorrer a entrada iterando letra por letra
    for (int i = 0; i < entradaChar.Length; i++)
    {
        // Salvando o carácter da entrada a partir do final do vetor comparativo
        comparacao[contadorAuxiliar] = entradaChar[i];
        contadorAuxiliar--;
    }

    // Convertendo a comparação novamente em String para comparar com a entrada inicial
    string resultado = new string(comparacao);

    // Retornando true se as Strings forem iguais
    return resultado == entrada.ToUpper();
}

/*
// Retorno esperado true
Console.log(Palindromo("omissíssimo"));
*/