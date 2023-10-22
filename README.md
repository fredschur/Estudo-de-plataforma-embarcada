## **Manual de Referência do Raspberry Pi Pico W**

O Raspberry Pi Pico W é uma expansão sem fio do Raspberry Pi Pico, incorporando interfaces sem fio adicionais mantendo o mesmo fator de forma compacto. Este componente é especialmente designado para aplicações de Internet das Coisas (IoT) devido à sua capacidade de facilitar a comunicação entre computadores e a internet, além de ser capaz de atuar como um servidor web para controlar saídas digitais e receber dados de sensores.

### **Especificações:**

**WiFi:**
   - 802.11n (Banda Única 2.4 GHz).

**Bluetooth:**
   -  5.2.

**Dimensões:**
   - 21 x 51 mm

**Processador:**
   - Dual-core Arm Cortex-M0+

**Memória:**
   - 	264 kB e suporte para até 16 MB externo

**Segurança de Rede:**
   - WPA3

**Interface sem fio:**
   - Conectada via SPI ao microcontrolador RP2040

**GPIO:**
   - 26 pinos

**USB:**
   - 	1 x controlador e PHY USB 1.1

## **Prova de Conceito**

### Circuito

![Alt text](https://github.com/fredschur/Estudo-de-plataforma-embarcada/blob/main/img/circuito.png)

### Implementação

Utilizamos a linguagem de programação C++ junto com a IDE do Arduino para desenvolver o código. A placa de desenvolvimento está configurada para acionar o LED no pino 18.O código foi estruturado de forma a definir tempos específicos para pontos (DOT_TIME), traços (DASH_TIME) e os intervalos entre eles. Isso garante que a mensagem "SOS" seja transmitida de maneira precisa e reconhecível em Código Morse.

### Funcionamento

Ao executar o programa:

- O LED pisca três vezes rapidamente, representando a letra "S" em Morse (três pontos).
- Em seguida, pisca três vezes de forma prolongada, representando a letra "O" (três traços).
- Finalmente, retorna ao padrão de três piscadas rápidas para representar outra letra "S".
- 
Este ciclo é repetido continuamente.

### Conclusão

O Raspberry Pi Pico W é um microcontrolador robusto e multifuncional, destinado a atender as necessidades de desenvolvedores. Equipado com múltiplas interfaces, como GPIO, USB, Wi-Fi e Bluetooth, ele se destaca por sua capacidade de se comunicar com uma vasta gama de dispositivos e componentes.
