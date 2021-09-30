#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <winbase.h>
#include <psapi.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>
#include<time.h>//necessário p/ função time()
#include <string.h>
#define max 100



void print_vetor(int vetor[],int n)
{

    for(int i=0;i<n;i++)
    {
        printf("%d ",vetor[i]);

    }

}

void gera_valores(int vetor[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        vetor[i] = rand() % 100;

    }




}


void swap(int *v1,int *v2)
{

     int aux; 
     aux = *v1;
     *v1 = *v2;
     *v2 = aux;    


}


void insertion_rec(int vetor[],int n)
{

    if(n <= 1)
    {
        return;
    }
    insertion_rec(vetor,n-1);


    int pivo = vetor[n-1]; //pivo
    int j = n-2;  // posicao a ser comparada



    while (j >= 0 && vetor[j] > pivo) //se o vetor[j] for maior que o pivo
    {
         vetor[j+1] = vetor[j]; // joga o valor pra frente comparando o pivo
        j--;
    }
    
    vetor[j+1] = pivo;



}




void select_rec(int vetor[],int n)
{   

    if(n == 0)
    {
        return;
    }


  
    for(int i=0;i<n;i++)
    {
        int menor = vetor[i],menor_pos=i;


        for(int j=i+1;j<n;j++) // 
        {
            if(menor > vetor[j]) //pos 0 com a 1
            {
                menor_pos = j; //posicao do menor
                menor = vetor[j];
            }


        }

        swap(&vetor[i],&vetor[menor_pos]);

       select_rec(vetor,n-1);




    }
    
   


}



void bubble_rec(int vetor[],int n)
{
    if(n == 0)
    {
        return;
    }


    for(int i=0;i<n;i++)
    {
            if(vetor[i] > vetor[i+1])
            {
                swap(&vetor[i],&vetor[i+1]);

            }


        
    }


    bubble_rec(vetor,n-1);


}




main()
{

int n=5;

int *vetor = (int*)malloc(n*sizeof(int)); //alocacao dinamica do vetor ->tratado como vetor comum


gera_valores(vetor,n);
print_vetor(vetor,n);
//select_rec(vetor,n);
//bubble_rec(vetor,n);
insertion_rec(vetor,n);
printf("\n");
print_vetor(vetor,n);



free(vetor);





}