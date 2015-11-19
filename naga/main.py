import glob, os
import sys
import random

#  dict is mapping from word to array of words
def get_dict(filename):
	req_dict = {}
	for line in open(filename, 'r'):
		line = line.rstrip('\n')
		colon_pos = line.find(':')
		key = line[3:colon_pos]
		req_dict[key] = line[colon_pos+1:].split(',')
	return req_dict

# to export dict to a file
def export_dict(filename,give_dict):
	outfile = open(filename, 'w')
	for key, values in give_dict.iteritems():
		outfile = open(filename, 'a')
		after_colon_str = ''
		values_len = len(values)
		i = 0
		for value in values:
			after_colon_str +=str(value)
			if( (i>=0 & i!=values_len-1)) :
				after_colon_str+=str(',')
			i=i+1
 
		line_add = str("to ")+str(key)+str(":")+str(after_colon_str.rstrip(','))
		outfile.write(str(line_add))
		outfile.write('\n')

# save incorrect ans
def save_incorr_file(word):
	outfile = open('incorrect.txt', 'a')
	outfile.write(str(word))
	outfile.write('\n')


# open curr dir
curr_dir = os.getcwd()
os.chdir(curr_dir)

print "select the vocabulary file"

is_txt = 0
valid_files = []

for filename in glob.glob('*txt'):
	print(filename)
	valid_files.append(filename)
	is_txt=1

if is_txt==0:
	print "No txt file"
	sys.exit()

user_file = raw_input("Enter file name for quiz :");

if user_file not in valid_files:
	print "Not a valid file"

user_dict =  get_dict(user_file)
export_dict('new.txt',user_dict)

no_eng_words = len(user_dict.keys())
print "No of English words"
print no_eng_words

words_count = int(raw_input("Enter no of words to be quizzed on :"))

if words_count<1 & words_count>no_eng_words:
	print "Invalid Number of words"
	sys.exit()

# initialize the file
outfile = open('incorrect.txt', 'a')

i=0
while i<words_count:
	random_index = random.randint(0,words_count-1)
	ques =  user_dict.keys()[random_index]
	ans_arr =  user_dict.values()[random_index]
	print ques
	user_inp = raw_input("Enter Spanish word for above word : ")
	if user_inp in ans_arr:
		print "Correct"
	else:
		save_incorr_file(ques)
	i=i+1

