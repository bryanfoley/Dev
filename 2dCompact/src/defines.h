/*
 * defines.h
 *
 *  Created on: Jul 21, 2013
 *      Author: bfoley
 */


#ifndef _defines_h
#define _defines_h

#define factor 100.0           /*This is the multiplication factor used when */
                                /*calculating the mod of packing/divisor      */
#define divisor 1.0             /*This is the divisor used when calculating   */
                                /*the mod of packing/divisor                  */
#define tolerance 1e-4          /*This is the maximum allowed value of the    */
                                /*fmod((packing_density*factor),divisor)      */
                                /*i.e, modulus of packing divided by 0.001,   */
                                /*required to print coordination_number and   */
                                /*potential to file as functions of packing   */
#define LOGNAME_FORMAT "log/%Y%m%d_%H%M%S"
#define LOGNAME_SIZE 40

#endif
