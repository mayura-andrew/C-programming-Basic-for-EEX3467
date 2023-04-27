loadacc #9
storeacc 0x80
loadacc #8
storeacc 0x89 
sub 0x89
loadacc #6
js
loadacc #8
storeacc 0x81
loadacc &0x80
storeacc 0x83  
loadacc #10
sub 0x83
loadacc #6
js
loadacc #10
storeacc 0x84
loadacc &0x83
storeacc 0x85

loadacc #12
sub 0x85
loadacc #6
js
loadacc 0x85
storeacc 0x89
loadacc #12
storeacc 0x86

add 0x80
storeacc 0x87
add 0x81
storeacc 0x88
add 0x84
storeacc 0x90

 
  




























