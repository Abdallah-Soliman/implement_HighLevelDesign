#ifndef _BIT_MATH_
#define _BIT_MATH_


#define SET_BIT(REG,BIT_ID)  REG=REG|(1<<BIT_ID)
#define CLEAR_BIT(REG,BIT_ID)  REG=REG&(~(1<<BIT_ID))
#define GET_BIT(REG,BIT_ID)  REG&(1<<BIT_ID)
#define togel_BIT(REG,BIT_ID)  REG=REG^(1<<BIT_ID)



#endif