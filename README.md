# protolink-ex-dip-leds

Este firmware implementa un sistema de control básico para el microcontrolador PIC18F67K40 utilizando la librería Protolink. El sistema realiza la lectura síncrona de un DIP switch de 4 posiciones, refleja dicho estado en un arreglo de 4 LEDs y transmite la información en tiempo real a través de una interfaz UART para monitoreo remoto.

## Features:

- Lectura digital de 4 entradas (DIP Switch) con mapeo directo.

- Control de 4 salidas digitales (GPIO LEDs).

- Comunicación por UART: Envío de logs seriales con el estado del sistema.

- Temporización por polling configurada a 200 ms.


## GPIO

| Componente | Etiqueta | Pin PIC | Función |
| :--- | :--- | :--- | :--- |
| **DIP 0** | ADDR0 | PIN_F0 | Entrada Digital |
| **DIP 1** | ADDR1 | PIN_F1 | Entrada Digital |
| **DIP 2** | ADDR2 | PIN_F2 | Entrada Digital |
| **DIP 3** | ADDR3 | PIN_F3 | Entrada Digital |
| **LED 1** | GPIO_1 | PIN_B0 | Salida Digital |
| **LED 2** | GPIO_2 | PIN_B1 | Salida Digital |
| **LED 3** | GPIO_3 | PIN_E5 | Salida Digital |
| **LED 4** | GPIO_4 | PIN_E4 | Salida Digital |

## Cómo Compilar y Flashear

### Prerrequisitos
- IDE: MPLAB X
- Compilador: CCS C Compiler (PICC).
- Librerías: Archivos excore.h y bootloader.h incluidos en el directorio del proyecto.

### Pasos

- Abrir el proyecto .X en MPLAB X.
- Realizar un Clean and Build (icono del martillo y la escoba).
- Conectar el  bootloader de Protolink a la placa principal.
- Abrir la herramienta Galio Flash Tool con el hardware conectado
- Verificar el reconocimiento de la placa
- Poner en modo boot de forma manual presionando USER y luego RESET.
- Cargar el firmware (el archivo .hex)

## Evidencia

<img width="500" height="500" alt="image" src="https://github.com/user-attachments/assets/72c7d930-0e33-4aea-b03e-f69276ca6ce7" />

<img width="500" height="500" alt="image" src="https://github.com/user-attachments/assets/94f7a8dc-5752-4be8-a6f7-85f4b8a237fb" />

## Log de Terminal

<img width="555" height="611" alt="image" src="https://github.com/user-attachments/assets/3311608b-dfb3-44e4-a902-4702678d27cc" />

