#ifndef __HELPERS_H
#define __HELPERS_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stm32f0xx_hal.h"
#include "shared.h"

void boot_animation(void);
uint16_t get_baseline(void);
uint16_t get_trigger_threshold(uint16_t baseline);

#ifdef __cplusplus
}
#endif

#endif


