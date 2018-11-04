#include <WiFi.h>
#include <HTTPClient.h>

float x =20.5;
String ssid = "GACOVI";
String password = "46678983";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.println("Conectando");
  }
  Serial.println("Conectado");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(WiFi.status()==WL_CONNECTED){
    HTTPClient http;
    http.begin("https://api.myjson.com/bins/zdonm");
  }

}
