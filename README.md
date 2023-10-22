## **Manual de Referência do Raspberry Pi Pico W**

Desde o seu lançamento inicial, a família Raspberry Pi tem revolucionado o mundo dos microcomputadores, tornando a computação acessível e prática para milhões em todo o mundo. Dando continuidade a essa tradição de inovação, surge o Raspberry Pi Pico W, uma adição notável à família, especificamente no segmento de microcontroladores. Caracterizado pela sua versatilidade e poder, o Pico W não é apenas um mero microcontrolador, mas uma plataforma robusta que integra conectividade avançada, como Wi-Fi e Bluetooth, ao lado de interfaces padrão como GPIO e USB. Seja para iniciantes que desejam mergulhar no mundo do "faça você mesmo" ou para desenvolvedores experientes buscando uma solução compacta e eficaz, o Raspberry Pi Pico W promete ser um instrumento indispensável em projetos eletrônicos e de IoT.

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
