SRC_URI_append_ucm-imx8m-mini = " \
	file://0000-ucm-imx8m-mini-Add-basic-support.patch \
	file://0001-ucm-imx8m-mini-update-CPU-model-printed-parameters.patch \
	file://0002-ucm-imx8m-mini-Fix-KConfig-warning.patch \
	file://0003-ucm-imx8m-mini-enable-status-LED.patch \
	file://0004-cmd-eeprom-fix-disregarding-of-the-i2c_bus-parameter.patch \
	file://0005-eeprom-layout-remove-buf-from-the-eeprom_field-struc.patch \
	file://0006-eeprom-layout-add-field-functions-read.patch \
	file://0007-compulab-eeprom-layout-add-read-serial-function.patch \
	file://0008-compulab-eeprom-layout-support-layout-version-4.patch \
	file://0009-compulab-integrate-DM_I2C-in-EEPROM-driver.patch \
	file://0010-i2c-prevent-dual-functions-with-CONFIG_DM_I2C_COMPAT.patch \
	file://0011-ucm-imx8m-mini-add-support-for-eeprom-layout-comands.patch \
	file://0012-mx8m-mini-set-Ethernet-MAC-address-environment.patch \
	file://0013-ucm-imx8m-mini-release-U-Boot-v2018.03-ucm-imx8m-min.patch \
	file://0014-ucm-imx8m-mini-config-Remove-unused-stuff.patch \
	file://0015-ucm-imx8m-mini-Enable-uart4-for-bluetooth.patch \
	file://0016-ucm-imx8m-mini-ddr-Validate-new-setting.patch \
	file://0017-ucm-imx8m-mini-defconfig-Disable-CONFIG_NXP_TMU.patch \
	file://0018-ucm-imx8m-mini-config-Update-h-file.patch \
	file://0019-ucm-imx8m-mini-spl-Refacoring-ddr_init-call.patch \
	file://0020-ucm-imx8m-mini-Kconfig-Refacoring-ddr-init-config-op.patch \
	file://0021-ucm-imx8m-mini-Makefile-Refacoring-ddr-init-build-op.patch \
	file://0022-ucm-imx8m-mini-lpddr4_timing-Add-ucm-imx8m-mini-supp.patch \
	file://0023-ucm-imx8m-mini-config-Enable-the-new-LPDDR4-config.patch \
	file://0024-ucm-imx8m-mini-Move-FS-support-to-defconfig.patch \
	file://0025-ucm-imx8m-mini-config-CONFIG_IMX_OPTEE-y.patch \
	file://0026-set-extended-temperature-range.patch \
	file://0027-ucm-imx8m-mini-Update-memory-init-code.patch \
	file://0028-ucm-imx8m-mini-Add-4G-DRAM-support.patch \
	file://0029-ucm-imx8m-mini-defconfig-Add-d1-d4-configs.patch \
	file://0030-dts-Enable-USB-OTG-support.patch \
	file://0031-env-Change-boot-sequence.patch \
	file://0032-Add-support-for-RAM-size-detection.patch \
	file://0033-Enable-usb-ethernet-dongle-asix-88179.patch \
	file://ucm-imx8m-mini_defconfig \
"

PACKAGE_ARCH = "${MACHINE_ARCH}"
COMPATIBLE_MACHINE_ucm-imx8m-mini = "ucm-imx8m-mini"