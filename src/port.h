#ifndef _TINYGPS_PLUS_PORT_H_
#define _TINYGPS_PLUS_PORT_H_

#include <stdint.h>

// https://forum.arduino.cc/index.php?topic=46379.0
#define PI 3.1415926535897932384626433832795
#define HALF_PI 1.5707963267948966192313216916398
#define TWO_PI 6.283185307179586476925286766559
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105

typedef char byte;
typedef int millis;

template <class T>
double sq(T x) {
    return x * x;
}
double degrees(double rad);
double radians(double deg);

#endif
