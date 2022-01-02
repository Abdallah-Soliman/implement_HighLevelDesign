


      /*REGISTERS FILE*/

#define TCCR0   *((volatile u8*)0x53)
#define TCNT0  *((volatile u8*)0x52)
#define OCR0    *((volatile u8*)0x5C)
#define TIMSK    *((volatile u8*)0x59)

#define SREG    *((volatile u8*)0x5F)


       /*OPERATION MODE*/

#define NORMAL_MODE  0
#define PHASE_CORRECT_MODE  1
#define CTC_MODE  2
#define FAST_PWM  3


       /*    TCCR0   */


#define CS00   0

#define CS01   1

#define CS02   2

#define WGM01  3

#define COM00  4

#define COM01  5

#define WGM00  6

#define FOC0   7


                  /*    TCCR0   */
#define  TOIEO  0

#define  OCIEO  1

               /*modes in FAST PWM*/

#define NON_INVERTED 1
#define INVERTED 0


                /*ENABEL=1 DISSABEL=0*/
#define ENABLE 1
#define DISABLE 1


                /*PRE SCALLER SELECT*/

#define NO_CLK_SOURCE  0
#define NO_PRESCALER  1
#define CLK_SOURCE_8  2
#define CLK_SOURCE_64  3
#define CLK_SOURCE_256  4
#define CLK_SOURCE_1024  5



                    /*inturrpts vector*/
void __vector_11(void) __attribute__((signal));
void __vector_10(void) __attribute__((signal));
