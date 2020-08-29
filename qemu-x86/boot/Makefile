TARGET = boot

all: $(TARGET).bin

$(TARGET).bin: $(TARGET).o
	ld -o $(@) --oformat binary -e init $(TARGET).o

$(TARGET).o:
	as -o $(@) $(TARGET).s

clean:
	rm -f *.bin *.o
