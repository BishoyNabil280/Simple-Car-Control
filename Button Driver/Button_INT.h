/*
 * Button_INT.h
 *
 * Created: 24-Jul-21 3:26:24 PM
 *  Author: ayman
 */ 


#ifndef BUTTON_INT_H_
#define BUTTON_INT_H_


sint8_t BUTTON_checkStatus(uint8_t Port,uint8_t ButtonNum);                                                

//buttons
#define BUTTON_CTRLPORT   PortC
#define ButtonG    PIN0
#define ButtonM	   PIN1
#define ButtonL    PIN2
#define ButtonR    PIN3
//
#define ButtonError -1
#endif /* BUTTON_INT_H_ */