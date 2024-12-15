#pragma once

#include "interfaces.h"

namespace TwinsyStep
{
    namespace TimerFactory
    {
        extern void attachModule(ITimerModule*);
        extern ITimer* makeTimer();
        extern void returnTimer(  ITimer* timer);
    }
}