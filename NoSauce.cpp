#include "NoSauce.h"

/**
 * @brief Constructor for NoSauce class.
 *
 * Initializes a dish with no sauce.
 */
NoSauce::NoSauce(Pizza* p) : Sauce(0.0, "No Sauce", p) {}
