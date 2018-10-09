false
A=$?
B=$(expr $A + $A)
echo $A$B$(expr $A + $B)$(expr $B + $B)
