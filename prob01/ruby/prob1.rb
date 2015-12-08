answer = 0

(1..1000).each do |num|
  if (num % 3 == 0) || (num % 5 == 0)
    answer = answer + num
  end
end

puts answer

