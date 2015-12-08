def is_pythogrean_triplet(a,b,c)
  a*a + b*b == c*c
end

def valid_abc_value(a,b,c)
  (a < b ) && (b < c) && (a + b + c == 1000)
end

(1..1000).each do |a|
  (1..1000).each do |b|
    (1..1000).each do |c|
      if valid_abc_value(a,b,c)
        if is_pythogrean_triplet(a,b,c) 
          puts a*b*c
        end
      else
        next
      end
    end
  end
end

