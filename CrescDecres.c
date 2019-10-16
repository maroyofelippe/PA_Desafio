#include <stdio.h>
int main()
{
    int n1, n2, ord, tipo;
    printf("Digite o primeiro numero:");
    scanf("%d", & n1);
    printf("Digite o segundo numero:");
    scanf("%d", & n2);
    printf("Digite a Ordem (1-Crescente / -1-Decrescente):");
    scanf("%d", & ord);
    printf("Digite o tipo do Intervalo (1-Aberto / 0-Fechado):");
    scanf("%d", & tipo);
    if (ord == 1)
    {
        /*Crescente*/
        if (tipo == 0)
        {
            /*Crescente + Fechado*/
            if (n1 < n2)
            {
                do
                {
                    printf("%d ", n1++);
                } while (n1 <= n2);
                
            }
            else
            {
                do
                {
                    printf("%d ", n2++);
                } while (n2 <= n1);
                
            }
        }
        else
        {
            /*Crescente + Aberto*/
            if ((n1-n2) == 1 || (n2-n1) == 1) 
            {
                printf("Não há numeros para exibir!!");
            }
            else
            {
                if (n1 < n2)
                {
                    n1++;                   
                    do
                    {
                        printf("%d ", n1);
                    } while (n2 > ++n1);                
                }
                else
                {
                    n2++;
                    do
                    {
                        printf("%d ", n2);
                    } while (++n2 < n1);                    
                }
            }
        }
    }
    else
    {
        /*Decrescente*/
        if (tipo == 0)
        {
            /*Decrescente + Fechado*/
            if (n1 < n2)
            {
                do
                {
                    printf("%d ", n2--);
                } while (n1 <= n2);                
            }
            else
            {
                do
                {
                    printf("%d ", n1--);
                } while (n1 >= n2);                
            }         
        }
        else
        {
            /*Decrescente + Aberto*/
            if ((n1-n2) == 1 || (n2-n1) == 1)
            {
                printf("Não ha numeros para exibir!");
            }
            else
            {
                if (n1 < n2)
                {
                    --n2;
                    do
                    {
                        printf("%d ", n2);
                    } while (--n2 > n1);                    
                }
                else
                {
                    --n1;
                    do
                    {
                        printf("%d ", n1);
                    } while (--n1 > n2);                    
                }
            }
        }
    }
    printf("\n");
}