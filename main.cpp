#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; //comando pra poder usar varias funcoes sem precisar colocar "std::" antes


int main(int argc, char** argv) {
	//Switch case pra encode e decode
	//ENCODE//
	//com a tabela ASCII da pra adicionar todas as partes dificeis q vao entrar
	//declaracao das variaveis
	string abcd; //abcdário
	string in; //mensagem
	string key; //chave de encode
	string res; //resposta
	int tm; //tamanho
	int x;
	int c;
	int j = 2;
	char pal;
	char space, a, b;
	char vetchar[26];
	
	//TESTES
	//teste 1, somar character com numero
	space = 32; //32 e o espaço nos caracteres ASCII
	cout<< "space: " << space <<"\n";
	a = 'a';
	cout<< a << "\n";
	for (int g = 0; g<26; g++){
		b = a + g;
		cout<< b << "\n";
	}
	//teste 2, pra ver se a key repete
	//cout<< key + key<< " key + key before: \n\n";
	//botar embaixo da cin<<key
	
	
	
	
	
	//CODIGO
	abcd = "abcdefghijklmnopqrstuvwxyz"; //atribuindo o abcdario como uma frase pra selecionar as letras com indice dps
	for(int i=0; i<26; i++){ //transformar a string de texto ABCD em um vetor de characteres
		vetchar[i]= abcd[i];
		//cout<< vetchar[i];//cout pra teste
	}
	cout<< "Message: "; //leitura da mensagem
	getline (cin, in);
	//cin>> in;
	cout<< "tamanho da mensagem: "<<in.length()<<"\n\n"; //Teste pra ver o tamanho da mensagem
	cout<< "Key: "; //leitura da chave
	cin>> key;

	for(int i=0;i<in.length();i++){
		pal = in[i];
			for(int k =0; k<26; k++){
				if (pal == abcd[k]){//colocar o char dentro das resposta
					res = res + abcd[k];
					break;
				}
				else if (pal == space){//colocar espaço dentro da resposta
					res = res + " ";
					break;
				}
				
			}
		cout<< "pal: "<< pal<<"\n";
	}
	cout<<"res: "<<res<<"\n";
	
	
	cout<< "\n\n"; // "\n" pra poder pular linha no cmd
	system("PAUSE"); /*na hora de rodar o .exe sem ser pelo Dev-C++(no caso abrir ele normalmente), assim que o programa,
	executa todo o código, ele automaticamente fecha, com o system("PAUSE") ele pede pra apertar qualquer tecla pra fechar.*/
    return EXIT_SUCCESS;
}
