/*
 * timers_registers.h
 *
 *
 *      Author: Bishoy Nabil
 */

#ifndef TIMERS_REGISTERS_H_
#define TIMERS_REGISTERS_H_

/* Timer 0 Registers */

#define TCCR0_REGISTER  *( ( volatile uint8_t* ) 0x53 )
#define TCNT0_REGISTER *( ( volatile uint8_t* ) 0x52 )
#define OCR0_REGISTER   *( ( volatile uint8_t* ) 0x5C )

/* Timer 1 Registers */

#define TCNT1H_REGISTER *( ( volatile uint8_t* ) 0x4D )
#define TCNT1L_REGISTER *( ( volatile uint8_t* ) 0x4C )
#define TCNT1_REGISTER  *( ( volatile uint16_t* ) 0x4C )
#define TCCR1A_REGISTER *( ( volatile uint8_t* ) 0x4F )
#define TCCR1B_REGISTER *( ( volatile uint8_t* ) 0x4E )
#define OCR1A_REGISTER  *( ( volatile uint16_t* ) 0x4A )
#define OCR1AH_REGISTER *( ( volatile uint8_t* ) 0x4B )
#define OCR1AL_REGISTER *( ( volatile uint8_t* ) 0x4A )
#define OCR1B_REGISTER  *( ( volatile uint16_t* ) 0x48 )
#define OCR1BH_REGISTER *( ( volatile uint8_t* ) 0x49 )
#define OCR1BL_REGISTER *( ( volatile uint8_t* ) 0x48 )
#define ICR1_REGISTER   *( ( volatile uint16_t* ) 0x46 )
#define ICR1H_REGISTER  *( ( volatile uint8_t* ) 0x47 )
#define ICR1L_REGISTER  *( ( volatile uint8_t* ) 0x46 )


/* Timer 2 Registers */

#define TCCR2_REGISTER  *( ( volatile uint8_t* ) 0x45 )
#define TCNT2_REGISTER  *( ( volatile uint8_t* ) 0x44 )
#define OCR2_REGISTER   *( ( volatile uint8_t* ) 0x43 )

#define TIMSK_REGISTER  *( ( volatile uint8_t* ) 0x59 )
#define TIFR_REGISTER   *( ( volatile uint8_t* ) 0x58 )


/* TCCR0 */
#define FOC0    7
#define WGM00   6
#define COM01   5
#define COM00   4
#define WGM01   3
#define CS02    2
#define CS01    1
#define CS00    0

/* TCCR2 */
#define FOC2    7
#define WGM20   6
#define COM21   5
#define COM20   4
#define WGM21   3
#define CS22    2
#define CS21    1
#define CS20    0

/* TCCR1A */
#define COM1A1  7
#define COM1A0  6
#define COM1B1  5
#define COM1B0  4
#define FOC1A   3
#define FOC1B   2
#define WGM11   1
#define WGM10   0

/* TIMSK */
#define OCIE2   7
#define TOIE2   6
#define TICIE1  5
#define OCIE1A  4
#define OCIE1B  3
#define TOIE1   2
#define OCIE0   1
#define TOIE0   0

/* TIFR */
#define OCF2    7
#define TOV2    6
#define ICF1    5
#define OCF1A   4
#define OCF1B   3
#define TOV1    2
#define OCF0    1
#define TOV0    0

/* TCCR1B */
#define ICNC1   7
#define ICES1   6
/* bit 5 reserved */
#define WGM13   4
#define WGM12   3
#define CS12    2
#define CS11    1
#define CS10    0

#define SREG  *( ( volatile uint8_t* ) 0x5F )

#endif /* TIMERS_REGISTERS_H_ */
