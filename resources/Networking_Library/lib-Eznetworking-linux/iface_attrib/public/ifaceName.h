#ifndef IFACENAME_HEADER_FILE_H
#define IFACENAME_HEADER_FILE_H

#include <errno.h>
#include <string.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <netinet/in.h>
#include <stdio.h>

#define DEFAULT_IF "eth0"


/** Method to get the Interface Index **/

int getIfIndex(char *ifname);

#endif




