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


    queue<string> palavra;


    string sep = " ,";
    string linha;


    while(getline(arq, linha)){
        int pos=0;
       while(pos != string::npos) {
           pos = linha.find_first_of(sep);
           palavra.push(linha.substr(0,pos));
           linha.erase(0,pos+1);
           }
       }
}
