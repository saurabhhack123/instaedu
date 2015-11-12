#include <stdio.h> 
#include <string.h>

int main() 
{
	// The user's input string will be stored in this char array
	char buffer[99];

	while(1) {
		printf("I can recognize if you are laughing or not, please type in a string: ");
		scanf("%s", buffer);
		printf("\n");

		// strcmp is a function that compares whether two strings are equal or not
		if(strcmp(buffer, "bye") == 0) 
		{
		printf("Bye now!\n");
		break;
		}

		// strlen is a function that returns the length of a string
		int len = strlen(buffer);
		printf("Your input is: %s\n", buffer); 
		
		// define 4 states
		enum States {
		  state_1,
		  state_2,
		  state_3,
		  state_4
		};

        // initialize stare to state_1

		enum States state = state_1;

		
		int i;
		char ch;
	
		for(i = 0; i < len; i++) 
		{
			// scan character
			ch = buffer[i];
			int done = 0 ;
			switch(state){
               
				// if 'h' state become 2
				case state_1:
				if(ch == 'h'){
					state = state_2;
				}
				break;
                
                //  if state_2 , possible transitions
				case state_2:
				if(ch == 'a' || ch == 'o'){
					state = state_3;
				}
				break;

				// if state_3 , possible transitions
				case state_3:
				if(ch == '!'){
					state = state_4;
				}else if(ch == 'h'){
				    state = state_2;
				}else{
					done = 1; 
					printf("not h nor i\n");
					break; 
				}
				break;

				// if state_4 , end
				case state_4:
				  break;

				default:
				  break;   
			}

		   // if reached to state_4 or any other invalid input 
		   if(state == state_4 || done)
		     break;   
		}
        
        
		if(i+1==len && state == state_4){
			printf("You are laughing\n");
		}else{
			printf("You are not laughing\n");
		}
	}

}