# Elegant solution in Ruby, faster than the C brute-force

composite = 600851475143
current_factor = 2;

factors = []

while(true) do
  break if composite == 1

  if composite % current_factor == 0
    factors << current_factor
    composite = composite / current_factor
  else
    current_factor = current_factor + 1
  end

  puts composite
  puts current_factor

end

puts factors.max


