#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 int playSound( char *filename ) {
    char command[256];
    int status; 
    /* create command to execute */ 
    sprintf( command, "aplay -c 1 -q -t wav %s", filename );  
    
    /* play sound */ 
    status = system( command );
    return status;
 }  

