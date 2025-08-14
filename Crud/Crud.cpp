#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

struct Pessoa {
	string nome;
	char idade;
};


void Create(vector<Pessoa> & cadastro) {
	Pessoa p;
	cout << "qual o seu nome " << endl;
	getline(cin, p.nome);

	cout << "qual a sua idade " << endl;
	cin >> p.idade;

	cadastro.push_back(p);
	cout << "Pessoa cadastrada com sucesso!\n";

}

void read() {

}

void update() {

}

void Delete() {

}

int main() {
	vector<Pessoa> cadastro;
	Create (cadastro);

	return 0;
}





/* aqui está um exemplo de como validar um email usando regex
 ainda não está completo, mas já é um bom começo
const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
std::string email = "teste_email@dominio.com.br";

if (std::regex_match(email, pattern)) {
	std::cout << "Email válido\n";
}
else {
	std::cout << "Email inválido\n";
}*/