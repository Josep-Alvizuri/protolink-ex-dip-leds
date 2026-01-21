#include "excore.h"
#include "bootloader.h"
#include <stdio.h>
#include <stdlib.h>

void main(void) {
    // Inicialización de la librería Protolink (configura UART y pines)
    protolink_io_init();
    
    // Variables
    int1 s0, s1, s2, s3;

    while(TRUE) {
        // DIP switch
        s0 = input(ADDR0);
        s1 = input(ADDR1);
        s2 = input(ADDR2);
        s3 = input(ADDR3);

        // LEDS
        output_bit(GPIO_1, s0);
        output_bit(GPIO_2, s1);
        output_bit(GPIO_3, s2);
        output_bit(GPIO_4, s3);

        // Mensaje por UART
        // Formato: DIP=3210 (en binario)
        printf("DIP=%u%u%u%u | LED=%u%u%u%u\r\n", 
                (int)s0, (int)s1, (int)s2, (int)s3, 
                (int)s0, (int)s1, (int)s2, (int)s3);

        //Pollin de 200ms
        delay_ms(200);
    }
}