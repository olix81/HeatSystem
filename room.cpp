/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rooms.cpp
 * Author: marco
 * 
 * Created on 28 aprile 2018, 20.18
 */

#include "room.h"

room::room() {
}

room::room(const room& orig) {
}

room::~room() {
}

void room::setTemp(float t){
    temperature = t;
}
float room::getTemp ()
{
    return temperature;
}

void room::setSetPint(float s){
    
}

