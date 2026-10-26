#ifndef GU_PROM_PROFILE_H
#define GU_PROM_PROFILE_H
/* Local AD102 NVGI dump: two identical expansion views at +0x9400 and
 * +0xe9400. Live PROM mapping is verified against this hash BEFORE writes;
 * its correspondence to BAR0+0x300000 is not assumed to be hardware-tested. */
#define GU_PROM_BAR_OFFSET 0x300000U
#define GU_PROM_VIEW_BYTES 0xd6c00U
/* Our box: sha256 of 4090-expansion-view.bin (paso0/), verified byte-identical
 * to the live UEFI PROM read at BAR0+0x300000 (CAP0002 physical_prom). */
#define GU_PROM_VIEW_SHA256 "11a0c20001c5e09682ab16de34df766cfdce6dad481d25d37ca0f2904a484f72"
#endif
