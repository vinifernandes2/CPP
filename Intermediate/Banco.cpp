#include <iostream>
#include <string>

using namespace std;

class Conta {
    protected:
        string nomeCliente;
        int numero;
        double saldo;
    public:
        Conta(string nomeCliente="", int numero = 0, double saldo = 0.0);

        void sacar(double valor);
        void depositar(double valor);

        string getNomeCliente() { return nomeCliente; };
        int getNumero() { return numero; };
        double getSaldo() { return saldo; };

        void setNomeCliente(string nomeCliente) { this->nomeCliente = nomeCliente; };
        void setNumero(int numero) { this->numero = numero; };
        void setSaldo(double saldo) { this->saldo = saldo; };

        double total() { return saldo; };
};

Conta::Conta(string nome, int num, double saldo){
    setNomeCliente(nome);
    setNumero(num);
    setSaldo(saldo);
}

void Conta::sacar(double valor){
    if(valor > 0 && valor <= saldo){
        saldo -= valor;
    }
    else {
        cout << "\nErro: Saldo insuficiente!" << endl;
    }
}

void Conta::depositar(double valor){
    if(valor > 0){
        saldo += valor;
    }
    else {
        cout << "\nErro: O valor de deposito deve ser positivo!" << endl;
    }
}

class ContaCorrente : public Conta {
    protected:
        double salario;
        double limite;

    public:
        ContaCorrente(string nomeCliente="", int numero = 0, double saldo = 0.0, double salario = 0.0);

        void definirLimite();

        double getSalario() { return salario; };
        double getLimite() { return limite; };

        void setSalario(double salario) { this->salario = salario; };
        double total() { return saldo + limite; };
};

ContaCorrente::ContaCorrente(string n, int num, double saldo, double salario) : Conta(n, num, saldo){
    setSalario(salario);
    definirLimite();
}

void ContaCorrente::definirLimite(){
    limite = 2 * salario;
}

class ContaPoupanca : public Conta {
    protected:
        double taxaRendimento;
        int variacao;

    public:
        ContaPoupanca(string nomeCliente="", int numero = 0, double saldo = 0.0, double taxaRendimento = 0.006, int variacao = 51);

        double render();

        double getTaxaRendimento() { return taxaRendimento; };
        int getVariacao() { return variacao; };

        void setTaxaRendimento(double taxaRendimento) { this->taxaRendimento = taxaRendimento; };
        void setVariacao(int variacao) { this->variacao = variacao; };
};

ContaPoupanca::ContaPoupanca(string n, int num, double saldo, double taxaRendimento, int variacao) : Conta(n, num, saldo){
    setTaxaRendimento(taxaRendimento);
    setVariacao(variacao);
}

double ContaPoupanca::render(){
    double saldoAnterior = getSaldo();
    if(getVariacao() == 51){
        setSaldo(saldoAnterior + (saldoAnterior * taxaRendimento));
    }
    else if(getVariacao() == 1){
        setSaldo(saldoAnterior + (saldoAnterior * (taxaRendimento + 0.005)));
    }

    return getSaldo();
}

class ContaEspecial : public ContaCorrente {
    public:
        ContaEspecial(string nomeCliente="", int numero = 0, double saldo = 0.0, double salario = 0.0);

        void definirLimite();
};

ContaEspecial::ContaEspecial(string n, int num, double saldo, double salario) : ContaCorrente(n, num, saldo, salario){
    definirLimite();
}

void ContaEspecial::definirLimite(){
    limite = 4 * salario;
}

int main(void){
    string nome;
    int num;
    double salario;
    double deposito;
    double saque;

    // Conta Corrente
    cout << "Digite os dados da Conta Corrente:" << endl;
    cout << "Nome do cliente: ";
    getline(cin, nome);
    cout << "Numero da conta: ";
    cin >> num;
    cout << "Salario: ";
    cin >> salario;
    cout << "Deposito: ";
    cin >> deposito;
    cout << "Saque: ";
    cin >> saque;
    cin.ignore();  // Limpa o buffer de entrada

    ContaCorrente *conta = new ContaCorrente(nome, num, 0, salario);
    cout << "\nConta Corrente de " << conta->getNomeCliente() << ", CC: " << conta->getNumero() << ", Salario: R$ " << conta->getSalario() << endl;
    conta->depositar(deposito);
    conta->sacar(saque);
    cout << "Saldo total disponivel: R$ " << conta->total() << endl;

    // Conta Especial
    cout << "\nDigite os dados da Conta Especial:" << endl;
    cout << "Nome do cliente: ";
    getline(cin, nome);
    cout << "Numero da conta: ";
    cin >> num;
    cout << "Salario: ";
    cin >> salario;
    cout << "Deposito: ";
    cin >> deposito;
    cout << "Saque: ";
    cin >> saque;
    cin.ignore();  // Limpa o buffer de entrada

    ContaEspecial *contaEspecial = new ContaEspecial(nome, num, 0, salario);
    cout << "\nConta Especial de " << contaEspecial->getNomeCliente() << ", CC: " << contaEspecial->getNumero() << ", Salario: R$ " << contaEspecial->getSalario() << endl;
    contaEspecial->depositar(deposito);
    contaEspecial->sacar(saque);
    cout << "Saldo total disponivel: R$ " << contaEspecial->total() << endl;

    // Conta Poupança
    cout << "\nDigite os dados da Conta Poupanca:" << endl;
    cout << "Nome do cliente: ";
    getline(cin, nome);
    cout << "Numero da conta: ";
    cin >> num;
    cout << "Deposito: ";
    cin >> deposito;
    cout << "Saque: ";
    cin >> saque;
    cin.ignore();  // Limpa o buffer de entrada

    ContaPoupanca *contaPoupanca = new ContaPoupanca(nome, num, 0);
    cout << "\nConta Poupanca de " << contaPoupanca->getNomeCliente() << ", CC: " << contaPoupanca->getNumero() << endl;
    contaPoupanca->depositar(deposito);
    contaPoupanca->sacar(saque);
    cout << "Saldo total disponivel (com rendimento): R$ " << contaPoupanca->render() << endl;

    return 0;
}
