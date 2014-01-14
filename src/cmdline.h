#ifndef __cmdline__
#define __cmdline__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~geg/clighome/)

  The command line parser `clig':
  (C) 1995-2004 Harald Kirsch (clig@geggus.net)
*****/

typedef struct s_Cmdline {
  /***** -l: List available sensors and actuators on bus and terminate */
  char listP;
  /***** -d: print debug info */
  char debugP;
  /***** -bd: run Program as a daemon in background */
  char daemonP;
  /***** -c: runtime configuration file */
  char configfileP;
  char* configfile;
  int configfileC;
  /***** -u: username to switch to, when run as root */
  char usernameP;
  char* username;
  int usernameC;
  /***** -p: pidfile location, when run as root and in background */
  char pidfileP;
  char* pidfile;
  int pidfileC;
  /***** -s: simulate temperature measurements */
  char simulationP;
  /***** -n: show only given network interfaces in getifinfo call */
  char netifP;
  char* *netif;
  int netifC;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

#endif

