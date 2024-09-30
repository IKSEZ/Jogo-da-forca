#include <iostream>
#include <vector>
#include "jogo_funcoes.h"
using namespace std;
int main()
{
    greet();

    string palavrachave = "macaco";
    string resposta = "______";
    int erros = 0;
    vector<char> errado;
    bool tentativa = false;
    char letra;
    
    while (resposta!=palavrachave && erros < 7)
       {
        mostra_erros(erros);
        mostra_status(errado, resposta); 

        cout<<"\n\nDigite uma letra: ";
        cin>>letra;
        
        for(int i = 0; i<palavrachave.length(); i++)
        {
         if(letra==palavrachave[i])
         {
          resposta[i] = letra;
          tentativa = true;
         }
        }
        if (tentativa)
        {
            cout<<"\nCorreto!\n";
        }
        else
        {
            cout<<"\nIncorreto! Outra parte desse bosta foi adicionado!!\n";
            errado.push_back(letra);
            erros++;
        }
        tentativa = false;
       }
    
        fim_jogo(resposta, palavrachave);
        return 0;
}
