#ifndef DEVICE_LOADERS_H
#define DEVICE_LOADERS_H

#include <stdlib.h>

typedef struct device_loader {
	char* identifier;
	char* ipsw_url;
	char* ibss_path;
	char* ibec_path;
	char* devicetree_path;
	char* kernelcache_path;
} device_loader;

static const device_loader device_loaders[] = {
	{ "iPhone1,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone1,2",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone2,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone3,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone3,2",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone3,3",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone4,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone5,1",   "http://appldnld.apple.com/iOS7.1/031-4773.20140627.undN4/iPhone5,1_7.1.2_11D257_Restore.ipsw", "Firmware/dfu/iBSS.n41ap.RELEASE.dfu", "Firmware/dfu/iBEC.n41ap.RELEASE.dfu", "Firmware/all_flash/all_flash.n41ap.production/DeviceTree.n41ap.img3", "kernelcache.release.n41"},
	{ "iPhone5,2",   "http://appldnld.apple.com/iOS7.1/031-4798.20140627.fpeqS/iPhone5,2_7.1.2_11D257_Restore.ipsw", "Firmware/dfu/iBSS.n42ap.RELEASE.dfu", "Firmware/dfu/iBEC.n42ap.RELEASE.dfu", "Firmware/all_flash/all_flash.n42ap.production/DeviceTree.n42ap.img3", "kernelcache.release.n42"},
	{ "iPhone5,3",   "http://appldnld.apple.com/iOS7.1/031-4814.20140627.YoE3b/iPhone5,3_7.1.2_11D257_Restore.ipsw", "Firmware/dfu/iBSS.n48ap.RELEASE.dfu", "Firmware/dfu/iBEC.n48ap.RELEASE.dfu", "Firmware/all_flash/all_flash.n48ap.production/DeviceTree.n48ap.img3", "kernelcache.release.n48"},
	{ "iPhone5,4",   "http://appldnld.apple.com/iOS7.1/031-4772.20140627.75PIm/iPhone5,4_7.1.2_11D257_Restore.ipsw", "Firmware/dfu/iBSS.n49ap.RELEASE.dfu", "Firmware/dfu/iBEC.n49ap.RELEASE.dfu", "Firmware/all_flash/all_flash.n49ap.production/DeviceTree.n49ap.img3", "kernelcache.release.n49"},
	{ "iPhone6,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone6,2",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone7,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone7,2",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone8,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone8,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone8,2",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone8,2",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone8,4",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone8,4",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone9,1",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone9,2",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone9,3",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone9,4",   NULL, NULL, NULL, NULL, NULL},
	{ "iPhone10,1",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone10,2",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone10,3",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone10,4",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone10,5",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone10,6",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone11,2",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone11,4",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone11,6",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone11,8",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone12,1",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone12,3",  NULL, NULL, NULL, NULL, NULL},
	{ "iPhone12,5",  NULL, NULL, NULL, NULL, NULL},
	{ "iPod1,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPod2,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPod3,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPod4,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPod5,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPod7,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPod9,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad1,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad2,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad2,2",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad2,3",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad2,4",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad2,5",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad2,6",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad2,7",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad3,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad3,2",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad3,3",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad3,4",     "http://appldnld.apple.com/iOS7.1/031-4781.20140627.kvhCc/iPad3,4_7.1.2_11D257_Restore.ipsw", "Firmware/dfu/iBSS.p101ap.RELEASE.dfu", "Firmware/dfu/iBEC.p101ap.RELEASE.dfu", "Firmware/all_flash/all_flash.p101ap.production/DeviceTree.p101ap.img3", "kernelcache.release.p101"},
	{ "iPad3,5",     "http://appldnld.apple.com/iOS7.1/031-4803.20140627.nAmS8/iPad3,5_7.1.2_11D257_Restore.ipsw", "Firmware/dfu/iBSS.p102ap.RELEASE.dfu", "Firmware/dfu/iBEC.p102ap.RELEASE.dfu", "Firmware/all_flash/all_flash.p102ap.production/DeviceTree.p102ap.img3", "kernelcache.release.p102"},
	{ "iPad3,6",     "http://appldnld.apple.com/iOS7.1/031-4771.20140627.AsBX2/iPad3,6_7.1.2_11D257_Restore.ipsw", "Firmware/dfu/iBSS.p103ap.RELEASE.dfu", "Firmware/dfu/iBEC.p103ap.RELEASE.dfu", "Firmware/all_flash/all_flash.p103ap.production/DeviceTree.p103ap.img3", "kernelcache.release.p103"},
	{ "iPad4,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad4,2",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad4,4",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad4,5",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad4,6",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad4,7",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad4,8",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad4,9",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad5,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad5,2",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad5,3",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad5,4",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,3",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,4",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,7",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,8",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,11",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,11",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,12",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad6,12",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,2",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,3",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,4",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,5",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,6",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,11",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad7,12",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,1",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,2",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,3",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,4",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,5",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,6",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,7",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad8,8",     NULL, NULL, NULL, NULL, NULL},
	{ "iPad11,1",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad11,2",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad11,3",    NULL, NULL, NULL, NULL, NULL},
	{ "iPad11,4",    NULL, NULL, NULL, NULL, NULL},
	{ "AppleTV2,1",  NULL, NULL, NULL, NULL, NULL},
	{ "AppleTV3,1",  NULL, NULL, NULL, NULL, NULL},
	{ "AppleTV3,2",  NULL, NULL, NULL, NULL, NULL},
	{ "AppleTV5,3",  NULL, NULL, NULL, NULL, NULL},
	{ "AppleTV6,2",  NULL, NULL, NULL, NULL, NULL},
	{ NULL,          NULL, NULL, NULL, NULL, NULL}
};

#endif
