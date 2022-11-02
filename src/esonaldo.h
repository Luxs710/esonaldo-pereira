#pragma once
#include <iostream>
#include <vector>

class ednaldo{
    private:
        std::vector<std::string> nomes{"Birina", "Joao", "Beberrão", "Chico", "Melancia", "God"};

        //valor numerico
        std::vector<int> nomes_val{     0,         0,       0,         0,         0,       0};
        std::vector<std::string> nomes_str{ "0",  "0",       "0",     "0",      "0",      "0"};

        //valor com a posição de outra variavel
        std::vector<int> nomes_var{     0,         0,       0,         0,         0,       0};
        
        /*
            N -> modo de numero
            S -> modo de str
        */
        std::vector<std::string> nomes_tip{ "N",  "N",       "N",     "N",      "N",      "N"};

        bool cond_bool = true; //usado para executar os comandos com if

    public:
        //main loop
        void start(std::string inputln, int file);

        //usado para achar posição de elemento na array nomes
        int get_arr_pos(std::string inp); 

        //separa palavras de uma string e retorna um vetor
        std::vector<std::string> separar_pals(std::string inp);

        bool in_while = false;
        bool started_a_while = false;

};