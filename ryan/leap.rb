# utility function to check if function is leap is not
def is_leap(year)

    if year % 400 == 0
        true
    elsif year % 100 == 0
        false
    elsif year % 4 == 0
        true
    else
        false
    end
end

# Take user input 

$ch = "Y"
print "Enter Year : "
$num = Integer(gets.chomp)  

# looping to take continous inputs

loop do

    if(is_leap($num))
     puts "Year entered is a leap year.\n"
    else
   	 puts "Year entered is NOT a leap year\n"
    end

    print "Do you want to test check another year?"
    ch = gets.chomp

    break if ch!="Y"

    print "\nEnter Year : "
    $num = Integer(gets.chomp)

end

puts "Thanks"

