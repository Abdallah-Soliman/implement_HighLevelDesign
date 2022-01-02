
#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

                    /* DIO APIs deales with pins */
         void DIO_SetPinDirection(u8 PORT , u8 PIN , u8 DIRECTION);
         void DIO_SetPinValue(u8 PORT , u8 PIN , u8 VALUE);
         void DIO_TogPinValue(u8 PORT , u8 PIN);
         void DIO_TogPinDirection(u8 PORT , u8 PIN);
         u8 DIO_GetPinValue(u8 PORT,u8 PIN);

                     /* DIO APIs deales with ports */
        void DIO_SetPortDirection(u8 PORT , u8 DIRECTION);
        void DIO_SetPortValue(u8 PORT , u8 VALUE);
        void DIO_PULLUP(u8 PORT,u8 PIN);
        u8 DIO_GetPortValue(u8 PORT);




// DIO macros
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

/* pin direction*/
#define OUTPUT 1
#define INPUT  0

/* pin values*/
#define LOW  0
#define HIGH 1

/* Pin numbers*/
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7


#endif /* DIO_INTERFACE_H_ */
