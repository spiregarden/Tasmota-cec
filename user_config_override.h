/*
  user_config_override.h - Tasmota User Configuration

  This file overrides some of the defaults in my_user_config.h.
  It is included automatically if USE_CONFIG_OVERRIDE is defined at build time.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Enable HDMI-CEC feature
#define USE_HDMI_CEC               // Enable HDMI CEC bridge support

// Ensure I2C is enabled if it has not already been enabled
#ifndef USE_I2C
  #define USE_I2C                  // Required by some HDMI-CEC or related peripherals
#endif

// Optional: keep build minimal (no displays or extras beyond HDMI_CEC + I2C)
// Only add extra #defines here if you *need* to disable something for size.
// For now we rely on the standard ESP8266 Tasmota profile.

#endif  // _USER_CONFIG_OVERRIDE_H_