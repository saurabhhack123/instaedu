def main():

    # Open a file for writing and assign it to the variable outfile.
    outfile = open('numbers.txt', 'w')

    # Create a loop to generate the in the quantity specified.
    for number in range(1, 11):
        # Convert the numbers to a string and write them to the file.
        print number
        outfile.write(str(number))
        outfile.write('\n');
        
    # Close the file.
    outfile.close()

    number = 0
    total = 0
    print('List of numbers: ')

    # for line in infile.readline():
        # print line.strip()
    
    for line in open('numbers.txt', 'r'):
          total = total +int(line.rstrip('\n'))
          number = number+ 1
    
    print total
    print('The total of the numbers = ', number)

    outfile = open('numbers.txt', 'a')
    for numbers in range(11, 21):
        outfile.write(str(numbers))
        outfile.write('\n')
        

    outfile.close()
    

    op_file = open('numbers.txt', 'r')
    contents = op_file.read()
    new_contents = contents.replace('10','50')
    new_contents = new_contents.replace('16',' ')
    new_contents = new_contents.replace('17',' ')
    new_contents = new_contents.replace('18',' ')
    
    outfile_new = open('numbers.txt', 'w')
    outfile_new.write(new_contents)
        

    op_file.close()
    
main()