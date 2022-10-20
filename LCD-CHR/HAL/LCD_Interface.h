#include "STD_TYPES"
#include "BIT_MATH.h"

/* dio*/
#include "DIO_INTERFACE.h"
#include "DIO_PRIVATE.h"

/*guard*/
#ifndef _LCD_INTERFACE.H
#define _LCD_INTERFACE.H
#define PORT_DATA   PORTA
#define PORT_CRTL   PORTB



/*CONFIG PARAMETER*/
#define FNSET 0x80
#define ZERO 0x00
#define ONE 0x01
#define INIT 0x20
#define DIS_MODE 0xc0
#define DIS_CLR 0x10
#define ENTRY MODE  0x60





#define   RS  PIN1
#define   RW  PIN2
#define   EN  PIN3
 /*ENABLE PININ LCD CONNECTED TO PIN3*/
 /*REG.SELECT RS IN LCD CONNECTED ON PIN */
 /*READ AND WRITE PIN IN LCD*/
 
 
 /* FUNCTIONS FOR LCD DRIVER
 FUNCTIONS TO SET MODEZ
 FUNCTIONS TO SET DATA OR CMD MODE
 */

void LCD_Init(void);
	/*hatakol dmaghna */
void LCD_voidWriteData(u8 copy_u8Data);

void LCD_voidWritecCmd(u8 copy_u8Cmd);

	
	
	
	void LCD_voidWritestring(u8*copy_pu8string)

	
	
	
	
	
	












#endiffb