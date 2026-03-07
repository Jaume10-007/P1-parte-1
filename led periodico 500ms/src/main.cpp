#include <Arduino.h>

// GPIO donde está conectado el LED
// En muchas ESP32 el LED integrado suele estar en el pin 2
#define LED_PIN 2

// Tiempo en milisegundos (500 ms = 0.5 s)
#define T 500

void setup() {
    // Configuramos el pin del LED como salida
    pinMode(LED_PIN, OUTPUT);

    // Inicializamos la comunicación serie a 115200 baudios
    Serial.begin(115200);
}

void loop() {
    // Encendemos el LED (nivel alto = 3.3V)
    digitalWrite(LED_PIN, HIGH);

    // Enviamos mensaje por el puerto serie
    Serial.println("ON");

    // Esperamos 500 ms
    delay(T);

    // Apagamos el LED (nivel bajo = 0V)
    digitalWrite(LED_PIN, LOW);

    // Enviamos mensaje por el puerto serie
    Serial.println("OFF");

    // Esperamos otros 500 ms
    delay(T);
}



