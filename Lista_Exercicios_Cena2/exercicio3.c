#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *voto = "";

    

}

int valido(char *voto){

    int contValido = 0;

    if(voto == "valido"){
        contValido += 1;
    }
    return contValido;
}

int nulo(char *voto){

    int contNulo = 0;

    if(voto == "nulo"){

        contNulo += 1;
    }
    return contNulo;
}

int branco(char *voto){

    int contBranco = 0;

    if(voto == "branco"){

        contBranco += 1;
    }
    return contBranco;
}
