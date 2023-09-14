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

        if (escolha == 1) { // informa o pedido feito, colhendo o valor 1 pois o tipo é inteiro !
            cout << "\nInforme o nome da pizza: ";
            cin >> nomePizza;
            pedidos.push(nomePizza); // pedidos.push(nomePizza); é usado para adicionar um novo pedido à fila.
            cout << "Pedido de " << nomePizza << " adicionado com sucesso!" << endl; // Nova linha adicionada.
            continue;
        }

        if (escolha == 2) { // informa que o pedido está sendo preparado, colhendo valor 2 pois o tipo é inteiro !
            if (pedidos.empty()) { // if (pedidos.empty()) verifica se não há pedidos pendentes
                cout << "\nNão há pedidos pendentes.\n";
            } else {
                cout << "\nPreparando os pedidos:\n";
                while (!pedidos.empty()) {
                    cout << pedidos.front() << endl; // pedidos.front() é usado para obter o próximo pedido a ser preparado
                    pedidos.pop(); //pedidos.pop(); é usado para remover o pedido que foi preparado.
                }
            }
        }

        if (escolha == 3) { //Verifica se o usuário escolheu a opção 3 no menu.
            cout << "\nPedido realizado\n"; //Se condição do if verdadeira (usuário escolhe 3) então a linha imprime a mensagem "Pedido realizado" no console.
            break; //O break é usado para sair do loop while, neste caso, ele faz com que o programa saia do loop infinito e encerrando o programa.
        }
    }

    return 0;
}

