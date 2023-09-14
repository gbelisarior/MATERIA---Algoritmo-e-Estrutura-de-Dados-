#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> pedidos;
    int escolha;
    string nomePizza;

    while (true) {
        cout << "\nBem vindo a casa da Pizza, aqui esta o MENU\n";
        cout << "1. Inserindo pedido\n";
        cout << "2. Preparar todos os pedidos\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        if (escolha == 1) { // informa o pedido feito, colhendo o valor 1 pois o tipo � inteiro !
            cout << "\nInforme o nome da pizza: ";
            cin >> nomePizza;
            pedidos.push(nomePizza); // pedidos.push(nomePizza); � usado para adicionar um novo pedido � fila.
            cout << "Pedido de " << nomePizza << " adicionado com sucesso!" << endl; // Nova linha adicionada.
            continue;
        }

        if (escolha == 2) { // informa que o pedido est� sendo preparado, colhendo valor 2 pois o tipo � inteiro !
            if (pedidos.empty()) { // if (pedidos.empty()) verifica se n�o h� pedidos pendentes
                cout << "\nN�o h� pedidos pendentes.\n";
            } else {
                cout << "\nPreparando os pedidos:\n";
                while (!pedidos.empty()) {
                    cout << pedidos.front() << endl; // pedidos.front() � usado para obter o pr�ximo pedido a ser preparado
                    pedidos.pop(); //pedidos.pop(); � usado para remover o pedido que foi preparado.
                }
            }
        }

        if (escolha == 3) { //Verifica se o usu�rio escolheu a op��o 3 no menu.
            cout << "\nPedido realizado\n"; //Se condi��o do if verdadeira (usu�rio escolhe 3) ent�o a linha imprime a mensagem "Pedido realizado" no console.
            break; //O break � usado para sair do loop while, neste caso, ele faz com que o programa saia do loop infinito e encerrando o programa.
        }
    }

    return 0;
}

