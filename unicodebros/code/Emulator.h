#ifndef NESEMU_EMULATOR_H
#define NESEMU_EMULATOR_H

#include "CPU6502.h"
#include "CPUBus.h"
#include "PPUBus.h"
#include "PPU2C02.h"
#include "Nesrom.h"
#include "helper.h"
#include "Memory.h"
#include "Controller.h"
#include "APU.h"

class Emulator {
public:
    CPU6502 cpu;
    CPUBus cpubus;
    PPUBus ppubus;
    Nesrom rom;
    Memory mem;
    Memory ppumem;
    PPU2C02 ppu;
    Controller player1;
    APU apu;

    CPU6502 cpuback;
    Memory memback;
    Memory ppumemback;
    PPU2C02 ppuback;

    Emulator();
    void reset();
    void start();
    void step();
};


#endif //NESEMU_EMULATOR_H
