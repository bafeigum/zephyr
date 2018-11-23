#ifndef __RISCV32_BIT_RISCV_SOC_H_
#define __RISCV32_BIT_RISCV_SOC_H_

#include <soc_common.h>

/* UART Configuration */
#define MIV_UART_0_LINECFG           0x1

/* GPIO Configuration */
#define MIV_GPIO_0_BASE_ADDR         0x70002000

/* Timer configuration */
#define RISCV_MTIME_BASE             0x4400bff8
#define RISCV_MTIMECMP_BASE          0x44004000

/* lib-c hooks required RAM defined variables */
#define RISCV_RAM_BASE               CONFIG_RISCV_RAM_BASE_ADDR
#define RISCV_RAM_SIZE               CONFIG_RISCV_RAM_SIZE

#endif /* __RISCV32_BIT_RISCV_SOC_H_ */
