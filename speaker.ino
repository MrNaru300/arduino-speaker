#define RATE 14400

byte music[] = {
	0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB3,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB3,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x65,0xBE,0x53,0x76,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB6,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x4A,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x4A,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB6,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD,0x50,0x7B,0xB7,0x47,0x8B,0xAC,0x42,0x9A,0x9F,0x41,0xA8,0x90,0x45,0xB4,0x80,0x4C,0xBB,0x70,0x58,0xBF,0x61,0x66,0xBE,0x54,0x75,0xB9,0x49,0x85,0xB0,0x43,0x95,0xA4,0x41,0xA4,0x95,0x43,0xB0,0x85,0x49,0xB9,0x75,0x54,0xBE,0x66,0x61,0xBF,0x58,0x70,0xBB,0x4C,0x80,0xB4,0x45,0x90,0xA8,0x41,0x9F,0x9A,0x42,0xAC,0x8B,0x47,0xB7,0x7B,0x50,0xBD,0x6B,0x5C,0xBF,0x5C,0x6B,0xBD
};

const int potent_pin = 0;


void setup() {
  for (int pin = 0; pin < 8; pin++) {
  	pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  playMusic();
  playSample(0);
}


void testTones(int freq) {
  for (int i = 0; i < 100; i++) {
   squareTone(freq); 
  }
  for (int i = 0; i < 100; i++) {
   sharpTone(freq); 
  }
  for (int i = 0; i < 100; i++) {
   sinTone(freq); 
  }
}

void sharpTone(int freq) {

  for (int i = 0; i < RATE/freq; i++) {
 	playSample(i);
   	delayMicroseconds(1000000/RATE);
 }
 playSample(0);
}

void squareTone(int freq) {
  playSample(255);
  delayMicroseconds(floor(500000/freq));
  playSample(0);
  delayMicroseconds(floor(500000/freq));
}

void sinTone (int freq) {
  float pos = 0;
  for (int i = 0; i < RATE/freq; i++) {
    pos = sin(6.28318530718*i*freq/RATE);
    playSample(floor((pos+1)*127));
    delayMicroseconds(floor(1000000/RATE));
  }
  playSample(0);
}

void playMusic() {
  const int s = sizeof(music);
  for (int i = 0; i < s; i++) {
  	playSample(music[i]);
  	delayMicroseconds(floor(1000000/RATE));
  }
}


void playSample(byte sample) {
  PORTD = sample;
}