#include <iostream>
#include <queue>

using namespace std;

int main()  {

queue <string> livros;

livros.push("O senhor dos Aneis");
livros.push("Harry Potter e a Pedra Filosofal");
livros.push("Harry Potter e o Cálice de Fogo");
livros.push("Harry Potter e a Câmara Secreta");
livros.push("Harry Portter e o Prisioneiro de Azkaban");


cout << "Tamanho da Fila:  "  << livros.size() << "\n";
cout << "Primeiro Livro:   "  << livros.front() << "\n";
cout << "Ultimo Livro:     "  << livros.back() << "\n\n";

return 0;
}




