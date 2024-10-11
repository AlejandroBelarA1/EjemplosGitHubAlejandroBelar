#include <stdio.h>
#include <unistd.h> 

void main ()
{
char Input[32];// Entrada String 
int Choice1;
int Choice11;
int Choice2;
printf("                                      Presiona la letra e para empezar el juego \n" );
scanf("%s",Input);

if(Input[0]=='e'){
    printf("                                     EL JUEGO HA EMPEZADO  \n \n");
    usleep(10000);
    printf("                                 -/-/-/-/-/-/-/-/-/-/-/-/-/-/ \n");
    usleep(10000);
    printf("                                 -/        ********       /-/ \n");
    usleep(10000);
    printf("                                 -/        * ** | **      /-/ \n");
    usleep(10000);
    printf("                                 -/        ***********    /-/ \n");
    usleep(10000);
    printf("                                 -/         *** *****     /-/ \n");
    usleep(10000);
    printf("                                 -/         *** ***       /-/ \n");
    usleep(10000);
    printf("                                 -/         *** ***       /-/ \n");
    usleep(10000);
    printf("                                 -/-/-/-/-/-/-/-/-/-/-/-/-/-/ \n");
    
    char str[]="                                 WELCOME TO LOST IN DA JUNGLA       ";
    
     for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
        fflush(stdout);  // Force the output to be printed immediately
        usleep(100000);   // Add the delay
        }
    printf("   \n");
    printf("   \n");
    printf("               Estas en la selva del Amazonas y no ves nada a lo lejos   \n" );
    usleep(20000);
    printf("               La naturaleza es frondoda y espesa, tienes que sobrevivir \n" );
    printf("               Ves la tierra y de repente aparece una serpiente de 20 KG  \n" );
    usleep(20000);
    printf("               En sus ojos se ve que quiere atacarte, es ella o tu        \n" );
   
    usleep(20000);
    printf("                                    ¿Que haces ? \n" );
    usleep (20000);
    printf("                 1. Corres tan rapido como te lo permitan tus piernas \n" );
    printf("                 2. Decides quedarte y enfrentar la serpiente.        \n" );
    
    scanf("%d",&Choice1); 
    system ("cls");
    
    if (Choice1==1){
        printf("                                      Te has alejado de la serpiente con gran velocidad y                 \n" );
        printf("                                      la serpiente se ha ido, pero te has tropezado con una               \n" );
        printf("                                      rama y te has roto el tobillo.  Tienes que hacer lo                 \n" );
        printf("                            necesario para no quedarte allí,  si no puedes ser  presa facil de un  Jaguar. \n" );
        printf("                                                              Selecciona.                       \n" );
        usleep(10000);
        printf("                           1. Arrastrarte con tus brazos sobre la tierra y grita por ayuda                  \n" );
        printf("                           2. Tirate al río mas cercano para nadar.                                         \n" );
        scanf("%d",&Choice11);
        
        if (Choice11==1){
            printf("                       Has depertador al Jaguar y al ver tu debilidad en el piso te        \n" );
            printf("                       ha fácilmente destrozado el estómago con sus patas,                 \n" );
            printf("                       falleces desangrado en la selva, nadie llora tu muerte y            \n" );
            printf("                                              NADIE TE RECUERDA                            \n" );
        }
        else if (Choice11==2){
            printf("                                        ¡Buena elección Broda !                             \n" );
            printf("                       Has podido entrar al agua,  un pescador te ha visto luchando         \n" );
            printf("                            y te invita a su lanchasu hija se enamora de ti                 \n" );
            usleep(10000);
        }
    }
    
    else if (Choice1==2){
        printf("                       Qué valiente ! Has decidido enfrentarte a la serpiente.     \n" );
        printf("                                La serpìente te tiene en sus ojos,                 \n" );
        printf("                        tienes una roca en el piso  o un cuchillo en tu cinturon   \n" );
        printf("                                              ¿Que eliges?                         \n" );
        usleep(10000);
        //
        printf("                        1. Roca en el piso                 \n" );
        printf("                        2.  Cuchillo en tu cinturon        \n" );
        scanf("%d",&Choice2);
        
        if (Choice2==1){
            printf("                      Has tardado mucho y la serpiente ha sido mas rapida que tu, .         \n" );
            printf("                       te ha mordido y ahora tienes una gangrena en la pierna.              \n" );
            printf("                      Finalmente mueres en la selva, ya que nadie vino a por ti             \n" );
            printf("                         te comes las lombrizes en tu lecho de muerte                       \n" );
        }
        else if(Choice2==2){
            printf("                       Has podido clavar el cuchillo a la serpiente y la has vencido,           \n" );
            printf("                       ahora puedes destriparla y ya tienes de comer, tienes la                 \n" );
            printf("                                 suficiente fuerza para seguir vivo.                            \n" );
            printf("                                                                                                \n" );
        }
        
        
    } 
    
    
} 
 





getchar();
getchar();
}
