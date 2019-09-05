//PINES
#define PIN_LDR A1
void setup() {
   //Inicializo puerto serie
  Serial.begin(9600);
}

void loop() {
  // Leer el valor del LDR cada 500ms y mostrarlo por el Serial Monitor y Serial Plotter
  int maximo = 0;
  int minimo = 1023;
  int sensorValue = analogRead(PIN_LDR A1);
  maximo = max(maximo, sensorValue);
  
  

}
