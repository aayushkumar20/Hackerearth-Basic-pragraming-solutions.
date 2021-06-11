test = gets.chomp.to_i
for i in 1..test do
   ballon = gets.chomp.split()
   green = ballon[0].to_i
   purple = ballon[1].to_i
   participants = gets.chomp.to_i
   purple_cost = 0
   green_cost = 0
   total_cost = 0
   for j in 1..participants do
       prob_result = gets.chomp.split()
       stud_1 = prob_result[0].to_i
       stud_2 = prob_result[1].to_i
       purple_cost = purple_cost + (stud_1 * purple) + (stud_2 * green)
       green_cost = green_cost + (stud_1 * green) + (stud_2 * purple)
   end
   #p purple_cost
   #p green_cost
   purple_cost > green_cost ? (p green_cost) : (p purple_cost)
end
