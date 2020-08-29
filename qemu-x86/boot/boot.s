.code16 
.global init # makes our label "init" available to the outside 
init: # this is the beginning of our binary later. 
  mov $0x0e41, %ax # sets AH to 0xe (function teletype) and al to 0x41 (ASCII "A") 
  int $0x10 # call the function in ah from interrupt 0x10 
  hlt # stops executing 
.fill 510-(.-init), 1, 0 # add zeroes to make it 510 bytes long 
.word 0xaa55 # magic bytes that tell BIOS that this is bootable
