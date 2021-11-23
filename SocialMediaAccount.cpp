//
// Created by Shelby on 11/22/2021.
//

#ifndef HW4_SOCIALMEDIAACCOUNT_H
#define HW4_SOCIALMEDIAACCOUNT_H
#include <iostream>
using namespace std;
#include "SocialMediaAccount.h"

template<class T>
void SocialMediaAccount<T>::addFollower(T user){
    ptr[followerCount] = user;
    followerCount++;
}

template<class T>
void SocialMediaAccount<T>::addFollowed(T user){
    ptr[followedCount] = user;
    followedCount++;
}
template<class T>
void SocialMediaAccount<T>::displayFollowers(){
    for(int i = 0; i<followerCount; i++) {
        if (isPrivate = true)
            cout<<"This is Private"<<endl;
        else
            cout<<ptr[i]<<endl;
    }
}
#endif //HW4_SOCIALMEDIAACCOUNT_H
