/*inclede all liberary files*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#inclede<util>delay



/*include all driver files*/
#include "DIO_Private.h"
#include "DIO_Interface.h"
#include "LCD_interface.h"

int main(){
	/*char name[]={"s","h","a","f","i","k"};
	 void Lcd_voidInit*/
	 DIO_voidSetPinDir(PORT_CTRL,RS,OUTPUT);
	 DIO_voidSetPinDir(PORT_CTRL,RW,OUTPUT);
	 DIO_voidSetPinDir(PORT_CTRL,EN,OUTPUT);

	
		 DIO_voidSetPortDir(PORT_DATA,OUTPUT);
		 
		 u8*name_var[]="your name";
Lcd_init();
while(1){
	/*program to write ur name */
		void LCD_voidWritestring(name_var);

	/*char name[]={"s","h","a","f","i","k"};*/
	 
	
	
	
	
	
}
	
	
	
	
return 0;
}
