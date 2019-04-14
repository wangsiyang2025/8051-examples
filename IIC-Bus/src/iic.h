#ifndef __IIC_H__
#define __IIC_H__

#include "delay.h"
#include "config.h"
#include "stdint.h"

#define IIC_ACK    0
#define IIC_NACK   1

void iic_start(void);

void iic_stop(void);

void iic_ack(void);

void iic_nack(void);

uint8_t iic_read_ack(void);

void iic_send_byte(uint8_t data);

uint8_t iic_read_byte(void);

#endif // __IIC_H__
