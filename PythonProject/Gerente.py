import datetime

from Funcionario import Funcionario


class Gerente(Funcionario):
    def __init__(self, nome, data_contratacao, salario):
        super().__init__(nome, data_contratacao, salario)

    def aumentar_salario(self, salario, percentual):
        self.salario += salario * (percentual + (datetime.datetime.now().year - self.data_contratacao)/100)

    def mostrar_mensagem(self):
        print("Dados do Gerente:")
        print(self.nome)
        print(self.data_contratacao)
        print(self.salario)
