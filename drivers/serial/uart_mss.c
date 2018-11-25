/*
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>
#include <arch/cpu.h>
#include <uart.h>

#define DEV_CFG(dev)						\
	((const struct uart_mss_device_config * const)		\
	 (dev)->config->config_info)

struct uart_mss_device_config {
    u32_t   uart_addr;
};

static unsigned char uart_mss_poll_out(struct device *dev,
				       unsigned char c)
{

        sys_write8(c,DEV_CFG(dev)->uart_addr);
	return c;
}

static int uart_mss_poll_in(struct device *dev, unsigned char *c)
{
        *c = sys_read8(DEV_CFG(dev)->uart_addr);
	return 0;
}

static int uart_mss_init(struct device *dev)
{
	return 0;
}

static const struct uart_driver_api uart_mss_driver_api = {
	.poll_in          = uart_mss_poll_in,
	.poll_out         = uart_mss_poll_out,
	.err_check        = NULL,
};


static const struct uart_mss_device_config uart_mss_dev_cfg_0 = {
        .uart_addr = DT_MSS_UART_0_BASE_ADDR,
};

DEVICE_AND_API_INIT(uart_mss_0, DT_MSS_UART_0_NAME,
		    uart_mss_init, NULL, &uart_mss_dev_cfg_0,
		    PRE_KERNEL_1, CONFIG_KERNEL_INIT_PRIORITY_DEVICE,
		    (void *)&uart_mss_driver_api);

