#ifndef _IFXMIPS_DEVICES_H__
#define _IFXMIPS_DEVICES_H__

#include <ifxmips_platform.h>

void __init ifxmips_register_gpio_leds(struct gpio_led *leds, int cnt);
void __init ifxmips_register_leds(struct gpio_led *leds, int cnt);
void __init ifxmips_register_mtd(struct physmap_flash_data *pdata);
void __init ifxmips_register_wdt(void);
void __init ifxmips_register_gpio(void);

#endif