/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rooms.h
 * Author: marco
 *
 * Created on 28 aprile 2018, 20.18
 */

#ifndef ROOMS_H
#define ROOMS_H

#include <vector>
#include "FanCoilUnit.h"

class room {
public:
    room();
    room(const room& orig);
    virtual ~room();
    void setTemp(float t);
    float getTemp ();
    void setSetPint(float s);
private:
    float temperature;
    float setpoint;
    
    std::vector<FanCoilUnit> Fancoil;

};

#endif /* ROOMS_H */

