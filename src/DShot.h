#include <Arduino.h>

#ifndef DShot_h
#define DShot_h

#if defined(__AVR_ATmega328P__)
// For UNO, PortD 0-7: i.e. D0-D7
#define DSHOT_PORT PORTD
#endif

class DShot {
public:
    DShot();
    void attach(uint8_t pin);
    uint16_t setThrottle(uint16_t throttle, bool telemetry = false);

private:
    uint16_t _packet = 0;
    uint16_t _throttle = 0;
    bool _telemetry = false;
    uint8_t _pinMask = 0;
};

#endif
