void swap(int *v1,int *v2)
{

     int aux; 
     aux = *v1;
     *v1 = *v2;
     *v2 = aux;    


}



main()
{

int v1=5,v2=7;


swap(&v1,&v2);


printf("%d %d",v1,v2);



}