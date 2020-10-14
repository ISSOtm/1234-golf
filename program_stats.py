#!/usr/bin/python3
import sys
import string

banned_chars = "'\"0123456789"
illegal_chars = []
char_count = 0
line_id = 0
with open(sys.argv[1], "rt") as in_file:
	for line in in_file:
		line_id = line_id + 1
		col_id = 0
		for char in line:
			col_id = col_id + 1
			
			if char in banned_chars:
				illegal_chars.append((char, line_id, col_id))
			elif not char in string.whitespace:
				char_count = char_count + 1

if illegal_chars:
	print("Illegal characters were found!")
	for pair in illegal_chars:
		print("{} @ line {}, column {}".format(*pair))
else:
	print("The program is valid!")
	print("It also contains {} characters.".format(char_count))
