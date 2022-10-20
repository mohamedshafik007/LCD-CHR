
/*
include hal layer 
         dio layer 
		 library
		 */
		 #include "LCD_interface.h"
		 
		 #avr<util>delay
		 
		 
		 #include "STD_TYPES"
#include "BIT_MATH.h"

/* dio*/
#include "DIO_INTERFACE.h"
#include "DIO_PRIVATE.h"
/*implementation file */

void LCD_Init(void){
	_delay_ms(50)
	 Dio_voidsetPortvalue(PORT_DATA,0b00100000);	
	DIO_voidSetPinValue(PORT_CRTL,RS,LOW);
	     DIO_voidSetPinValue(PORT_CRTL,RW,LOW);
		 /*function set*/
      LCD_voidSendCmd(INIT_VAL);
	  LCD_voidSendCmd(INIT_VAL);
	  LCD_voidSendCmd(FUNSET);
	  _delay_ms(1);
	  		 /*display on off*/

	  LCD_voidSendCmd(ZERO);
	  LCD_voidSendCmd(DIS_MODE);
	  _delay_ms(1);
	  		 /*display clear */

	  LCD_voidSendCmd(ZERO);
	  LCD_voidSendCmd(DIS_CLR);
_delay_ms(2);
		 /*entry mode set*/

  LCD_voidSendCmd(ZERO);
	  LCD_voidSendCmd(ENTRY_MODE);
_delay_ms(2);

	  


}
void LCD_voidWriteData(u8 copy_u8Data){
	/*
	rs high 
	rw low 
	*/
	 DIO_voidSetPinValue(PORT_CRTL,RS,HIGH);
	 DIO_voidSetPinValue(PORT_CRTL,RW,LOW);

	
	
}


/*LATCH ENABLE PIN*/



	     DIO_voidSetPinValue(PORT_CRTL,EN,HIGH);
_delay_ms(2)

	     DIO_voidSetPinValue(PORT_CRTL,EN,LOW);
_delay_ms(2)


void LCD_voidSendCmd(u8 copy_u8Cmd){
		 DIO_voidSetPinValue(PORT_CRTL,RS,LOW);
	     DIO_voidSetPinValue(PORT_CRTL,RW,LOW);

	
	
	
}
	     DIO_voidSetPinValue(PORT_CRTL,copy_u8cmds);
		 
		 
		      DIO_voidSetPinValue(PORT_CRTL,EN,HIGH);
_delay_ms(2)

	     DIO_voidSetPinValue(PORT_CRTL,EN,LOW);
_delay_ms(2)

void LCD_voidWritestring(u8*copy_pu8string){
	
	while (copy_pu8string!='\0'){
		LCD_voidWriteData(copy_pu8string);
		copy_pu8string++;
		
		
		
		
	}
	
	
	
	
	
	
}
