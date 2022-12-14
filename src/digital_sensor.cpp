#include <Arduino.h>
#include "../include/digital_sensor.h"


DigitalSensor::DigitalSensor(int pin)
{
    this->pin = pin;
};

int DigitalSensor::readSensor()
{
    this->raw_reading = digitalRead(this->pin);
    this->enemy_close = this->raw_reading == 1;
    return this->enemy_close;
}
