#include <ESP8266WiFi.h> 
#include <ESP8266WebServer.h> 
#include <WiFiClient.h> 
 
const char *ssid = "ESP8266"; 
const char *password = ""; 
const int ledPin = D4; 
 
ESP8266WebServer server(80); 
 
int state = LOW; 
 
void toggleLED() { 
 state = state == HIGH ? LOW : HIGH; 
 digitalWrite(ledPin, state); 
 server.send(200, "text/plain", "PIN " + String(ledPin) + " is now " + String(state)); 
} 
 
void setup() { 
 Serial.begin(9600); 
 pinMode(ledPin, OUTPUT); 
 digitalWrite(ledPin, state); 
 Serial.println("WIFI SSID is " + String(ssid)); 
 WiFi.softAP(ssid, password); 
 server.on("/", toggleLED); 
 server.begin(); 
 Serial.println("IP is " + String(WiFi.softAPIP())); 
} 
 
void loop() { 
 server.handleClient(); 
} 
