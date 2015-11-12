import urllib
from bs4 import BeautifulSoup
import re

term_list=list()

while True:
	term = raw_input("Enter a search term or END to exit: ")
	if term == 'END':
		break
	term_list.append(term)

search_items = '+'.join(term_list)

url = "http://www.epicurious.com/tools/searchresults?search="+search_items

content = urllib.urlopen(url).read()
soup = BeautifulSoup(content)


recipeLnk = soup.find('a', attrs={'class':'recipeLnk'})
name = recipeLnk.contents[0]

req_recipe_link = "http://www.epicurious.com"+recipeLnk['href'];

recipe_content = urllib.urlopen(req_recipe_link).read()
recipe_soup = BeautifulSoup(recipe_content)


# div dek
# ol ingredient-groups
# ol preparation-steps

print "Name : "+name+"\n" 
description = recipe_soup.find('div', attrs={'class':'dek'}).get_text()
print "Description: \n"
print description


ingredient = recipe_soup.find('ol', attrs={'class':'ingredient-groups'}).get_text()
print "\nIngredients:\n" 
print ingredient

preparation_steps = recipe_soup.find('ol', attrs={'class':'preparation-steps'}).get_text()
print "\nPreparation:\n"
print preparation_steps

