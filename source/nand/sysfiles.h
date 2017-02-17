#pragma once

#include "common.h"

// /rw/sys/LocalFriendCodeSeed_B (/_A) file
// see: http://3dbrew.org/wiki/Nandrw/sys/LocalFriendCodeSeed_B
typedef struct {
    u8 signature[0x100];
    u8 unknown[0x8]; // normally zero
    u8 codeseed[0x8]; // the actual data
} __attribute__((packed)) LocalFriendCodeSeed;

// /private/movable.sed file
// see: http://3dbrew.org/wiki/Nand/private/movable.sed
typedef struct {
    u8 magic[0x4]; // "SEED"
    u8 indicator[0x4]; // uninitialized all zero, otherwise u8[1] nonzero  
    LocalFriendCodeSeed codeseed_data;
    u8 keyy_high[8];
    u8 unknown[0x10];
    u8 cmac[0x10];
} __attribute__((packed)) MovableSed;

// /rw/sys/Secure_A (/_B) file
// see: http://3dbrew.org/wiki/Nandrw/sys/SecureInfo_A
typedef struct {
    u8 signature[0x100];
    u8 region;
    u8 unknown;
    char serial[0xF];
} __attribute__((packed)) SecureInfo;
