sum_of_squares = (1..100).to_a.inject(0) {|sum, num| sum + (num*num)}

sum_one_thru_hundred = (1..100).to_a.inject(0, :+)
square_of_sum = sum_one_thru_hundred*sum_one_thru_hundred

puts "Answer: #{square_of_sum - sum_of_squares}"

