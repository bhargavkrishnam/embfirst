#include <sys/types.h>
#include <sys/socket.h>
#include<net/ethernet.h>
#include<linux/ip.h>
#include<net/if.h>
#include<stdio.h>
#include<arpa/inet.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 65535
int main()
{
  int sfd;
  int l_bytes;
  char *l_buf;
  struct ether_header *l_EthHeader;
  struct iphdr *l_IPHdr;
  struct sockaddr saddr;
  int saddr_len =sizeof(saddr);
  sfd=socket(AF_PACKET,SOCK_PACKET,htons(ETH_P_ALL));
  if(sfd<0)
  {
    printf("unable to open socket\n");
    return 0;
  }
  while(1)
  {
     l_buf=(char*)malloc(MAX_SIZE);
     l_bytes=recvfrom(sfd,l_buf,65535,0,&saddr,(socklen_t *) &saddr_len);
      if(l_bytes<=0)
       continue;
          l_EthHeader=(struct ether_header*)l_buf;
          printf("ETH header\n");
          printf("\tS-MAC=%x:%x:%x:%x:%x:%x\n",l_EthHeader->ether_shost[0],l_EthHeader->ether_shost[1],l_EthHeader->ether_shost[2],
                         l_EthHeader->ether_shost[3],l_EthHeader->ether_shost[4],l_EthHeader->ether_shost[5]);

          printf("\tD-MAC=%s\n",l_EthHeader->ether_dhost);
          printf("\tE_TYPE=%u\n",l_EthHeader->ether_type);
          l_IPHdr=(struct iphdr*)(l_buf+sizeof(struct ether_header));
          //printf("%s\n",l_IPHdr->daddr);


      }
  }

