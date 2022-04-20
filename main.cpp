#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <errno.h>


using namespace std;


int main(int argc, char *argv[]) {

    fstream arq("/home/wagner/CLionProjects/2022_1/separando_substrings_fila/texto.txt");

    if(! arq.is_open()){
        perror("Erro ao abriri o arquivo");
        return errno;
    }

    string sep = " ,";
    string linha;

    while(getline(arq, linha)){
        while(true) {

            int pos1 = linha.find_first_of(sep);



        }
    }






}
