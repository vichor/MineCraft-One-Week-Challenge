#ifndef IWORLDEVENT_H_INCLUDED
#define IWORLDEVENT_H_INCLUDED

class World;

struct IWorldEvent
{
    virtual void handle(World& world) = 0;
};

#endif // IWORLDEVENT_H_INCLUDED
