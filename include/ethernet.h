#ifndef __KNET_ETHERNET_H
#define __KNET_ETHERNET_H

struct ether_hdr {
	u_int8_t ether_dest_addr[6];
	u_int8_t ether_src_addr[6];
	u_int16_t type;
}

#endif
