#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//ENCODE//
	
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
	char p, a;
	char vetchar[26];
	p = 'a';
	a = p + 1;
	cout<< "p/a: " << p << "/" << a << "\n";
	abcd = "abcdefghijklmnopqrstuvwxyz"; //atribuindo o abcdario como uma frase pra selecionar as letras com indice dps
	for(int i=0; i<26; i++){ //transformar a string de texto ABCD em um vetor de characteres
		vetchar[i]= abcd[i];
		//cout<< vetchar[i];//cout pra teste
	}
	cout<< "Message: "; //leitura da mensagem
	cin>> in;
	cout<< "tamanho da mensagem: "<<in.length()<<"\n\n"; //Teste dnv
	cout<< "Key: ";
	cin>> key;
	//cout<< key + key<< " key + key before: \n\n"; //teste pra ver se a key repete
	for(int i=0;i<in.length();i++){
		pal = in[i];
			for(int k =0; k<26; k++){
				if (pal == abcd[k]){
					res = res + abcd[k];
					break;
				}
			}
		cout<< "pal: "<< pal<<"\n";
	}
	cout<<"res: "<<res<<"\n";
	
	
	cout<< "\n\n";
	system("PAUSE");
    return EXIT_SUCCESS;
}
