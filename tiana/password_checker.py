import re

print "Press Ctrl+C to end the program";

while 1:

	has_req_len = 0;
	has_small_alph = 0;
	has_cap = 0;
	has_special_char = 0;
	has_digit=0;

	password = raw_input("Enter your password:");
    # check for length of the password
	if len(password) >= 8 & len(password) < 30:
	  has_req_len = 1 ;

	# Check if contains at least one digit
	if re.search(r'\d', password):
	  has_digit = 1 ;
	# Check if contains at least one uppercase letter
	if re.search(r'[A-Z]', password):
	   has_cap = 1;
	# Check if contains at least one lowercase letter
	if re.search(r'[a-z]', password):
	   has_small_alph = 1;
    # check for special character
	if re.search(r'[#,+,!,@,#,$,&,(,),^,%,!,%]', password):
	   has_special_char =1;
    
    # add all the parameter to get the strongness 
	strongness = has_digit+has_cap+has_special_char+has_small_alph+has_req_len
	
	# checks for  pass strength
	if strongness == 1:
	    print "This password is WEAK";

	if strongness == 2:
	   print "This password is ACCEPTABLE";

	if strongness == 3:
	   print "This password is GOOD";

	if strongness >= 4:
	   print "This password is STRONG";




    