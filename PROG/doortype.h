//==========================================================================//
//                                                                          //
//        Biohazard19                                                       //
//        Copyright (c) 1995 CAPCOM Co.,Ltd. All Rights Reserved.           //
//                                                                          //
//        doortype.h                                                        //
//                                        Programmed by (?)                 //
//                                                                          //
//        Reconstructed by SolidSnake11 26/01/2020                          //
//==========================================================================//
#define     SOUKO                   0x00
#define     JIMUSYO                 0x01
#define     KAIDANTUURO             0x02
#define     STARSROOM               0x03
#define     HALLSMALL               0x04
#define     WESTOFFICE              0x05
#define     KAIGISITU               0x07
#define     KEISATU1F1              0x08
#define     GSDOOR                  0x09
#define     KAIDAN_0                0x0a
#define     SHINBUNSYA              0x0b
#define     TROLLEY0                0x0c
#define     TROLLEY1                0x0d
#define     TROLLEY2                0x0e
#define     ENTRANCE                0x0f
#define     Y_SOUKO                 0x10
#define     RPD_MON                 0x11
#define     PARK_MON                0x12
#define     NAKANIWA                0x13
#define     SAKU                    0x14
#define     GOMIROJI                0x15
#define     SABI                    0x16
#define     URAROJI                 0x17
#define     HOSPITAL                0x18
#define     CHURCH                  0x19
#define     SHINBUN1F               0x1a
#define     CITYHALL                0x1c
#define     RESTRANT0               0x1d
#define     RESTRANT1               0x1e
#define     ELEVATOR                0x1f
#define     NAKANIWA2               0x20
#define     H_JIMUSYO               0x21
#define     H_4FROUKA               0x22
#define     KOYA2                   0x23
#define     H_SHIRYOU1              0x24
#define     H_ELE                   0x25
#define     R_HASIGO                0x26
#define     HALL_KAIDAN             0x27
#define     KOYA                    0x28
#define     Y_SOUKO_M               0x29
#define     FAC_TUURO               0x2a
#define     FAC_TUURO2              0x2b
#define     PARKING                 0x2c
#define     DANRO                   0x2d
#define     HENDEN0                 0x2e
#define     HENDEN1                 0x2f
#define     ISI_KAIDAN              0x31
#define     FACTORY0                0x33
#define     C_TOWER1                0x34
#define     KENSETU                 0x35
#define     HASIGO                  0x36
#define     URAROJI2                0x37
#define     FACTORY1                0x38
#define     FACTORY2                0x39
#define     H_KENKYU                0x3a
#define     FAC_ELE2                0x3b
#define     H_JIKKEN                0x3c
#define     C_TOWER2                0x3d
#define     KIGAE0                  0x3e
#define     KIGAE1                  0x3f
#define     KIGAE2                  0x40
#define     KIGAE3                  0x41
#define     KIGAE4                  0x42
#define     BOSS_BEYA               0x43
#define     YOUSUI                  0x44
#define     CHURCH2                 0x45

// TYPES

//Used for one way doors
#define     NORMAL                  0x00 
#define     REVERSE                 0x01
//Used for two ways doors
#define     NORMAL2                 0x02
#define     REVERSE2                0x03
//Used for stairs
#define     UP                      0x04
#define     DOWN                    0x05

#define     NOBU2                   0x80

#define     ID_UTIKAGI_O            0xfe     //DOOR LOCK
#define     ID_UTIKAGI_C            0xff