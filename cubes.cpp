//
//  cubes.cpp
//  10homework2
//
//  Created by 増田麻耶 on 2017/07/07.
//
//

#include "cubes.hpp"
Cubes::Cubes(){
pos.z=0;
speed=ofVec3f(ofRandom(-3,3));
}

void Cubes::update(){
    pos=pos+speed;
    m=m+5;
    if(m>360){
        m=0;
    }

}

void Cubes::draw(){
   ofRotateZ(10);
   ofRotateX(30);
    
    for(int x=-50;x<50;x=x+3){
        pos.x=x;
        pos.y=x*x*1;
    ofDrawBox(pos,1.8);
}
}
