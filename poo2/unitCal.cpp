
#include "unitCal.h"

float UnitCalculator::milesToM(float miles){
    float meters=miles*this->transform;
    return meters;
}

float UnitCalculator::MetersToM(float kilo ){
    float miles=kilo/this->transform;
    return miles;
}
