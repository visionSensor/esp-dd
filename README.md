# cheap wifi deauthorizer detector(detector de desautorizadores wifi baratos)
> [!NOTE]
> Este proyecto se actualizo,ahora el codigo esta disponible,disculpen la demora.


 Conceptos previos:
Este proyecto usa un `esp32`,debido a su capacidad wifi,lo que le permite ser usado como como `escaner wifi`

¿Como funciona?

Un [`esp8266 deauther`](https://deauther.com/).,al iniciarse y durante su uso,envia tramas de baliza [`(beacon packets)`](https://en.wikipedia.org/wiki/Beacon_frame),que usan para anunciar su precencia a otros dispositivos que puedan interpretarla,como `los smartphones`.Que a diferencia de otros programas de analisis wifi,dan al usuario `una vista simple al usuario`de la informacion que esos paquetes de datos contienen.

![appel](https://cdsassets.apple.com/live/7WUAS350/images/ios/locale/es-mx/ios-17-iphone-15-pro-settings-wifi-crop.png)

creditos de la imagen a Appel.

El esp32 tambien puede hacerlo,y el codigo de arriba es la clave,aunque el codigo lo detecta,su efectividad es del 66%.
> Ejcutar el proyecto en su esp32:

1.Descarge el codigo `.ino`

2.Configure su placa esp32 en el arduino Ide
   
3.Presione el boton subir

4.Habra el monitor serie(115200 baudios),y disfrute

##extras:

[logo antiguo del proyecto](https://github.com/visionSensor/esp-dd/assets/155329826/ea987371-9c48-4413-8e27-69ecb60c2fb7)


