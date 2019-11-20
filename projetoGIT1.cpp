#include <iostream>
#include <string>
using namespace std;
/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
	for(int cont=0,int i=0;i<texto.length();i++)
	{
		if (letra == texto[i]) {
			cont++;
		}
	}
	return cont;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
	for (i = 0; i < texto.length(); i++) {

	if (texto[i] == letra1) {
		texto[i] = letra2;
			}
		}
return texto;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
	for(int cont=0,int i=0;i<texto.length();i++)
	{
		if (palavra == scanf("%s", texto)) {
			scanf("%s", palavra1);
			cont++;
		}
	}
	return cont;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
	for (i = 0; i < texto.length(); i++) {

	if (texto[scanf("%s", texto)] == palavra1) {
		  texto[scanf("%s", texto)] = palavra2;
			}
		}
}
int main(){
	string texto,palavra1, palavra2;
	char letra,letrinha;
	cout << "Entre com o texto para fazer o teste:";
	get.line(cin,texto)
	std::cout << "digite uma letra a ser buscada" << '\n';
	cin>>letra;
	cout<<"a letra aparece:" << contaLetras(letra,texto);
	std::cout << "digite uma letra para substituir a letra escolhida em todo o texto" << '\n';
	cin>>letrinha;
	cout << "o texto ficara assim: "<< substituirLetra(letra,letrinha,texto);
	std::cout << "digite uma palavra a ser buscada no texto" << '\n';
	get.line(cin,palavra1);
	cout<<"a palavra aparece:" << contaPalavras(palavra1,texto);
	std::cout << "digite uma palavra para substituir a palavra escolhida em todo o texto" << '\n';
	get.line(cin,palavra2);
	cout << "o texto ficara assim: "<< substituirPalavras(palavra1,palavra2,texto);if ((texto == ' ')||(texto == '\n')) {
				}
	return 0;
}
