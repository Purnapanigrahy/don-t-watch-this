# its an power game:(2,3)=>2^3=>8
# enter base and the power then your result will be calculated.
def power(base,pow)
    result = 1
    pow.times do 
        result = result * base
    end
    return result
end
# enter inside the paranthisis: 
# first the base , then the power
puts power(5,3)