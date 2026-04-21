 #include <stdio.h>

char *unidades[] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
char *especiais[] = {
        "dez", "onze", "doze", "treze", "quatorze",
        "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"
    };
char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
char *centenas[] = {
    "", "cento", "duzentos", "trezentos", "quatrocentos",
    "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"
};

 int entrada() {
     int numero;
     printf("Digite um número de 0 a 999: ");
     scanf("%d", &numero);
        return numero;
 }
 void saida(int numero) {
      if (numero >= 0 && numero <= 9) {
        printf("%s\n",unidades[numero]);
      }
       else if (numero >= 10 && numero <= 19) {
        printf("%s\n",especiais[numero - 10]);
       }
       else if (numero >= 20 && numero <= 99) {
        int dezena = numero / 10;
        int unidade = numero % 10;

        if (unidade == 0) {
            printf("%s\n", dezenas[dezena]);
        } else {
            printf("%s e %s\n", dezenas[dezena], unidades[unidade]);
        }
    } else if (numero == 100) {
        printf("cem\n");
    } else if (numero >= 101 && numero <= 999) {
        int centena = numero / 100;
        int dezena = (numero % 100) / 10;
        int unidade = numero % 10;

        if (dezena == 0 && unidade == 0) {
            printf("%s\n", centenas[centena]);
        } else if (dezena == 0) {
            printf("%s e %s\n", centenas[centena], unidades[unidade]);
        } else if (dezena == 1) {
            printf("%s e %s\n", centenas[centena], especiais[unidade]);
        } else if (unidade == 0) {
            printf("%s e %s\n", centenas[centena], dezenas[dezena]);
        } else {
            printf("%s e %s e %s\n", centenas[centena], dezenas[dezena], unidades[unidade]);
        }
    }
        else {
            printf("Numero fora do intervalo permitido\n");
          }
        }

 
int main() {
    int numero = entrada();
    saida(numero);
    return 0;
}
