//
// Created by Shelby on 11/22/2021.
//

#ifndef HW4_SOCIALMEDIAACCOUNT_H
#define HW4_SOCIALMEDIAACCOUNT_H
#include <iostream>
using namespace std;

const int maxFollowers = 139;
const int maxFollowed = 139;

template<class T>

class SocialMediaAccount {
public:
    SocialMediaAccount():isPrivate(true), handler(""), followerCount(0), followedCount(0){ptr = new T [maxFollowers];}
    void setHandler(T handle){handler = handle;}
    void setIsPrivate(bool isPriv){isPrivate = isPriv;}
    T getHandler(){return handler;}
    T getFollwerCount(){return followerCount;}
    T getFollwedCount(){return followedCount;}
    T & operator [](int index){return ptr[index];}
    bool getIsPrivate(){return isPrivate;}
    void addFollower(T user);
    void addFollowed(T user);
    void displayFollowed();
protected:
    T handler;
    T Followers[maxFollowers];
    T Followed[maxFollowed];
    int followerCount;
    int followedCount;
    bool isPrivate;
    T *ptr;
    T *ptr2;
};


#endif //HW4_SOCIALMEDIAACCOUNT_H
