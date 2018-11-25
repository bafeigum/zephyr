# Kconfig.mss - MSS UART configuration option
#
#

menuconfig UART_MSS
	bool "MSS serial driver"
	depends on SOC_RISCV32_BIT_RISCV
	select SERIAL_HAS_DRIVER
	help
	  This option enables the Mi-V serial driver.

menuconfig UART_MSS_PORT_0
	bool "Enable MSS Port 0"
	depends on UART_MSS
	help
	  This tells the driver to configure the UART port at boot, depending on
	  the additional configuration options below.
