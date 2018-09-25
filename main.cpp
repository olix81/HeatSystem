/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: marco
 *
 * Created on 28 aprile 2018, 14.18
 */

#include <cstdlib>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#include <boost/shared_ptr.hpp>
#include "OpenWebNetTCP.h"
#include "globals.h"
#include "stdafx.h"
#include "room.h"


using namespace std;

int log::Log(int a, const char* fmt, ...)
{
    char str[8192];
    va_list args;
    va_start(args, fmt);
    vsprintf(str, fmt, args);
    va_end(args);
    printf("%s\n", str);
    return 0;
}

room rooms[100];

void update_temp_zone(int zone, float temp)
{
    rooms[zone - 1].setTemp(temp);
    // printf("Set zone %d temp @ %3.1f\n", zone, temp);
}

/*
 * 
 */
int main(int argc, char** argv)
{
    //const int ID, const std::string &IPAddress, const unsigned short usIPPort, const std::string &ownPassword, const int ownScanTime)
    COpenWebNetTCP myhome(0, "192.168.1.36", 20000, "", 0);

    myhome.StartHardware();
    
    while (1)
    {
        sleep(5);
     //   printf("\033[2J");
        for (int i = 0; i < 10; i++)
            printf("%d  \ttemp %1.1f\n", i + 1, rooms[i].getTemp());
    }
    printf("ciao\n");
    return 0;
}

