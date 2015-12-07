require "pry"

def is_palindrome(num)
  # With these high level convenience methods in ruby, its not even fair
  # Should really challenge myself by doing this in C
  num.to_s.reverse == num.to_s
end

answer = 1

(100..999).to_a.each do |num1|
  (100..999).to_a.each do |num2|
    current_product = num1 * num2
    if is_palindrome(current_product) && (current_product > answer)
      answer = current_product
    end
  end
end

puts answer

