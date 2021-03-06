// Internal flash configuration for various LM4F CPUs

#ifndef __FLASH_CONF_H__
#define __FLASH_CONF_H__

// These constants should be common for all LM4F CPUs listed in this. 
// header file. If they are not, they should be removed from this common 
// region and defined for each CPU in part.

#define INTERNAL_FLASH_SECTOR_SIZE      1024
#define INTERNAL_FLASH_WRITE_UNIT_SIZE  4
#define INTERNAL_FLASH_START_ADDRESS    0

#ifdef ELUA_CPU_LM4F120XL
#define INTERNAL_FLASH_SIZE             ( 128 * 1024 )
#define INTERNAL_FLASH_CONFIGURED
#endif


#endif // #ifndef __FLASH_CONF_H__

