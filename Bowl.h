#ifndef __BOWL_H__
#define __BOWL_H__
#include <string>
#include "Container.h"

using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////
// FOR THE BOWL
//
// [Bowl]
//      - Variables:
//          int state; (inherit from Container.h)
//          time_t time; (inherit from Container.h)
//          int content;
//      - Functions:
//          Bowl();
//          int getState();
//          int getContent();
//          void setContent(int sum);
//          void setState(int sum);
//
// It will have three states: (inherited from Container.cpp)
//              0: empty
//              1: full
//              -1: dirty
//
// It will also have a sum attached to say which soup is inside: (declared in private) 
//                                                               (to communicate with the Order.h)
//              5+5+5 = 15: mushroom soup
//              7+7+7 = 21: onion soup
//              11+11+11 = 33: tomato soup
//              5+7+11 = 23: combination soup
//          -> Any other combination is fine but there wil; be only 4 soups for the recipe
//          -> The Order.h will accept or reject the soup and return the bowl in state -1 (dirty)
//
// It will start at state: 0 and sum: 0
// 
// It will have funtions: int getState(): return the state
//                        void setState(int n): set the state
//
//                        int getContent(): return the content
//                        void setContent(int n): set the content
// 
// For int getState(): interact with Order.h (when the bowl is empty, full, dirty):
//                                           when the bowl is empty: return empty bowl (not dirty)
//                                           when the bowl is full: check the content and return dirty bowl
//                                           when the bowl is dirty: cannot happen
//                                                                   because all dirty bowl will go straight to the dish washer
//
//                     interact with Player.h (when the bowl is empty, full, dirty):
//                                           when the bowl is empty: put food in (only soup, no raw food)
//                                           when the bowl is full: cannot put food in
//                                           when the bowl is dirty: cannot happen
//                                                                   because all dirty bowl will go straight to the dish washer
//
//                     interact with Resources.h (when the bowl is empty, full, dirty):
//                                           when the bowl is empty: cannot put raw food
//                                           when the bowl is full: cannot put food in
//                                           when the bowl is dirty: cannot happen
//                                                                   because all dirty bowl will go straight to the dish washer
//
//                     (maybe: interact with Stove.h (when the bowl is empty, full, dirty))
//
// Kenny: not sure if we have to make 3 bowls in an array when contruct the Resources in Resources.h
/////////////////////////////////////////////////////////////////////////////////////////////////////////

class Bowl: public Container {
    public:
        Bowl();
        int getState();
        int getContent();
        void setContent(int contentt);
        void setState(int state);
        

    private:
        int content;
        

        //friend class Player

        //In SFML there will be colour
        //Add in later

};

#endif