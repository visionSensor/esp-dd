# esp-dd
![deauther detctor](https://github.com/visionSensor/esp-dd/assets/155329826/ea987371-9c48-4413-8e27-69ecb60c2fb7)
# !atencion¡
no confunda este proyecto con el "deauth detector",este no detecta ataques de desauntenticacion,mas bien detecta al dispositivo que los genera(deauther watch)
con este punto aclarado comenzemos :) .
# ¿que es esp-dd?:
esp-dd es un proyecto basado en esp32 capaz de detectar deauthers(desauntenticadores wifi) basados en el firmware:"esp8266_deauther"
# materiales:
esp32.     ¯\_(ツ)_/¯ asi de facil.....
# funcionamiento :^‿^
al encender su esp32,este escaneara ap(acces points) en busca de una red wifi llamada "pwned" si lo encuentra se encendera el led de la placa:
