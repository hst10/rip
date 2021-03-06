#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal[] = {
    120,156,75,102,128,2,70,32,118,80,96,96,40,102,1,50,
    82,24,24,130,53,64,34,126,26,32,57,52,162,216,9,72,
    232,103,228,231,166,234,103,167,230,230,166,22,165,26,233,167,
    167,230,154,130,9,221,226,146,196,164,156,84,253,226,162,100,
    253,130,202,146,140,252,60,125,160,76,102,94,73,106,81,94,
    98,142,126,124,124,102,94,102,73,124,188,30,80,142,3,104,
    140,77,110,126,74,105,78,170,29,200,178,98,144,225,0,24,
    19,31,203,
};

EmbeddedPython embedded_m5_internal(
    "m5/internal/__init__.py",
    "/home/kemmere2/gem5/gem5-stable/src/python/m5/internal/__init__.py",
    "m5.internal",
    data_m5_internal,
    115,
    145);

} // anonymous namespace
