def common_chars(string1 , string2):
	s = ""
	for char1 in string1:
		if string2.find(char1)!=-1:
			s+=str(char1)
	return s


string1 = strinput("Enter string1:");
string2 = input("Enter string2:");

str = common_chars(string1,string2)
print "Final string :"+str