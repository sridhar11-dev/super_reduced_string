str="aaabbcc"
output=""
c=0
str.each_char{|char|
c=str.count(char)
if(c%2!=0)
# 	str.gsub!(char,"")
# else
	output<<char
	str.delete!(char)
end
}

if output.empty?
	print "empty string, #{str} has all even characters"
else
	print output
end
