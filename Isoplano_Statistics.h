/*
  Isoplano_Statistics.h - Library for statistics.
  Created by Mrcelo Lários, March 1, 2019.
  Released into the public domain.
*/
#ifndef Isoplano_Statistics_h
#define Isoplano_Statistics_h

#include "Arduino.h"

class Isoplano_Statistics
{
  public:
    Isoplano_Statistics();
    int moda(int array[], int size);
};

#endif