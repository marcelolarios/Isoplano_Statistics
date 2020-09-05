/*
  Isoplano_Statistics.cpp - Library for statistics.
  Created by Marcelo Lários, March 1, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Isoplano_Statistics.h"

Isoplano_Statistics::Isoplano_Statistics() {}

int Isoplano_Statistics::moda(int array[], int size) {

  	int arrTemp[size][2];
    for (int i = 0;i < size; i++) {
    
        arrTemp[i][0]=0;
        arrTemp[i][1]=0;
    }
        
    for (int i = 0;i < size; i++) {
    
        for (int ii = 0;ii < size; ii++) {
        
            if(arrTemp[ii][0]==0) {
            
                arrTemp[ii][0] = array[i];
                arrTemp[ii][1] = arrTemp[ii][1] + 1;
                break;
            } else if(arrTemp[ii][0]==array[i]){
            
                arrTemp[ii][1] = arrTemp[ii][1] + 1;
                break;
            }
        }
    }
    
    int v = 0;
    int r = 0;
    
    for (int i = 0;i < size; i++) {
    
        if (arrTemp[i][0] == 0) break;
        if (arrTemp[i][1] > v) {
        
            v = arrTemp[i][1];
            r = arrTemp[i][0];
        }
    }
    
    return(r);
}

