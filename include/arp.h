struct arp_hdr {
	unsigned short int hrd_addr;
	unsigned short int proto_addr;
	unsigned char hrd_len;
	unsigned char protp_len;
	unsigned short int ar_op;
};
