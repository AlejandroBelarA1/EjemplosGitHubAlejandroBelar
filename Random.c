void main ()
{
    // Variables
    
    srand(time(0));
    // Programa 
    int variable=rand() % 2;
    int variable2=rand()% 10 +1;
    int variable3=rand();
    int variable4=rand();
    
    printf(" el tiempo es : %d \n" , time(0));
    printf("Tu numero entero random es: %d", variable);
    printf("\n"); 
    printf("Tu numero entero random es: %d", variable2);
    printf("\n");
    printf("Tu numero entero random es: %d", variable3);
    printf("\n");
    printf("Tu numero entero random es: %d", variable4);
    printf("\n");
    //Fin
    getchar();
    getchar();
}