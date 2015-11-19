# def stamp_mail_cost:


# end

puts "Enter weight";
w = gets.chomp.to_i;

puts "Enter Zone";
puts "1.local";
puts "2.Air";
z = gets.chomp.to_i;


if z==1
	medium_cost = 0.49
else
	medium_cost = 0.95
end


puts "Enter Zone 1,2,3";
zone = gets.chomp.to_i;

if zone==1
	zone_cost=0.50
elsif zone==2
	zone_cost=0.65
else 
	zone_cost=0.80
end
	


stamp_cost=0;
min_cost = w

while min_cost>0 do
	stamp_cost+=medium_cost + medium_cost*zone_cost
	min_cost-=0.5
end

if stamp_cost<20
	puts "Stamp Cost is :"
	puts stamp_cost
else
	puts "Stamp cost cannot be greater than 20$"
end

