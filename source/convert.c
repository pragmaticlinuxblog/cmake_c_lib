/************************************************************************************//**
* \file         convert.c
* \brief        Source file of the unit conversion library.
*
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include "convert.h"                        /* unit conversion library header          */


/************************************************************************************//**
** \brief     Converts a temperature in celsius to fahrenheit.
** \param     celsius Temperature in celsius.
** \return    Temperature in fahrenheit.
**
****************************************************************************************/
float convert_celsius_to_fahrenheit(float celsius)
{
  return ((celsius * 9) / 5.0) + 32;
} /*** end of convert_celsius_to_fahrenheit ***/


/************************************************************************************//**
** \brief     Converts a temperature in fahrenheit to celsius.
** \param     fahrenheit Temperature in fahrenheit.
** \return    Temperature in celsius.
**
****************************************************************************************/
float convert_fahrenheit_to_celsius(float fahrenheit)
{
  return ((fahrenheit - 32) * 5) / 9.0;
} /*** end of convert_fahrenheit_to_celsius ***/


/************************************************************************************//**
** \brief     Converts a distance in kilometers to miles.
** \param     kilometers Distance in kilometers.
** \return    Distance in miles.
**
****************************************************************************************/
float convert_kilometers_to_miles(float kilometers)
{
  return kilometers / 1.619344;
} /*** end of convert_kilometers_to_miles ***/


/************************************************************************************//**
** \brief     Converts a distance in miles to kilometers.
** \param     miles Distance in miles.
** \return    Distance in kilometers.
**
****************************************************************************************/
float convert_miles_to_kilometers(float miles)
{
  return miles * 1.619344;
} /*** end of convert_miles_to_kilometers ***/


/*********************************** end of convert.c *****************************/

