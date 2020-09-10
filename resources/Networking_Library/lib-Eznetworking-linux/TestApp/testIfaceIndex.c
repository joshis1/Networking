#include "ifaceName.h"
#include <net/if.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char ifName[IFNAMSIZ];

  if( argc > 1)
  { 
    strncpy(ifName,argv[1],IFNAMSIZ); 
  }
  else
  {
    strcpy(ifName,DEFAULT_IF);
  }

   printf("The value of ifIndex =  %d \r\n",getIfIndex(ifName));

  return 0;
}

