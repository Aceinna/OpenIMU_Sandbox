/*
 * File:   UserAlgorithm.h
 * Author: joemotyka
 *
 * Created on June 28, 2018, 12:23 AM
 */

#ifndef _USER_ALGORITHM_H_
#define _USER_ALGORITHM_H_

#include <stdint.h>
#include "gpsAPI.h"

void initUserDataProcessingEngine();
void inertialAndPositionDataProcessing(uint16_t dacqRate);
void  userInitConfigureUnit();
void  InitUserAlgorithm();     
void *RunUserNavAlgorithm(double *accels, double *rates, double* mags, gpsDataStruct_t *gps, uint16_t dacqRate);


// Some common constants used in the user algorithm logic
#define  ZERO_HZ         0
#define  ONE_HZ          1
#define  TWO_HZ          2
#define  FOUR_HZ         4
#define  FIVE_HZ         5
#define  TEN_HZ          10
#define  TWENTY_HZ       20
#define  TWENTY_FIVE_HZ  25
#define  FIFTY_HZ        50

#endif /* _USER_ALGORITHM_H_ */

