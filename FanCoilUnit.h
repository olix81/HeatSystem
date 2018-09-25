/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FanCoilUnit.h
 * Author: marco
 *
 * Created on 8 luglio 2018, 12.09
 */

#ifndef FANCOILUNIT_H
#define FANCOILUNIT_H

class FanCoilUnit {
public:
    
    FanCoilUnit (int n) : address(n) {}
    FanCoilUnit(const FanCoilUnit& orig);
    virtual ~FanCoilUnit();
    
    void setAddress(int n) { address = n; }
    int getAddress() const { return address; }
    
private:
    int address;

};

#endif /* FANCOILUNIT_H */

