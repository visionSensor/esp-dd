/**
 * 
deauther detector based in esp32
Author:VisionSensor
The code is based on the example "Wifi scan" for esp32
 */
#include "WiFi.h"//wifi library
void setup()
{
Serial.begin(115200);//init the serial comunicatión defined in 115200 baud
WiFi.mode(WIFI_STA);
WiFi.disconnect();
delay(100);
Serial.println("deauther detector");
delay(1000);
}
void loop()
{
    Serial.println("scan start");
    // WiFi.scanNetworks will return the number of networks found
    int n = WiFi.scanNetworks(0,0,0,10000,1);//WiFi.scanNetworks(turn asynchronous mode on or off,show hidden networks,active or passive scanning,max ms per chan,channel);
    Serial.println("scan done");
    if (n == 0) {
        Serial.println("no deauther found");
    } else {
        for (int i = 0; i < n; ++i) {
          if(WiFi.SSID(i)=="pwned"){
            //print "pwned" network characteristics
            Serial.print("ntwrk:");
            Serial.print(WiFi.SSID(i));
            Serial.print("--");
            Serial.print("rssi:");
            Serial.print(WiFi.RSSI(i));
            Serial.print("--");
            Serial.print("enc:");
            Serial.print((WiFi.encryptionType(i) == WIFI_AUTH_OPEN)?"open":"enc");
            Serial.print("--");
            Serial.print("ch:");
            Serial.print(WiFi.channel(i));
            delay(10);
          }
        }
    }
    Serial.println("");
    delay(1000);
}
