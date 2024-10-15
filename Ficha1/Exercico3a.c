#include<stdio.h>
void main()
{
    // 1. Declarar as variaveis necessarias
        //1.1 Litros Consumidos
        float litrosConsumidos;
        //1.2 km percorridos
        float kmPercorridos;
        //1.3 consumo aos 100km
        float consumo;

    // 2. Interagir com utilizador e pedir dados necessários
    printf("insira litros consumidos:");
    scanf("%f", &litrosConsumidos);

    printf("insira km's percorridos:");
    scanf("%f", &kmPercorridos);

    // 3. Calcular o consumo aos 100km () x = litrosConsumidos / kmPercorridos*100)
    consumo= (litrosConsumidos/ kmPercorridos)*100;

    // 4. Apresentar resultado consumo
    printf("Consumo aos 100km: %.1f", consumo);


}