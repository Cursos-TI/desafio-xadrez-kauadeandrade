#include <stdio.h>


void torre(int movimentotorreXY,int casastorre){
    printf("Como Voce Quer Mover A Torre\n");
    printf("1.vertical\n");
    printf("2.Horizontal\n");
    scanf("%d",&movimentotorreXY);

    printf("Quantas Casas Voce Quer Mover (1 a 5)\n");
    scanf("%d",&casastorre);


    if ("movimentotorreXY = 1")
    {
        printf("Torre Se Moveo %d casas na Vertical\n",casastorre);    
    }else
    {
        printf("Torre Se Moveo %d casas na Horizontal\n",casastorre);
    } 
}

void bispo(int movimentoBispo,int casasBispo){
    printf("Como Voce Quer Mover O Bispo\n");
    printf("1.Cima Esquerda\n");
    printf("2.Baixo Esquerda\n");
    printf("3.Cima direita\n");
    printf("4.Cima direita\n");
    scanf("%d",&movimentoBispo);

    printf("Quantas Casas Voce Quer Mover (1 a 5)\n");
    scanf("%d",&casasBispo); 

    switch (movimentoBispo)
    {
    case 1:

        printf("O Bispo Moveu %d para o nordeste\n",casasBispo);    
     
     break;

    case 2:

     printf("O Bispo Moveu %d para o sueste\n",casasBispo); 
     
     break;

    case 3:

     printf("O Bispo Moveu %d para o noroeste\n",casasBispo); 
     
     break;
     
    case 4:

     printf("O Bispo Moveu %d para o suroeste\n",casasBispo); 
     
     break;
    }
}
void rainha(int MovimentoRaiha,int casasrainha){
    printf("Como Voce Quer Mover A Rainha\n");
    printf("1.Cima\n");
    printf("2.baixo\n");
    printf("3.Esquerda\n");
    printf("4.Direita\n");
    printf("5.Cima Esquerda\n");
    printf("6.Baixo Esquerda\n");
    printf("7.Cima direita\n");
    printf("8.Cima direita\n");
    scanf("%d",&MovimentoRaiha);

    printf("Quantas casa Voce Quer Mover A Rainha (1 a 8)\n");
    scanf("%d",&casasrainha);

    switch (MovimentoRaiha)
    {
    case 1:

        printf("a Rainha se moveu %d casas para cima\n",casasrainha);

     break;

    case 2:

        printf("a Rainha se moveu %d casas para baixo\n",casasrainha);

     break;

    case 3:

        printf("a Rainha se moveu %d casas para esquerda\n",casasrainha);

     break;

    case 4:

        printf("a Rainha se moveu %d casas para direita\n",casasrainha);

     break;

    case 5:

        printf("a Rainha se moveu %d casas para o nordeste\n",casasrainha);

     break;
     
    case 6:

        printf("a Rainha se moveu %d casas para o sueste\n",casasrainha);

     break;
     
    case 7:

        printf("a Rainha se moveu %d casas para o noroeste\n",casasrainha);

     break;
     
    case 8:

        printf("a Rainha se moveu %d casas para o suroeste\n",casasrainha);

     break; 
    }
}
void cavalo(int MovimentoCavalo1,int casascavalo,int MovimentoCavalo2){

    printf("Como Voce Quer Mover O Cavalo\n");
    printf("1.Cima\n");
    printf("2.baixo\n");
    printf("3.Esquerda\n");
    printf("4.Direita\n");
    scanf("%d",&MovimentoCavalo1);

    printf("Quantas casa Voce Quer Mover O Cavalo (1 a 3)\n");
    scanf("%d",&casascavalo);

    printf("o Cavalo se moveu %d casas para %d\n",casascavalo,MovimentoCavalo1);

    if (casascavalo == 3)
    {
        printf("Para Qual direcao Voce Quer Mover O Cavalo na terceira casa\n");
        switch (MovimentoCavalo1)
        {
        case 1:
            printf("1.Esquerda\n");
            printf("2.Direita\n");
            scanf("%d",&MovimentoCavalo2);
            if (MovimentoCavalo2 == 1)
            {
                printf("o Cavalo se moveu 3 casas, 2 para cima e 1 para esquerda\n");
            }else
            {
                printf("o Cavalo se moveu 3 casas, 2 para cima e 1 para direita\n");
            }
            
         break;
        case 2:
            printf("1.Esquerda\n");
            printf("2.Direita\n");
            scanf("%d",&MovimentoCavalo2);
            if (MovimentoCavalo2 == 1)
            {
                printf("o Cavalo se moveu 3 casas, 2 para baixo e 1 para esquerda\n");
            }else
            {
                printf("o Cavalo se moveu 3 casas, 2 para baixo e 1 para direita\n");
            }
            
         break;
        case 3:
            printf("1.cima\n");
            printf("2.baixo\n");
            scanf("%d",&MovimentoCavalo2);
            if (MovimentoCavalo2 == 1)
            {
                printf("o Cavalo se moveu 3 casas, 2 para esquerda e 1 para cima\n");
            }else
            {
                printf("o Cavalo se moveu 3 casas, 2 para esquerda e 1 para baixo\n");
            }
            
         break;
        case 4:
            printf("1.cima\n");
            printf("2.baixo\n");
            scanf("%d",&MovimentoCavalo2);
            if (MovimentoCavalo2 == 1)
            {
                printf("o Cavalo se moveu 3 casas, 2 para direita e 1 para cima\n");
            }else
            {
                printf("o Cavalo se moveu 3 casas, 2 para direita e 1 para baixo\n");
            }

         break;   
        }
    }



}




int main() {

    int jogo,escolhadepeca,movimento,casas,movimento1,movimento2;
    

    do{
        printf("qual peca vode quer mover\n");
        printf("1.Torre\n");
        printf("2.Bispo\n");
        printf("3.Rainha\n");
        printf("4.Cavalo\n");
        scanf("%d",&escolhadepeca);

        switch (escolhadepeca)
        {
        case 1:
           

            torre(movimento,casas);

         break;    
        case 2:    
            
            bispo(movimento,casas);    

         break;    
        case 3:
        
            rainha(movimento,casas);


         break;
        case 4:
        
            cavalo(movimento1,casas,movimento2);


         break; 
        }

        

        

        printf("Voce Quer Continuar?\n");
        printf("1.sim\n");
        printf("2.nao\n");
        scanf("%d",&jogo);



    }while (jogo == 1);
    

  


 return 0;
}