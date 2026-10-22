
// GPIO 4 del Pulsador
int pinPulsador = 4;

// GPIO 2 del Led
int pinLed = 2;

void setup() {
  // Determinamos que el pin pulsador sera para recibir (SI usasemos "INPUT", en vez de "INPUT_PULLUP"´necesitariamos un cable en el 3.3v)
  pinMode(pinPulsador, INPUT_PULLUP);
  // Determinamos el pinm para salir
  pinMode(pinLed, OUTPUT);

  // Console.log
  Serial.begin(115200);
}

void loop() {
  // Para el console.log
  int estado = digitalRead(pinPulsador);

  // Console.log (1: si no se presiona el boton, 0: si se presiona)
  Serial.println(estado);

// Si la señal del pulsador es activa, se enciende el led
  if (estado == LOW) {
    digitalWrite(pinLed, HIGH);
  } 
  // De lo contrario se mantiene apagado
  else {
    digitalWrite(pinLed, LOW);
  }

// delay
  delay(200);
}
