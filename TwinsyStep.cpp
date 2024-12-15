#pragma push_macro("abs")
#undef abs

#include "TwinsyStep.h"
#include "timers/timerfactory.h"
#include "timers/interfaces.h"
#include "timers/TMR.h"

namespace TwinsyStep
{
    void begin(bool useDefaultModule)
    {
        if(useDefaultModule)
        {
            TimerFactory::attachModule(new TMRModule<3>());
        }
    }
}

#pragma pop_macro("abs")