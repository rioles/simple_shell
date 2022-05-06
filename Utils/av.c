#include <stdio.h>                                                                             
#include <stdlib.h>#include <stdio.h>                                                                             
#include <stdlib.h>

/**                                                                                            
 * main - prints all args without using ac                                                     
 *                                                                                             
 * Return: always 0                                                                            
 */                                                                                            
int main(int ac, char **av)                                                                    
{                                                                                              
        int count = 0;                                                                         
                                                                                               
        while(av[++count]);                                                                    
                                                                                               
        printf("%d\n", count);                                                                 
                                                                                               
        //size_t n = sizeof(*av);                                                              
                                                                                               
        //printf("size: %d\n", sizeof(av));                                                    
        //printf("size: %d\n", sizeof(*av));                                                   
                                                                                               
        for (int i = 0; i < count; i++)                                                        
                printf("%s\n", av[i]);                                                         
                                                                                               
        return (0);                                                                            

