
#include "STD_TYPES.h"

#include"timer0_privet.h"

#include "Timer_config.h"



void Timer0_Voidint(void)
{
	/* TIMER0_SELECT_MODE*/

	#if TIMER0_SELECT_MODE == NORMAL_MODE

	   /*SELECT NORMALMOD (0V)*/

			
	#elif TIMER0_SELECT_MODE ==FAST_PWM

	
		        #if  TIMER0_FAST_PWM_selection == NON_INVERTED
	                    
	                     
			     #elif  TIMER0_FAST_PWM_selection == INVERTED
	                    
	            
	              #endif

	#elif TIMER0_SELECT_MODE ==CTC_MODE
	    	        

	#elif TIMER0_SELECT_MODE == PHASE_CORRECT_MODE
	    	     
    #else
         #error    "Wrong TIMER order"
	    #endif

#if TIMER0_PRESCALER_SELECTION == NO_CLK_SOURCE
	

#elif TIMER0_PRESCALER_SELECTION == NO_PRESCALER


#elif TIMER0_PRESCALER_SELECTION == CLK_SOURCE_8


#elif TIMER0_PRESCALER_SELECTION == CLK_SOURCE_64



#elif TIMER0_PRESCALER_SELECTION ==  CLK_SOURCE_256



#endif

	    /*OVER FLOW INTURRPT*/
#if TIMER0_OVF_INTURRPTS == DISABLE
	  
#elif  	 TIMER0_OVF_INTURRPTS == ENABLE


#endif

}

void Timer0_VoidintDutyCycle(u8 Copy_Duty){
     /*put duty in pwm register */
	       OCR0=Copy_Duty;
}



