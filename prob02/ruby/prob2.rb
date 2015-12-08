answer = 0

current = 2
previous = 1

while current < 4_000_000
  if current % 2 == 0
    answer = answer + current 
  end

  previous, current = current, current + previous
end

puts answer

