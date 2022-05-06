#include <stdio.h>                                                                             
#include <string.h>                                                                            
                                                                                               
int main(void)                                                                                 
{                                                                                              
        char str[] = "This$is$my$first$string";                                                
                                                                                               
        char *token = strtok(str, "$");                                                        
                                                                                               
        while (token != NULL)                                                                  
        {                                                                                      
                printf("%s\n", token);                                                         
                token = strtok(NULL, "$");                                                     
        }                                                                                      
                                                                                               
        return (0);                                                                            
}   
