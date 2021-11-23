//
// Created by Shelby on 11/22/2021.
//

#ifndef HW4_TWITTER_H
#define HW4_TWITTER_H
#include "SocialMediaAccount.h"

template<class T>
class Twitter: public SocialMediaAccount<T> {
public:
    int getRetweetCount(){return retweetCount;}
    void setRetweetCount(int num){retweetCount = num;}
    void RT(){retweetCount++;}
private:
    int retweetCount = 0;
};


#endif //HW4_TWITTER_H
