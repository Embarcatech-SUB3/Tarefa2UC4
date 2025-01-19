#include "pico/stdlib.h"
#include <stdio.h>

#define GREEN_LED 11
#define BLUE_LED 12
#define RED_LED 13
#define BUZZER_A 21

void ligar_led_verde() {
    gpio_put(GREEN_LED, 1);
    gpio_put(BLUE_LED, 0);
    gpio_put(RED_LED, 0);
}
void ligar_led_azul() {
    gpio_put(BLUE_LED, 1);
    gpio_put(GREEN_LED, 0);
    gpio_put(RED_LED, 0);
}
void ligar_led_vermelho() {
    gpio_put(RED_LED, 1);
    gpio_put(BLUE_LED, 0);
    gpio_put(GREEN_LED, 0);
}
void ligar_todos() {
    gpio_put(GREEN_LED, 1);
    gpio_put(BLUE_LED, 1);
    gpio_put(RED_LED, 1);
}
void desligar_todos() {
    gpio_put(GREEN_LED, 0);
    gpio_put(BLUE_LED, 0);
    gpio_put(RED_LED, 0);
}
void acionar_buzzer() {
    gpio_put(BUZZER_A, 1);
    sleep_ms(2000);
    gpio_put(BUZZER_A, 0);
}

int main() {
    gpio_init(GREEN_LED);
    gpio_init(BLUE_LED);
    gpio_init(RED_LED);
    gpio_init(BUZZER_A);


    gpio_set_dir(GREEN_LED, GPIO_OUT);
    gpio_set_dir(BLUE_LED, GPIO_OUT);
    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_set_dir(BUZZER_A, GPIO_OUT);

    while(true){
        printf("[1] led verde \n");
        printf("[2] led azul \n");
        printf("[3] led vermelho \n");
        printf("[4] led branco (todos os leds) \n");
        printf("[5] desligar leds \n");
        printf("[6] buzzer \n");
        
        printf("O que deseja executar: \n");
        int resp;
        scanf("%d", resp);
        
        switch (resp){
            case 1:
                ligar_led_verde();
                printf("Led Verde ligado \n");
                sleep_ms(1000); 
            break;
            case 2:
                ligar_led_azul();
                printf("Led Azul ligado \n");
                sleep_ms(1000);
            break;
            case 3:
                ligar_led_vermelho();
                printf("Led Vermelho ligado \n");
                sleep_ms(1000);
            break;
            case 4:
                ligar_todos();
                printf("Todos os Leds ligados \n");
                sleep_ms(1000);
            break;
            case 5:
                desligar_todos();
                printf("Todos os Leds desligados \n");
                sleep_ms(1000);
            break;
            case 6:
                acionar_buzzer();
                printf("Buzzer ligado \n");
                sleep_ms(1000);
            break;
            default:
                printf("Opção inválida \n");
        }
    }
}

