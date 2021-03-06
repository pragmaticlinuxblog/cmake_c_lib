/************************************************************************************//**
* \file         convert.h
* \brief        Header file of the unit conversion library.
*
****************************************************************************************/
#ifndef CONVERT_H
#define CONVERT_H

#ifdef __cplusplus
extern "C" {
#endif

/****************************************************************************************
* Function prototypes
****************************************************************************************/
float convert_celsius_to_fahrenheit(float celsius);
float convert_fahrenheit_to_celsius(float fahrenheit);
float convert_kilometers_to_miles(float kilometers);
float convert_miles_to_kilometers(float miles);

#ifdef __cplusplus
}
#endif

#endif /* CONVERT_H */
/*********************************** end of convert.h **********************************/

