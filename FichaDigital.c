//Guardar Variables con vuestros datos y mostrarlos en pantalla.

void main ()
{
    // Variables
    int Edad;
    char Nombre[32];
    char Residencia[32];
    
    // Programa 
   
    printf("cual es tu edad ? \n");
    scanf("%d", &Edad);
    
    printf("cual es tu Nombre \n");
    scanf("%s", Nombre);
    
    printf("cual es tu residencia ? \n");
    scanf("%s", Residencia);
    
    printf("Tu nombre es:    %s \n ", Nombre);
    printf("Tu direccion es: %s \n ", Residencia);
    printf("Tu Edad es: %d      \n ", Edad );

    
    //Fin
    getchar();
    getchar();
    getchar();
    getchar();
    
 
}