import sys
import struct
import codecs

def swapEnd(val):
    hex_string = hex(struct.unpack('<Q', struct.pack('>Q', int(val, 16)))[0])
    return hex_string

def main():
    flag = ""
    for line in sys.stdin:
        hex_string = swapEnd(line)[2:]
        flag += codecs.decode(hex_string, 'hex_codec')
    print flag

if __name__ == "__main__":
    main()