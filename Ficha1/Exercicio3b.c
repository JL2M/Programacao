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
        //1.4 Custo Combustivelp/ litro
        float custoCombustivel;

    // 2. Interagir com utilizador e pedir dados necessários
    printf("insira litros consumidos:");
    scanf("%f", &litrosConsumidos);

    printf("insira km's percorridos:");
    scanf("%f", &kmPercorridos);

    printf("insira o custo combustivel/litro:");
    scanf("%f", &custoCombustivel);
    
    // 3. Calcular o consumo aos 100km () x = litrosConsumidos / kmPercorridos*100)
   
    consumo= (litrosConsumidos/ kmPercorridos)*100;

    // 4. Calculo custi viagem ( x = litros consumidos aos 100km * custo combustivel)
    
    float custoViagem = consumo * custoCombustivel;

    // 5. Apresentar resultado consumo
    printf("Consumo aos 100km foi %f.1 litros e teve um custo de %f.2 euros", consumo, custoViagem);
}