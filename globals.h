/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   globals.h
 * Author: marco
 *
 * Created on 28 aprile 2018, 14.55
 */

#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdio.h>
#include <stdarg.h>

#define LOG_STATUS 1
#define LOG_ERROR  2

class log
{
    public:
	int Log(int a, const char* fmt, ...);
};

void update_temp_zone( int zone, float temp );


#endif /* GLOBALS_H */

