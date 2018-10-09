; Compile using RGBASM
xor a
ld l, a
inc a
ld h, a ; h = $01
rrc h ; h = $80, carry set
set ($FF^$FB), h ; h = $90
set ($FF^$FC), h ; hl = $9800
rla ; a = $03
swap a ; a = $30
REPT $FF^$FB
inc a ; a = $31 = '1'
ld [hli], a
ENDR
