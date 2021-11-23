//
// Created by Shelby on 11/22/2021.
//

#ifndef HW4_INSTAGRAM_H
#define HW4_INSTAGRAM_H
#include "SocialMediaAccount.h"

template<class T>
class Instagram: public SocialMediaAccount<T> {
    int getLikeCount(){return likeCount;}
    void setLikeCount(int num){likeCount = num;}
    void Like(){likeCount++;}
private:
    int likeCount;

};


#endif //HW4_INSTAGRAM_H
