#include <stdio.h>
 
int main() {

    int jogo,escolhadepeca,movimentotorreXY,casastorre,movimentoBispo,casasBispo,MovimentoRaiha,casasrainha;
    

    do{
        printf("qual peca vode quer mover\n");
        printf("1.Torre\n");
        printf("2.Bispo\n");
        printf("3.Rainha\n");
        scanf("%d",&escolhadepeca);

        switch (escolhadepeca)
        {
        case 1:
           

            printf("Voce quer Mover A Torre Verticalmente O horizontalmente\n");
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

         break;    
        case 2:    
            
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
         break;    
        case 3:
        
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



         break;
        }

        

        

        printf("Voce Quer Continuar?\n");
        printf("1.sim\n");
        printf("2.nao\n");
        scanf("%d",&jogo);



    }while (jogo == 1);
    

  


 return 0;
}