/*
  user_config_override.h - Tasmota User Configuration

  This file overrides some of the defaults in my_user_config.h.
  It is included automatically if USE_CONFIG_OVERRIDE is defined at build time.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// HDMI-CEC can be turned on per-environment via build flags (see platformio_* configs).
// When it is enabled we still need I2C support to access the DDC channel.
#ifdef USE_HDMI_CEC
  #ifndef USE_I2C
    #define USE_I2C                // Required by HDMI-CEC for EDID reads
  #endif
#endif

// Optional: keep build minimal (no displays or extras beyond HDMI_CEC + I2C)
// Only add extra #defines here if you *need* to disable something for size.
// For now we rely on the standard ESP8266 Tasmota profile.

#endif  // _USER_CONFIG_OVERRIDE_H_