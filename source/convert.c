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
** \brief     Converts a temperature in celcius to fahrenheit.
** \param     celcius Temperature in celcius.
** \return    Temperature in fahrenheit.
**
****************************************************************************************/
float convert_celcius_to_fahrenheit(float celcius)
{
  return ((celcius * 9) / 5.0) + 32;
} /*** end of convert_celcius_to_fahrenheit ***/


/************************************************************************************//**
** \brief     Converts a temperature in fahrenheit to celcius.
** \param     fahrenheit Temperature in fahrenheit.
** \return    Temperature in celcius.
**
****************************************************************************************/
float convert_fahrenheit_to_celcius(float fahrenheit)
{
  return ((fahrenheit - 32) * 5) / 9.0;
} /*** end of convert_fahrenheit_to_celcius ***/


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

