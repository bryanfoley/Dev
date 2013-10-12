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

#define SYSTEM_LOGNAME_FORMAT "log/%Y%m%d_%H%M%S_%s_%z.sys"
#define ERROR_LOGNAME_FORMAT "ER/%Y%m%d_%H%M%S_%s_%z.err"
#define DATA_LOGNAME_FORMAT "data/%Y%m%d_%H%M%S_%s_%z.dat"
#define CONF_LOGNAME_FORMAT "conf/%Y%m%d_%H%M%S_%s_%z.conf"
#define LOGNAME_SIZE 80

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define AT __DATE__ ": " __TIME__ " >>> " __FILE__ ": " TOSTRING(__LINE__)

#endif
