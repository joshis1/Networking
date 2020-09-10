#include <errno.h>
#include <string.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <netinet/in.h>
#include <stdio.h>


#define DEFAULT_IF "eth0"

int getIfIndex(char *ifname)
{
   int sockfd = -1;
   struct ifreq ifval;

   if((sockfd = socket(AF_PACKET, SOCK_RAW, IPPROTO_RAW)) == -1)
   {
       perror("socket");

   }


  memset(&ifval,0,sizeof(struct ifreq));
  strncpy(ifval.ifr_name,ifname,strlen(ifname));

  if(ioctl(sockfd,SIOCGIFINDEX,&ifval) < 0 )
   {
       close(sockfd);
       perror("SIOCGIFINDEX");

   }

   close(sockfd);

   return ifval.ifr_ifindex; 

}










   




