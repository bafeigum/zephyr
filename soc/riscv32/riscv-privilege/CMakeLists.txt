add_subdirectory(common)
add_subdirectory(${SOC_SERIES})
zephyr_cc_option(-march=rv32i)
