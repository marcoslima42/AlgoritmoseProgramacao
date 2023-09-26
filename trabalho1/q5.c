#include <stdio.h>
#include <windows.h>

int empate(){
    printf("\nEmpate ou nao foi computado nenhum voto, a votacao sera reiniciada... ");
    Sleep(2800);
    system("cls");
    return 1;
}

void menu(){
    printf("\n1. CANDIDATO 1");
    printf("\n2. CANDIDATO 2");
    printf("\n3. CANDIDATO 3");
    printf("\n4. NULO");
    printf("\n0. BRANCO");
    printf("\n-1. ENCERRAR\n\n");
}

int main(){
    int presentes=0, cad1=0, cad2=0, cad3=0, nulo=0, branco=0, voto=0, novamente=1;
    
    printf("\nELEICAO");

    while (novamente==1)
    {
        while(voto>=0){
            menu();
            scanf("%d", &voto);

            switch(voto){
            case 1:
                presentes++;
                cad1++;
                break;
            case 2:
                presentes++;
                cad2++;
                break;
            case 3:
                presentes++;
                cad3++;
                break;
            case 4:
                presentes++;
                nulo++;
                break;
            case 0:
                presentes++;
                branco++;
                break;
            default:
                printf("\nEleicao encerrada!");
                voto=-1;
            }
            system("cls");
        }
        
        novamente=0;
        //encontrar o maior
        int maior=cad1, qtdMaior=0;
        if(maior<cad2)
            maior=cad2;
        else if(maior<cad3)
            maior=cad3;
        //encontrar se ha empate
        if(maior==cad1)
            qtdMaior++;
        if(maior==cad2)
            qtdMaior++;
        if(maior==cad3)
            qtdMaior++;
        //acao quando ha empate
        if(qtdMaior!=1){
            novamente=empate();
            presentes=0, cad1=0, cad2=0, cad3=0, nulo=0, branco=0, voto=0;
        }
    }
    
    int vencedor=0;
        if(cad1>cad2 && cad1>cad3)
            vencedor=1;
        else if(cad2>cad1 && cad2>cad3)
            vencedor=2;
        else
            vencedor=3;

    printf("\nCandidato %d ganhou a eleicao", vencedor);
    printf("\nTiveram %d votos em branco", branco);
    printf("\nTiveram %d votos nulos", nulo);
    printf("\nCompareceram %d pessoa(s)", presentes);

    return 0;
}

