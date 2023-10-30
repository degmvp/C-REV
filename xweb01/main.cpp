// entrada e sa�da em arquivos bin�rios
#include <iostream>
#include <fstream>
using namespace std;

struct familia
{
	char nome[20];  // nome do membro
	double ano;    // nasacimento
	double idade;  // idade
	char prof[20];  // profissao
};

int main()
{
	familia p;

	ifstream fin;     // cria objeto para leitura de arquivo
	fin.open("dados.dat", ios_base::in | ios_base::binary);

	if (fin.is_open())     // se o arquivo foi aberto sem erros
	{
	  	cout << "-------------------------------------------" << endl;
		cout << "Aqui esta o conteudo do arquivo:" << endl;
		cout << "-------------------------------------------" << endl;
		while (fin.read((char *)&p, sizeof(familia)))
		{
			cout << p.nome << " "
				<< p.ano   << " "
				<< p.idade << " "
				<< p.prof  << endl << endl;
		}
		fin.close();
	}

	// acrescenta mais dados

	cout << "deseja digitar?   s/n ?" << endl;
    string n;
    cin >> n;

    if (n == "n") {
        cout << "Exiting the program.\n";
        return 0;
    }

	ofstream fout;
	fout.open("dados.dat", ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cout << "Arquivo nao pode ser aberto!" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}

	cout << "\nNome do membro: ";
	cin >> p.nome;
	cout << "ano: ";
	cin >> p.ano;
	cout << "idade: ";
	cin >> p.idade;
	cout << "profissao: ";
	cin >> p.prof;

	fout.write((char *)&p, sizeof(familia));
	fout.close();

	fin.open("dados.dat", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
	  	cout << "-------------------------------------------" << endl;
		cout << "Aqui esta o conteudo do arquivo:" << endl;
		cout << "-------------------------------------------" << endl;
		while (fin.read((char *)&p, sizeof(familia)))
		{
			cout << p.nome << " "
				<< p.ano   << " "
				<< p.idade << " "
				<< p.prof  << endl << endl;
		}
		fin.close();
	}

	return 0;
}
