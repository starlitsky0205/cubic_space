//
//  cubes.hpp
//  10homework2
//
//  Created by maya on 2017/07/07.
//
//

#ifndef cubes_hpp
#define cubes_hpp

#include <stdio.h>
#include<iostream>
#include "ofMain.h"
class Cubes{
public:
    
    ofVec3f pos, speed;
    int radius,a,b,m;
    Cubes();
    void update();
    void draw();
    
};



#endif /* cubes_hpp */
