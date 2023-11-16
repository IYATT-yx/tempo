/**
 * 字模
 */
#ifndef FONTS_HPP
#define FONTS_HPP

#define NUMBER_LETTER_FONT_WIDTH   8
#define NUMBER_LETTER_FONT_HEIGHT  16

// 数字字模
static const unsigned char PROGMEM number_fonts[][16] =
{
    0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00,/*"0",0*/
    0x00,0x00,0x00,0x08,0x38,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,/*"1",1*/
    0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x02,0x04,0x08,0x10,0x20,0x42,0x7E,0x00,0x00,/*"2",2*/
    0x00,0x00,0x00,0x3C,0x42,0x42,0x02,0x04,0x18,0x04,0x02,0x42,0x42,0x3C,0x00,0x00,/*"3",3*/
    0x00,0x00,0x00,0x04,0x0C,0x0C,0x14,0x24,0x24,0x44,0x7F,0x04,0x04,0x1F,0x00,0x00,/*"4",4*/
    0x00,0x00,0x00,0x7E,0x40,0x40,0x40,0x78,0x44,0x02,0x02,0x42,0x44,0x38,0x00,0x00,/*"5",5*/
    0x00,0x00,0x00,0x18,0x24,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x22,0x1C,0x00,0x00,/*"6",6*/
    0x00,0x00,0x00,0x7E,0x42,0x04,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x00,0x00,/*"7",7*/
    0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00,/*"8",8*/
    0x00,0x00,0x00,0x38,0x44,0x42,0x42,0x42,0x46,0x3A,0x02,0x02,0x24,0x18,0x00,0x00,/*"9",9*/
};

// 字母和半角符号字模
static const unsigned char PROGMEM letter_fonts[][16] =
{
    0x00,0x00,0x00,0xD6,0x54,0x54,0x54,0x54,0x54,0x6C,0x28,0x28,0x28,0x28,0x00,0x00,/*"W",0*/
    0x00,0x00,0x00,0xFC,0x42,0x48,0x48,0x78,0x48,0x48,0x40,0x40,0x40,0xE0,0x00,0x00,/*"F",1*/
    0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,/*"i",2*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,/*":",3*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,/*".",4*/
    0x00,0x00,0x00,0x44,0xA4,0xA8,0xA8,0xB0,0x54,0x1A,0x2A,0x2A,0x4A,0x44,0x00,0x00,/*"%",5*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"-",6*/
};

// 汉字和全角符号字模
#define CHINESE_FONT_WIDTH  16
#define CHINESE_FONT_HEIGHT 16

static const unsigned char PROGMEM chinese_fonts[][32] =
{
    0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,
    0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,/*"日",0*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"一",1*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,/*"二",2*/
    0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,/*"三",3*/
    0x00,0x00,0x00,0x00,0x7F,0xFC,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
    0x48,0x44,0x48,0x3C,0x50,0x04,0x60,0x04,0x40,0x04,0x7F,0xFC,0x40,0x04,0x00,0x00,/*"四",4*/
    0x00,0x00,0x7F,0xFC,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x3F,0xF0,0x04,0x10,
    0x04,0x10,0x04,0x10,0x04,0x10,0x08,0x10,0x08,0x10,0x08,0x10,0xFF,0xFE,0x00,0x00,/*"五",5*/
    0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x80,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,
    0x04,0x40,0x04,0x20,0x08,0x10,0x08,0x08,0x10,0x08,0x20,0x04,0x40,0x04,0x00,0x00,/*"六",6*/
    0x00,0x00,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x01,0x00,0x11,0x00,
    0x1F,0xF8,0x21,0x00,0x41,0x00,0x1F,0xF0,0x01,0x00,0x01,0x00,0x7F,0xFC,0x00,0x00,/*"星",7*/
    0x22,0x00,0x22,0x7C,0x7F,0x44,0x22,0x44,0x22,0x44,0x3E,0x7C,0x22,0x44,0x22,0x44,
    0x3E,0x44,0x22,0x7C,0x22,0x44,0xFF,0x44,0x04,0x84,0x22,0x84,0x41,0x14,0x82,0x08,/*"期",8*/
    0x00,0x00,0x7F,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x11,0x00,0x11,0xF8,
    0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0xFF,0xFE,0x00,0x00,/*"正",9*/
    0x02,0x00,0x02,0x00,0x04,0x00,0xFF,0xFE,0x08,0x00,0x08,0x40,0x10,0x40,0x30,0x40,
    0x57,0xFC,0x90,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x1F,0xFE,0x10,0x00,/*"在",10*/
    0x00,0x40,0x20,0x40,0x17,0xFE,0x10,0x80,0x00,0xA0,0x01,0x20,0xF3,0xFC,0x10,0x20,
    0x10,0x20,0x10,0x20,0x17,0xFE,0x10,0x20,0x10,0x20,0x28,0x20,0x47,0xFE,0x00,0x00,/*"连",11*/
    0x10,0x80,0x10,0x40,0x13,0xFC,0x10,0x00,0xFD,0x08,0x10,0x90,0x17,0xFE,0x10,0x40,
    0x18,0x40,0x37,0xFE,0xD0,0x88,0x11,0x08,0x10,0x90,0x10,0x60,0x51,0x98,0x26,0x04,/*"接",12*/
    0x00,0x50,0x00,0x48,0x00,0x40,0x3F,0xFE,0x20,0x40,0x20,0x40,0x20,0x44,0x3E,0x44,
    0x22,0x44,0x22,0x28,0x22,0x28,0x22,0x12,0x2A,0x32,0x44,0x4A,0x40,0x86,0x81,0x02,/*"成",13*/
    0x00,0x40,0x00,0x40,0x00,0x40,0xFE,0x40,0x11,0xFC,0x10,0x44,0x10,0x44,0x10,0x44,
    0x10,0x44,0x10,0x84,0x10,0x84,0x1E,0x84,0xF1,0x04,0x41,0x04,0x02,0x28,0x04,0x10,/*"功",14*/
    0x00,0x00,0x3F,0xFC,0x20,0x04,0x20,0x04,0x2F,0xF4,0x20,0x04,0x20,0x04,0x27,0xE4,
    0x24,0x24,0x24,0x24,0x24,0x24,0x27,0xE4,0x24,0x24,0x20,0x04,0x20,0x14,0x20,0x08,/*"同",15*/
    0x01,0x00,0x01,0x00,0x11,0xF8,0x11,0x00,0x11,0x00,0x11,0x00,0xFF,0xFE,0x01,0x00,
    0x01,0x00,0x11,0x08,0x11,0x10,0x21,0x20,0x40,0xC0,0x03,0x00,0x1C,0x00,0xE0,0x00,/*"步",16*/
    0x00,0x08,0x00,0x08,0x7C,0x08,0x44,0x08,0x45,0xFE,0x44,0x08,0x44,0x08,0x7C,0x08,
    0x44,0x88,0x44,0x48,0x44,0x48,0x44,0x08,0x7C,0x08,0x44,0x08,0x00,0x28,0x00,0x10,/*"时",17*/
    0x20,0x00,0x13,0xFC,0x10,0x04,0x40,0x04,0x47,0xC4,0x44,0x44,0x44,0x44,0x44,0x44,
    0x47,0xC4,0x44,0x44,0x44,0x44,0x44,0x44,0x47,0xC4,0x40,0x04,0x40,0x14,0x40,0x08,/*"间",18*/
    0x60,0x00,0x91,0xF4,0x96,0x0C,0x6C,0x04,0x08,0x04,0x18,0x00,0x18,0x00,0x18,0x00,
    0x18,0x00,0x18,0x00,0x18,0x00,0x08,0x00,0x0C,0x04,0x06,0x08,0x01,0xF0,0x00,0x00,/*"℃",19*/
};

#endif