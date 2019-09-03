# Build rules file
# This file was created on 09/03/19
# Author: George Kaimakis - https://github.com/geokai


# Bootloader (this setting is usually not required)
#	This definition is optional, and if your keyboard supports multiple
#	bootloaders of different sizes, comment this out, and the correct
#	address will be loaded automatically (+60). See bootloader.mk for
#	all options.
# BOOTLOADER = caterina

# Build options
#	change to "no" to disable the options, or define inthe Makefile in
#	the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE = no	# Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no	# Mouse keys(+4700)
EXTRAKEY_ENABLE = yes	# Audio control and Systems control(+450)
CONSOLE_ENABLE = no	# Console for debug(+400)
NKRO_ENABLE = no	# Nkey Rollover - if this doesn't work, see here - https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no	# Enable keyboard backlight functionality
MIDI_ENABLE = no	# MIDI controls
AUDIO_ENABLE = no	# Audio output on port C6
UNICODE_ENABLE = yes	# Unicode
BLUETOOTH_ENABLE = no	# Enable Bluetooth with Adafruit EZ-Key HID
RGBLIGHT_ENABLE = yes	# Enable WS2812 RGB underlight
SWAP_HANDS_ENABLE = no	# Enable one-hand typing

# Do not enable SLEEP_LED_ENABLE. It uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/glcdfont.c \
        ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
