.. _m2gl025-bit_riscv:

Microsemi M2GL025 bit_riscv
######################

Overview
********

The Microsemi M2GL025 board is an IGLOO2 FPGA based development board.
The bit_riscv RISC-V soft CPU can be deployed on the MGL025 board.

Programming and debugging
*************************

Building
========

Applications for the ``m2gl025_bit_riscv`` board configuration can be built as usual
(see :ref:`build_an_application`).
In order to build the application for ``m2gl025_bit_riscv``, set the ``BOARD`` variable
to ``m2gl025_bit_riscv``.

.. code-block:: bash

   export BOARD="m2gl025_bit_riscv"

Flashing
========

In order to upload the application to the device, you'll need Libero to write to the eNVM.

