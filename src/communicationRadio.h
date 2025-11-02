#ifndef _COMMUNICATION_RADIO_H
#define _COMMUNICATION_RADIO_H

#include <Arduino.h>

#include <communicationData.h>

class CommunicationRadio {
  public:
    CommunicationRadio() {
    }

    virtual int available();
    virtual int read();
    virtual uint8_t reset();
    virtual size_t read(CommunicationHandlerFunctionPtr func, unsigned long timestamp, unsigned long delta);
    virtual void writeBytes(uint8_t* byteArray, size_t length);
    virtual void writeChars(const char* chars);
};

#endif