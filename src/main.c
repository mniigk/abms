/*# Includes #################*/

/*  Includes/std/             */
#include <stdio.h>
#include <stdbool.h>            

/*  Includes/locals/          */

/*# Enums/ ###################*/

/*= Enums/List/ ==============*/
/*  1-Global_Errror


/*  Enums/List/1-Global_Errror*/
enum 
ABMS_ERR
{
/*unknown error								*/
	ABMS_ERR_UNKN,
	ABMS_ERR_PARGS
}

/*= STRUCTURES ===============*/

/* struct Configuration       */
struct                        
Cfg		                        
{}                            

/* struct ParsedCmdArgs       */
struct 												
PrsdCmdArgs                   
{
	char * CfgFl
}  

ABMS_ERR					 					
RdCfg													
(															
  struct Cfg* cfg							
)	

/*= FUNCTIONS ================*/
    
/*- List of functions --------*/

/* func ReadConfig            */
ABMS_ERR					 					
RdCfg													
(																
  struct Cfg* cfg							
);
                         
/* func ReadConfiguration     */
ABMS_ERR					 					
RdCfg													
(															
  struct Cfg* cfg							
)														
{																
  FILE* fc = fopen(""); 
	char      
       											
}   
                          
/* func ParseCmdArguments     */
ABMS_ERR
PrsCmdArgs
(
int argc, 										
char** argv	
)
{
  	
}	
														
/* func main                  */
int 													
main													
(															
int argc, 										
char** argv									
)															
{																							
  struct Cfg cfg;							
  enum ABMS_ERR err;					
  err=RdCfg(&cfg);							
}		
													
