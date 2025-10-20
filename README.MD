# 🧩 TeaTouch

**TeaTouch** es un dispositivo de comunicación diseñado para ayudar a personas con Trastorno del Espectro Autista (TEA) a expresar sus necesidades básicas mediante pictogramas y botones físicos conectados a una aplicación móvil vía Bluetooth.

---

## 📘 Descripción del Proyecto

TeaTouch consiste en una **caja de comunicación con 6 botones**, cada uno asociado a un pictograma personalizable.  
Al pulsar un botón, el sistema envía una **notificación sonora y visual** a la aplicación móvil, permitiendo que el cuidador conozca la necesidad del usuario de forma rápida y sencilla.

Este proyecto se desarrolló como trabajo final del **2º Ciclo Formativo de Grado Básico en Informática** (2023/24).

---

## 🧠 Objetivo

Facilitar la comunicación entre personas con TEA y sus cuidadores mediante una herramienta simple, accesible, económica y efectiva.

---

## ⚙️ Características Principales

- 6 botones físicos con pictogramas intercambiables.  
- Conectividad Bluetooth con dispositivos móviles.  
- Notificaciones visuales y sonoras en la aplicación.  
- Caja fabricada en madera contrachapada y metacrilato.  
- Aplicación creada con **App Inventor**.  
- Control del hardware mediante **Arduino Mega 2560**.

---

## 🧰 Componentes Utilizados

**Hardware:**
- Placa Arduino Mega 2560  
- Módulo Bluetooth HC-05  
- Protoboard y cables  
- Resistencias de 1kΩ  
- Leds y zumbador  
- Botones de colores  
- Caja de madera contrachapada (5mm)  
- Pictogramas en metacrilato  
- Velcros y pegamento

**Software:**
- [ArduinoBlocks](https://arduinoblocks.com)  
- [App Inventor](https://appinventor.mit.edu)  
- [Tinkercad](https://www.tinkercad.com)  
- [SketchUp](https://www.sketchup.com)

---

## 🖥️ Funcionamiento

1. El usuario pulsa uno de los seis botones físicos.  
2. Arduino envía un mensaje a través del módulo Bluetooth.  
3. La app móvil recibe el dato y muestra qué botón fue presionado.  
4. Se activa un sonido y una notificación indicando la necesidad del usuario.

---

## 🧪 Proceso de Fabricación

1. Diseño del circuito y pruebas en Tinkercad.  
2. Programación en ArduinoBlocks.  
3. Creación del modelo 3D y corte láser de las piezas.  
4. Montaje físico de la caja.  
5. Desarrollo de la app móvil.  
6. Integración y testeo completo del sistema.

---

## 🧠 Equipo de Desarrollo

| Nombre | Rol |
|--------|------|
| **Pablo Gutiérrez** | Desarrollo App y diseño gráfico |
| **Roberto Carrascoso** | Coordinación, documentación y programación |
| **Iván Algaba** | Presupuesto y soporte técnico |
| **Geremy Ochoa** | Montaje electrónico y Bluetooth |
| **Sergio Paniagua** | Diseño físico y pictogramas |

---

## 💡 Agradecimientos

A la **Asociación Implica**, **Javier Enríquez**, **David Moreno**, **Víctor Ramos** y **Luis Padrino** por su ayuda y orientación durante el proyecto.

---

## 🧭 Licencia

Este proyecto se distribuye bajo la **licencia MIT**.  
Puedes usarlo, modificarlo y distribuirlo citando a los autores originales.
