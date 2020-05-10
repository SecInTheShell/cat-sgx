// W: this file is generated by lib/gen_ocall_stub.py script
// Here I just copy it for setting a stub table for ocalls

static void *ocall_table[38] = {
    (void *) sgx_clock,
    (void *) sgx_time,
    (void *) sgx_localtime,
    (void *) sgx_gmtime,
    (void *) sgx_mktime,
    (void *) sgx_gettimeofday,
    (void *) sgx_puts1time,
    (void *) sgx_puts,
    (void *) sgx_push_gadget,
    (void *) sgx_open,
    (void *) sgx_close,
    (void *) sgx_read,
    (void *) sgx_write,
    (void *) sgx_lseek,
    (void *) sgx_socket,
    (void *) sgx_bind,
    (void *) sgx_connect,
    (void *) sgx_listen,
    (void *) sgx_accept,
    (void *) sgx_fstat,
    (void *) sgx_send,
    (void *) sgx_recv,
    (void *) sgx_sendto,
    (void *) sgx_recvfrom,
    (void *) sgx_gethostname,
    (void *) sgx_getaddrinfo,
    (void *) sgx_getenv,
    (void *) sgx_getsockname,
    (void *) sgx_getsockopt,
    (void *) sgx_getservbyname,
    (void *) sgx_getprotobynumber,
    (void *) sgx_setsockopt,
    (void *) sgx_htons,
    (void *) sgx_htonl,
    (void *) sgx_ntohs,
    (void *) sgx_ntohl,
    (void *) sgx_signal,
    (void *) sgx_shutdown,
};

// TODO: check if it breaks the calling ABI
void do_sgx_ocall() {
    __asm__ __volatile__ (
        "mov (%0, %%r15, 8), %%r15\n"
        "call *%%r15\n"
    ::"r" (ocall_table));
}
