#include <iostream>
#include <vector>
#include "jogo_funcoes.h"
using namespace std;

//define funcoes

void greet()
{
    std::cout <<"=================\n";
    std::cout <<"JOGO DA FORCA\n";
    std::cout <<"=================\n";
    std::cout <<"Salve este merda da forca\n";
}

void mostra_erros(int erros)
{
    if (erros==0)
    {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
    }
    else if(erros==1)
    {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
    }
    else if (erros==2)
    {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";    
    }
    else if (erros==3)
    {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
    }
    else if (erros==4)
    {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
    }
    else if (erros==5)
    {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n"; 
    }
    else if (erros==6)
    {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";   
    }
    
}


void mostra_status(vector<char> errado, string resposta)
{
    cout<<"respostas erradas: \n";

    for(int i = 0; i<errado.size(); i++)
    {
        cout<<errado[i]<<" ";
    }

    cout<<"\nPalavra-chave: \n";

    for(int i = 0; i<resposta.length(); i++)
    {
        cout<<resposta[i]<<" ";
    }
}


void fim_jogo(string resposta, string palavrachave)
{
    if (resposta==palavrachave)
    {
        cout<<"Voce salvou esse BOSTA, PARABENS!!!";
    }
    else
    {
        cout<<"oh meudeus voce MATOU ESSE BOSTA!!!";
    }
}