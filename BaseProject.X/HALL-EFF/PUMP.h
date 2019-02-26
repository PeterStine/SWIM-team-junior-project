
#ifndef _PUMP_H    /* Guard against multiple inclusion */
#define _PUMP_H

#define PUMP_PIN PORTAbits.RA1
#define PUMP_ACTIVE_STATE 1
#define PUMP_INACTIVE_STATE 0


uint8_t PUMP_STAT;

void PUMP_INIT(void);
void PUMP_ON(void);
void PUMP_OFF(void);
uint8_t PUMP_STATUS (void);
#endif