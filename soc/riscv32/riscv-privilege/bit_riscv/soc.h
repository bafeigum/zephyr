#ifndef __RISCV32_BIT_RISCV_SOC_H_
#define __RISCV32_BIT_RISCV_SOC_H_

#include <soc_common.h>

/* UART Configuration */
#define MSS_UART_0_LINECFG           0x1

/* Timer configuration */
#define RISCV_MTIME_BASE             0x80000000
#define RISCV_MTIMECMP_BASE          0x80000008

/* lib-c hooks required RAM defined variables */
#define RISCV_RAM_BASE               CONFIG_RISCV_RAM_BASE_ADDR
#define RISCV_RAM_SIZE               CONFIG_RISCV_RAM_SIZE
#endif /* __RISCV32_BIT_RISCV_SOC_H_ */
