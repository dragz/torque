#include "license_pbs.h" /* See here for the software license */
#include <stdlib.h>
#include <stdio.h>
#include "tcp.h"

unsigned dis_umaxd = 0;

void disiui_(void)
  { 
  fprintf(stderr, "The call to disiui_ needs to be mocked!!\n");
  exit(1);
  }

int tcp_gets(struct tcp_chan *chan, char *str, size_t ct)
  { 
  fprintf(stderr, "The call to tcp_gets needs to be mocked!!\n");
  exit(1);
  }

int tcp_getc(struct tcp_chan *chan)
  { 
  fprintf(stderr, "The call to tcp_getc needs to be mocked!!\n");
  exit(1);
  }

char *discul_(char *cp, unsigned long value, unsigned *ndigs)
  { 
  fprintf(stderr, "The call to discul_ needs to be mocked!!\n");
  exit(1);
  }

