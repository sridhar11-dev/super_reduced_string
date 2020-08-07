str="aaabbcc"
output=Array.new
str.each_char{|char|
if (output==[])
output.push(char)
elsif (output.last==char)
output.pop()
else
output.push(char)
end
}
res=output.join()
if res.empty?
	print "empty string, #{str} has all even characters"
else
	print res
end
