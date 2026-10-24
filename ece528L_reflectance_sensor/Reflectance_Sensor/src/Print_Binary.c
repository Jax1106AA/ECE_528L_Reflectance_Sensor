/**
 * @file Print_Binary.c
 * @brief Source code for Print_Binary function implementation.
 *
 * This file contains the function implementation for the Print_Binary function,
 * which takes in a uint8_t value and prints the value in binary format.
 * It relies on the EUSCI_A0_UART driver.
 *
 * @author Aaron Nanas
 * @author Aolany Acosta and Hernan Zapien
 */

#include "../inc/Print_Binary.h"

void Print_Binary(uint8_t value_to_convert)
{
    int8_t bit_position;

    for (bit_position = 7; bit_position >= 0; bit_position--)
    {
        if (value_to_convert & (1U << bit_position))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if (bit_position == 4)
        {
            printf("_");
        }
    }
}
