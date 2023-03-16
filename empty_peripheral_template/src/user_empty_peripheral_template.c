/**
 ****************************************************************************************
 *
 * @file user_empty_peripheral_template.c
 *
 * @brief Empty peripheral template project source code.
 *
 * Copyright (C) 2012-2019 Dialog Semiconductor.
 * This computer program includes Confidential, Proprietary Information
 * of Dialog Semiconductor. All Rights Reserved.
 *
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @addtogroup APP
 * @{
 ****************************************************************************************
 */
#include "rwip_config.h"             // SW configuration


/*
 * INCLUDE FILES
 ****************************************************************************************
 */

#include "app_api.h"
#include "user_empty_peripheral_template.h"
#include "app_easy_timer.h"
 #include "arch_console.h"

#if defined (CFG_SPI_FLASH_ENABLE)
#include "spi_flash.h"
#endif

#define TIMER_INTVL            (25)
static uint32_t timer_count __SECTION_ZERO("retention_mem_area0");
/*
 * FUNCTION DEFINITIONS
 ****************************************************************************************
*/
static void user_timer_cb(void)
{
        uint32_t current_time_ms;
        timer_count++;

        current_time_ms = timer_count*TIMER_INTVL*10;
        app_easy_timer(TIMER_INTVL, user_timer_cb);

        arch_printf("%s: %d\r\n", __func__, current_time_ms);
}

void user_on_connection(uint8_t connection_idx, struct gapc_connection_req_ind const *param)
{
        default_app_on_connection(connection_idx, param);
}

void user_on_disconnect( struct gapc_disconnect_ind const *param )
{
        default_app_on_disconnect(param);
}

void user_app_on_set_dev_config_complete(void)
{

        default_app_on_set_dev_config_complete();

#if defined (CFG_SPI_FLASH_ENABLE)
        spi_flash_power_down();
#endif
        timer_count = 0;

        app_easy_timer(TIMER_INTVL, user_timer_cb);

}
/// @} APP
