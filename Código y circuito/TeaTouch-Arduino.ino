#include <SoftwareSerial.h>
#include "ABlocks_Button.h"
#include <ABLocks_TimerFreeTone.h>

SoftwareSerial bt_serial(16,17);
Button button_debounced_4(4,50);

Button button_debounced_5(5,50);

Button button_debounced_3(3,50);

Button button_debounced_7(7,50);

Button button_debounced_8(8,50);

Button button_debounced_9(9,50);

void fnc_bt_serial_namepin(String _name,String _pin){
	delay(2000);
	bt_serial.print(String("AT+NAME")+_name);
	delay(1000);
	bt_serial.print(String("AT+PIN")+_pin);
	delay(1000);
	while(bt_serial.available()>0)bt_serial.read();
	bt_serial.flush();
}

void setup()
{
  	pinMode(4, INPUT);
	pinMode(12, OUTPUT);
	pinMode(5, INPUT);
	pinMode(3, INPUT);
	pinMode(7, INPUT);
	pinMode(8, INPUT);
	pinMode(9, INPUT);

bt_serial.begin(9600);

	fnc_bt_serial_namepin(String("TeaTouch"),String("1234"));

}


void loop()
{

  	if (button_debounced_4.pressed()) {
  		bt_serial.println(String("BotonNegroPulsado"));
  		TimerFreeTone(12,880.0,350);
  	}

  	if (button_debounced_5.pressed()) {
  		bt_serial.println(String("BotonVerdePulsado"));
  		TimerFreeTone(12,880.0,350);
  	}

  	if (button_debounced_3.pressed()) {
  		bt_serial.println(String("BotonRojoPulsado"));
  		TimerFreeTone(12,880.0,350);
  	}

  	if (button_debounced_7.pressed()) {
  		bt_serial.println(String("BotonaAzulPulsado"));
  		TimerFreeTone(12,880.0,350);
  	}

  	if (button_debounced_8.pressed()) {
  		bt_serial.println(String("BotonAmarilloPulsado"));
  		TimerFreeTone(12,880.0,350);
  	}

  	if (button_debounced_9.pressed()) {
  		bt_serial.println(String("BotonCarnePulsado"));
  		TimerFreeTone(12,880.0,350);
  	}

}