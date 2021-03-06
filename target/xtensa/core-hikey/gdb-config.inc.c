/* Configuration for the Xtensa architecture for GDB, the GNU debugger.

   Customer ID=7729; Build=0x71521; Copyright (c) 2003-2018 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */



  /*    idx ofs bi sz al targno  flags cp typ group name  */
  XTREG(  0,  0,32, 4, 4,0x0020,0x0006,-2, 9,0x0100,pc,          0,0,0,0,0,0)
  XTREG(  1,  4,32, 4, 4,0x0100,0x0006,-2, 1,0x0002,ar0,         0,0,0,0,0,0)
  XTREG(  2,  8,32, 4, 4,0x0101,0x0006,-2, 1,0x0002,ar1,         0,0,0,0,0,0)
  XTREG(  3, 12,32, 4, 4,0x0102,0x0006,-2, 1,0x0002,ar2,         0,0,0,0,0,0)
  XTREG(  4, 16,32, 4, 4,0x0103,0x0006,-2, 1,0x0002,ar3,         0,0,0,0,0,0)
  XTREG(  5, 20,32, 4, 4,0x0104,0x0006,-2, 1,0x0002,ar4,         0,0,0,0,0,0)
  XTREG(  6, 24,32, 4, 4,0x0105,0x0006,-2, 1,0x0002,ar5,         0,0,0,0,0,0)
  XTREG(  7, 28,32, 4, 4,0x0106,0x0006,-2, 1,0x0002,ar6,         0,0,0,0,0,0)
  XTREG(  8, 32,32, 4, 4,0x0107,0x0006,-2, 1,0x0002,ar7,         0,0,0,0,0,0)
  XTREG(  9, 36,32, 4, 4,0x0108,0x0006,-2, 1,0x0002,ar8,         0,0,0,0,0,0)
  XTREG( 10, 40,32, 4, 4,0x0109,0x0006,-2, 1,0x0002,ar9,         0,0,0,0,0,0)
  XTREG( 11, 44,32, 4, 4,0x010a,0x0006,-2, 1,0x0002,ar10,        0,0,0,0,0,0)
  XTREG( 12, 48,32, 4, 4,0x010b,0x0006,-2, 1,0x0002,ar11,        0,0,0,0,0,0)
  XTREG( 13, 52,32, 4, 4,0x010c,0x0006,-2, 1,0x0002,ar12,        0,0,0,0,0,0)
  XTREG( 14, 56,32, 4, 4,0x010d,0x0006,-2, 1,0x0002,ar13,        0,0,0,0,0,0)
  XTREG( 15, 60,32, 4, 4,0x010e,0x0006,-2, 1,0x0002,ar14,        0,0,0,0,0,0)
  XTREG( 16, 64,32, 4, 4,0x010f,0x0006,-2, 1,0x0002,ar15,        0,0,0,0,0,0)
  XTREG( 17, 68,32, 4, 4,0x0110,0x0006,-2, 1,0x0002,ar16,        0,0,0,0,0,0)
  XTREG( 18, 72,32, 4, 4,0x0111,0x0006,-2, 1,0x0002,ar17,        0,0,0,0,0,0)
  XTREG( 19, 76,32, 4, 4,0x0112,0x0006,-2, 1,0x0002,ar18,        0,0,0,0,0,0)
  XTREG( 20, 80,32, 4, 4,0x0113,0x0006,-2, 1,0x0002,ar19,        0,0,0,0,0,0)
  XTREG( 21, 84,32, 4, 4,0x0114,0x0006,-2, 1,0x0002,ar20,        0,0,0,0,0,0)
  XTREG( 22, 88,32, 4, 4,0x0115,0x0006,-2, 1,0x0002,ar21,        0,0,0,0,0,0)
  XTREG( 23, 92,32, 4, 4,0x0116,0x0006,-2, 1,0x0002,ar22,        0,0,0,0,0,0)
  XTREG( 24, 96,32, 4, 4,0x0117,0x0006,-2, 1,0x0002,ar23,        0,0,0,0,0,0)
  XTREG( 25,100,32, 4, 4,0x0118,0x0006,-2, 1,0x0002,ar24,        0,0,0,0,0,0)
  XTREG( 26,104,32, 4, 4,0x0119,0x0006,-2, 1,0x0002,ar25,        0,0,0,0,0,0)
  XTREG( 27,108,32, 4, 4,0x011a,0x0006,-2, 1,0x0002,ar26,        0,0,0,0,0,0)
  XTREG( 28,112,32, 4, 4,0x011b,0x0006,-2, 1,0x0002,ar27,        0,0,0,0,0,0)
  XTREG( 29,116,32, 4, 4,0x011c,0x0006,-2, 1,0x0002,ar28,        0,0,0,0,0,0)
  XTREG( 30,120,32, 4, 4,0x011d,0x0006,-2, 1,0x0002,ar29,        0,0,0,0,0,0)
  XTREG( 31,124,32, 4, 4,0x011e,0x0006,-2, 1,0x0002,ar30,        0,0,0,0,0,0)
  XTREG( 32,128,32, 4, 4,0x011f,0x0006,-2, 1,0x0002,ar31,        0,0,0,0,0,0)
  XTREG( 33,132,32, 4, 4,0x0120,0x0006,-2, 1,0x0002,ar32,        0,0,0,0,0,0)
  XTREG( 34,136,32, 4, 4,0x0121,0x0006,-2, 1,0x0002,ar33,        0,0,0,0,0,0)
  XTREG( 35,140,32, 4, 4,0x0122,0x0006,-2, 1,0x0002,ar34,        0,0,0,0,0,0)
  XTREG( 36,144,32, 4, 4,0x0123,0x0006,-2, 1,0x0002,ar35,        0,0,0,0,0,0)
  XTREG( 37,148,32, 4, 4,0x0124,0x0006,-2, 1,0x0002,ar36,        0,0,0,0,0,0)
  XTREG( 38,152,32, 4, 4,0x0125,0x0006,-2, 1,0x0002,ar37,        0,0,0,0,0,0)
  XTREG( 39,156,32, 4, 4,0x0126,0x0006,-2, 1,0x0002,ar38,        0,0,0,0,0,0)
  XTREG( 40,160,32, 4, 4,0x0127,0x0006,-2, 1,0x0002,ar39,        0,0,0,0,0,0)
  XTREG( 41,164,32, 4, 4,0x0128,0x0006,-2, 1,0x0002,ar40,        0,0,0,0,0,0)
  XTREG( 42,168,32, 4, 4,0x0129,0x0006,-2, 1,0x0002,ar41,        0,0,0,0,0,0)
  XTREG( 43,172,32, 4, 4,0x012a,0x0006,-2, 1,0x0002,ar42,        0,0,0,0,0,0)
  XTREG( 44,176,32, 4, 4,0x012b,0x0006,-2, 1,0x0002,ar43,        0,0,0,0,0,0)
  XTREG( 45,180,32, 4, 4,0x012c,0x0006,-2, 1,0x0002,ar44,        0,0,0,0,0,0)
  XTREG( 46,184,32, 4, 4,0x012d,0x0006,-2, 1,0x0002,ar45,        0,0,0,0,0,0)
  XTREG( 47,188,32, 4, 4,0x012e,0x0006,-2, 1,0x0002,ar46,        0,0,0,0,0,0)
  XTREG( 48,192,32, 4, 4,0x012f,0x0006,-2, 1,0x0002,ar47,        0,0,0,0,0,0)
  XTREG( 49,196,32, 4, 4,0x0130,0x0006,-2, 1,0x0002,ar48,        0,0,0,0,0,0)
  XTREG( 50,200,32, 4, 4,0x0131,0x0006,-2, 1,0x0002,ar49,        0,0,0,0,0,0)
  XTREG( 51,204,32, 4, 4,0x0132,0x0006,-2, 1,0x0002,ar50,        0,0,0,0,0,0)
  XTREG( 52,208,32, 4, 4,0x0133,0x0006,-2, 1,0x0002,ar51,        0,0,0,0,0,0)
  XTREG( 53,212,32, 4, 4,0x0134,0x0006,-2, 1,0x0002,ar52,        0,0,0,0,0,0)
  XTREG( 54,216,32, 4, 4,0x0135,0x0006,-2, 1,0x0002,ar53,        0,0,0,0,0,0)
  XTREG( 55,220,32, 4, 4,0x0136,0x0006,-2, 1,0x0002,ar54,        0,0,0,0,0,0)
  XTREG( 56,224,32, 4, 4,0x0137,0x0006,-2, 1,0x0002,ar55,        0,0,0,0,0,0)
  XTREG( 57,228,32, 4, 4,0x0138,0x0006,-2, 1,0x0002,ar56,        0,0,0,0,0,0)
  XTREG( 58,232,32, 4, 4,0x0139,0x0006,-2, 1,0x0002,ar57,        0,0,0,0,0,0)
  XTREG( 59,236,32, 4, 4,0x013a,0x0006,-2, 1,0x0002,ar58,        0,0,0,0,0,0)
  XTREG( 60,240,32, 4, 4,0x013b,0x0006,-2, 1,0x0002,ar59,        0,0,0,0,0,0)
  XTREG( 61,244,32, 4, 4,0x013c,0x0006,-2, 1,0x0002,ar60,        0,0,0,0,0,0)
  XTREG( 62,248,32, 4, 4,0x013d,0x0006,-2, 1,0x0002,ar61,        0,0,0,0,0,0)
  XTREG( 63,252,32, 4, 4,0x013e,0x0006,-2, 1,0x0002,ar62,        0,0,0,0,0,0)
  XTREG( 64,256,32, 4, 4,0x013f,0x0006,-2, 1,0x0002,ar63,        0,0,0,0,0,0)
  XTREG( 65,260,32, 4, 4,0x0200,0x0006,-2, 2,0x1100,lbeg,        0,0,0,0,0,0)
  XTREG( 66,264,32, 4, 4,0x0201,0x0006,-2, 2,0x1100,lend,        0,0,0,0,0,0)
  XTREG( 67,268,32, 4, 4,0x0202,0x0006,-2, 2,0x1100,lcount,      0,0,0,0,0,0)
  XTREG( 68,272, 6, 4, 4,0x0203,0x0006,-2, 2,0x1100,sar,         0,0,0,0,0,0)
  XTREG( 69,276,13, 4, 4,0x0228,0x0006,-2, 2,0x1100,prefctl,     0,0,0,0,0,0)
  XTREG( 70,280, 4, 4, 4,0x0248,0x0006,-2, 2,0x1002,windowbase,  0,0,0,0,0,0)
  XTREG( 71,284,16, 4, 4,0x0249,0x0006,-2, 2,0x1002,windowstart, 0,0,0,0,0,0)
  XTREG( 72,288,32, 4, 4,0x02b0,0x0002,-2, 2,0x1000,configid0,   0,0,0,0,0,0)
  XTREG( 73,292,32, 4, 4,0x02d0,0x0002,-2, 2,0x1000,configid1,   0,0,0,0,0,0)
  XTREG( 74,296,19, 4, 4,0x02e6,0x0006,-2, 2,0x1100,ps,          0,0,0,0,0,0)
  XTREG( 75,300,16, 4, 4,0x0204,0x0006,-1, 2,0x1100,br,          0,0,0,0,0,0)
  XTREG( 76,304,32, 4, 4,0x020c,0x0006,-1, 2,0x1100,scompare1,   0,0,0,0,0,0)
  XTREG( 77,308,32, 4, 4,0x0210,0x0006,-1, 2,0x1100,acclo,       0,0,0,0,0,0)
  XTREG( 78,312, 8, 4, 4,0x0211,0x0006,-1, 2,0x1100,acchi,       0,0,0,0,0,0)
  XTREG( 79,316,32, 4, 4,0x0220,0x0006,-1, 2,0x1100,m0,          0,0,0,0,0,0)
  XTREG( 80,320,32, 4, 4,0x0221,0x0006,-1, 2,0x1100,m1,          0,0,0,0,0,0)
  XTREG( 81,324,32, 4, 4,0x0222,0x0006,-1, 2,0x1100,m2,          0,0,0,0,0,0)
  XTREG( 82,328,32, 4, 4,0x0223,0x0006,-1, 2,0x1100,m3,          0,0,0,0,0,0)
  XTREG( 83,332,32, 4, 4,0x03e6,0x000e,-1, 3,0x0110,expstate,    0,0,0,0,0,0)
  XTREG( 84,336, 8, 4, 4,0x03f0,0x0006, 1, 3,0x0100,ae_ovf_sar,  0,0,0,0,0,0)
  XTREG( 85,340,32, 4, 4,0x03f1,0x0006, 1, 3,0x0110,ae_bithead,  0,0,0,0,0,0)
  XTREG( 86,344,16, 4, 4,0x03f2,0x0006, 1, 3,0x0100,ae_ts_fts_bu_bp,0,0,0,0,0,0)
  XTREG( 87,348,29, 4, 4,0x03f3,0x0006, 1, 3,0x0100,ae_cw_sd_no, 0,0,0,0,0,0)
  XTREG( 88,352,32, 4, 4,0x03f6,0x0006, 1, 3,0x0110,ae_cbegin0,  0,0,0,0,0,0)
  XTREG( 89,356,32, 4, 4,0x03f7,0x0006, 1, 3,0x0110,ae_cend0,    0,0,0,0,0,0)
  XTREG( 90,360,64, 8, 8,0x1010,0x0006, 1, 4,0x0101,aed0,
            "03:04:04:01","03:04:04:cf",0,0,0,0)
  XTREG( 91,368,64, 8, 8,0x1011,0x0006, 1, 4,0x0101,aed1,
            "03:04:14:01","03:04:14:cf",0,0,0,0)
  XTREG( 92,376,64, 8, 8,0x1012,0x0006, 1, 4,0x0101,aed2,
            "03:04:24:01","03:04:24:cf",0,0,0,0)
  XTREG( 93,384,64, 8, 8,0x1013,0x0006, 1, 4,0x0101,aed3,
            "03:04:34:01","03:04:34:cf",0,0,0,0)
  XTREG( 94,392,64, 8, 8,0x1014,0x0006, 1, 4,0x0101,aed4,
            "03:04:44:01","03:04:44:cf",0,0,0,0)
  XTREG( 95,400,64, 8, 8,0x1015,0x0006, 1, 4,0x0101,aed5,
            "03:04:54:01","03:04:54:cf",0,0,0,0)
  XTREG( 96,408,64, 8, 8,0x1016,0x0006, 1, 4,0x0101,aed6,
            "03:04:64:01","03:04:64:cf",0,0,0,0)
  XTREG( 97,416,64, 8, 8,0x1017,0x0006, 1, 4,0x0101,aed7,
            "03:04:74:01","03:04:74:cf",0,0,0,0)
  XTREG( 98,424,64, 8, 8,0x1018,0x0006, 1, 4,0x0101,aed8,
            "03:04:84:01","03:04:84:cf",0,0,0,0)
  XTREG( 99,432,64, 8, 8,0x1019,0x0006, 1, 4,0x0101,aed9,
            "03:04:94:01","03:04:94:cf",0,0,0,0)
  XTREG(100,440,64, 8, 8,0x101a,0x0006, 1, 4,0x0101,aed10,
            "03:04:a4:01","03:04:a4:cf",0,0,0,0)
  XTREG(101,448,64, 8, 8,0x101b,0x0006, 1, 4,0x0101,aed11,
            "03:04:b4:01","03:04:b4:cf",0,0,0,0)
  XTREG(102,456,64, 8, 8,0x101c,0x0006, 1, 4,0x0101,aed12,
            "03:04:c4:01","03:04:c4:cf",0,0,0,0)
  XTREG(103,464,64, 8, 8,0x101d,0x0006, 1, 4,0x0101,aed13,
            "03:04:d4:01","03:04:d4:cf",0,0,0,0)
  XTREG(104,472,64, 8, 8,0x101e,0x0006, 1, 4,0x0101,aed14,
            "03:04:e4:01","03:04:e4:cf",0,0,0,0)
  XTREG(105,480,64, 8, 8,0x101f,0x0006, 1, 4,0x0101,aed15,
            "03:04:f4:01","03:04:f4:cf",0,0,0,0)
  XTREG(106,488,64, 8, 8,0x1020,0x0006, 1, 4,0x0101,u0,
            "08:0f:14:00:0f:00:dc:fb:eb","08:0f:04:00:0f:00:dc:fb:eb",0,0,0,0)
  XTREG(107,496,64, 8, 8,0x1021,0x0006, 1, 4,0x0101,u1,
            "08:2f:14:00:0f:00:dc:fb:eb","08:2f:04:00:0f:00:dc:fb:eb",0,0,0,0)
  XTREG(108,504,64, 8, 8,0x1022,0x0006, 1, 4,0x0101,u2,
            "08:4f:14:00:0f:00:dc:fb:eb","08:4f:04:00:0f:00:dc:fb:eb",0,0,0,0)
  XTREG(109,512,64, 8, 8,0x1023,0x0006, 1, 4,0x0101,u3,
            "08:6f:14:00:0f:00:dc:fb:eb","08:6f:04:00:0f:00:dc:fb:eb",0,0,0,0)
  XTREG(110,520,32, 4, 4,0x0259,0x000d,-2, 2,0x1000,mmid,        0,0,0,0,0,0)
  XTREG(111,524, 2, 4, 4,0x0260,0x0007,-2, 2,0x1000,ibreakenable,0,0,0,0,0,0)
  XTREG(112,528, 1, 4, 4,0x0261,0x0007,-2, 2,0x1000,memctl,      0,0,0,0,0,0)
  XTREG(113,532, 6, 4, 4,0x0263,0x0007,-2, 2,0x1000,atomctl,     0,0,0,0,0,0)
  XTREG(114,536,32, 4, 4,0x0268,0x0007,-2, 2,0x1000,ddr,         0,0,0,0,0,0)
  XTREG(115,540,32, 4, 4,0x0280,0x0007,-2, 2,0x1000,ibreaka0,    0,0,0,0,0,0)
  XTREG(116,544,32, 4, 4,0x0281,0x0007,-2, 2,0x1000,ibreaka1,    0,0,0,0,0,0)
  XTREG(117,548,32, 4, 4,0x0290,0x0007,-2, 2,0x1000,dbreaka0,    0,0,0,0,0,0)
  XTREG(118,552,32, 4, 4,0x0291,0x0007,-2, 2,0x1000,dbreaka1,    0,0,0,0,0,0)
  XTREG(119,556,32, 4, 4,0x02a0,0x0007,-2, 2,0x1000,dbreakc0,    0,0,0,0,0,0)
  XTREG(120,560,32, 4, 4,0x02a1,0x0007,-2, 2,0x1000,dbreakc1,    0,0,0,0,0,0)
  XTREG(121,564,32, 4, 4,0x02b1,0x0007,-2, 2,0x1000,epc1,        0,0,0,0,0,0)
  XTREG(122,568,32, 4, 4,0x02b2,0x0007,-2, 2,0x1000,epc2,        0,0,0,0,0,0)
  XTREG(123,572,32, 4, 4,0x02b3,0x0007,-2, 2,0x1000,epc3,        0,0,0,0,0,0)
  XTREG(124,576,32, 4, 4,0x02b4,0x0007,-2, 2,0x1000,epc4,        0,0,0,0,0,0)
  XTREG(125,580,32, 4, 4,0x02b5,0x0007,-2, 2,0x1000,epc5,        0,0,0,0,0,0)
  XTREG(126,584,32, 4, 4,0x02b6,0x0007,-2, 2,0x1000,epc6,        0,0,0,0,0,0)
  XTREG(127,588,32, 4, 4,0x02c0,0x0007,-2, 2,0x1000,depc,        0,0,0,0,0,0)
  XTREG(128,592,19, 4, 4,0x02c2,0x0007,-2, 2,0x1000,eps2,        0,0,0,0,0,0)
  XTREG(129,596,19, 4, 4,0x02c3,0x0007,-2, 2,0x1000,eps3,        0,0,0,0,0,0)
  XTREG(130,600,19, 4, 4,0x02c4,0x0007,-2, 2,0x1000,eps4,        0,0,0,0,0,0)
  XTREG(131,604,19, 4, 4,0x02c5,0x0007,-2, 2,0x1000,eps5,        0,0,0,0,0,0)
  XTREG(132,608,19, 4, 4,0x02c6,0x0007,-2, 2,0x1000,eps6,        0,0,0,0,0,0)
  XTREG(133,612,32, 4, 4,0x02d1,0x0007,-2, 2,0x1000,excsave1,    0,0,0,0,0,0)
  XTREG(134,616,32, 4, 4,0x02d2,0x0007,-2, 2,0x1000,excsave2,    0,0,0,0,0,0)
  XTREG(135,620,32, 4, 4,0x02d3,0x0007,-2, 2,0x1000,excsave3,    0,0,0,0,0,0)
  XTREG(136,624,32, 4, 4,0x02d4,0x0007,-2, 2,0x1000,excsave4,    0,0,0,0,0,0)
  XTREG(137,628,32, 4, 4,0x02d5,0x0007,-2, 2,0x1000,excsave5,    0,0,0,0,0,0)
  XTREG(138,632,32, 4, 4,0x02d6,0x0007,-2, 2,0x1000,excsave6,    0,0,0,0,0,0)
  XTREG(139,636, 2, 4, 4,0x02e0,0x0007,-2, 2,0x1000,cpenable,    0,0,0,0,0,0)
  XTREG(140,640,32, 4, 4,0x02e2,0x000b,-2, 2,0x1000,interrupt,   0,0,0,0,0,0)
  XTREG(141,644,32, 4, 4,0x02e2,0x000d,-2, 2,0x1000,intset,      0,0,0,0,0,0)
  XTREG(142,648,32, 4, 4,0x02e3,0x000d,-2, 2,0x1000,intclear,    0,0,0,0,0,0)
  XTREG(143,652,32, 4, 4,0x02e4,0x0007,-2, 2,0x1000,intenable,   0,0,0,0,0,0)
  XTREG(144,656,32, 4, 4,0x02e7,0x0007,-2, 2,0x1000,vecbase,     0,0,0,0,0,0)
  XTREG(145,660, 6, 4, 4,0x02e8,0x0007,-2, 2,0x1000,exccause,    0,0,0,0,0,0)
  XTREG(146,664,12, 4, 4,0x02e9,0x0003,-2, 2,0x1000,debugcause,  0,0,0,0,0,0)
  XTREG(147,668,32, 4, 4,0x02ea,0x000f,-2, 2,0x1000,ccount,      0,0,0,0,0,0)
  XTREG(148,672,32, 4, 4,0x02eb,0x0003,-2, 2,0x1000,prid,        0,0,0,0,0,0)
  XTREG(149,676,32, 4, 4,0x02ec,0x000f,-2, 2,0x1000,icount,      0,0,0,0,0,0)
  XTREG(150,680, 4, 4, 4,0x02ed,0x0007,-2, 2,0x1000,icountlevel, 0,0,0,0,0,0)
  XTREG(151,684,32, 4, 4,0x02ee,0x0007,-2, 2,0x1000,excvaddr,    0,0,0,0,0,0)
  XTREG(152,688,32, 4, 4,0x02f0,0x000f,-2, 2,0x1000,ccompare0,   0,0,0,0,0,0)
  XTREG(153,692,32, 4, 4,0x02f1,0x000f,-2, 2,0x1000,ccompare1,   0,0,0,0,0,0)
  XTREG(154,696,32, 4, 4,0x02f4,0x0007,-2, 2,0x1000,misc0,       0,0,0,0,0,0)
  XTREG(155,700,32, 4, 4,0x02f5,0x0007,-2, 2,0x1000,misc1,       0,0,0,0,0,0)
  XTREG(156,704,32, 4, 4,0x201e,0x000f,-2, 4,0x0101,pwrctl,
            "03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:20:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:20:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(157,708,32, 4, 4,0x201f,0x000f,-2, 4,0x0101,pwrstat,
            "03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:24:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:24:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(158,712, 1, 4, 4,0x2020,0x000f,-2, 4,0x0101,eristat,
            "03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:28:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:28:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(159,716,32, 4, 4,0x2021,0x000f,-2, 4,0x0101,cs_itctrl,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:d5:03:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:d5:03:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(160,720,16, 4, 4,0x2022,0x000f,-2, 4,0x0101,cs_claimset,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a0:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a0:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(161,724,16, 4, 4,0x2023,0x000f,-2, 4,0x0101,cs_claimclr,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a4:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a4:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(162,728,32, 4, 4,0x2024,0x000d,-2, 4,0x0101,cs_lockaccess,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b0:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b0:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(163,732,32, 4, 4,0x2025,0x000b,-2, 4,0x0101,cs_lockstatus,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b4:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b4:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(164,736, 1, 4, 4,0x2026,0x000b,-2, 4,0x0101,cs_authstatus,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b8:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b8:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(165,740,32, 4, 4,0x2035,0x0003,-2, 4,0x0101,trax_id,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(166,744,32, 4, 4,0x2036,0x000f,-2, 4,0x0101,trax_control,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(167,748,32, 4, 4,0x2037,0x000b,-2, 4,0x0101,trax_status,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:08:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:08:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(168,752,32, 4, 4,0x2038,0x000f,-2, 4,0x0101,trax_data,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:0c:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:0c:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(169,756,32, 4, 4,0x2039,0x000f,-2, 4,0x0101,trax_address,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:10:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:10:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(170,760,32, 4, 4,0x203a,0x000f,-2, 4,0x0101,trax_pctrigger,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:14:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:14:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(171,764,32, 4, 4,0x203b,0x000f,-2, 4,0x0101,trax_pcmatch,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:18:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:18:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(172,768,32, 4, 4,0x203c,0x000f,-2, 4,0x0101,trax_delay,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:1c:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:1c:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(173,772,32, 4, 4,0x203d,0x000f,-2, 4,0x0101,trax_memstart,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:20:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:20:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(174,776,32, 4, 4,0x203e,0x000f,-2, 4,0x0101,trax_memend,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:24:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:24:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(175,780,32, 4, 4,0x204c,0x000f,-2, 4,0x0101,pmg,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(176,784,32, 4, 4,0x204d,0x000f,-2, 4,0x0101,pmpc,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(177,788,32, 4, 4,0x204e,0x000f,-2, 4,0x0101,pm0,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(178,792,32, 4, 4,0x204f,0x000f,-2, 4,0x0101,pm1,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(179,796,32, 4, 4,0x2050,0x000f,-2, 4,0x0101,pm2,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(180,800,32, 4, 4,0x2051,0x000f,-2, 4,0x0101,pm3,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(181,804,32, 4, 4,0x2052,0x000f,-2, 4,0x0101,pmctrl0,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(182,808,32, 4, 4,0x2053,0x000f,-2, 4,0x0101,pmctrl1,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(183,812,32, 4, 4,0x2054,0x000f,-2, 4,0x0101,pmctrl2,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(184,816,32, 4, 4,0x2055,0x000f,-2, 4,0x0101,pmctrl3,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(185,820,32, 4, 4,0x2056,0x000f,-2, 4,0x0101,pmstat0,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(186,824,32, 4, 4,0x2057,0x000f,-2, 4,0x0101,pmstat1,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(187,828,32, 4, 4,0x2058,0x000f,-2, 4,0x0101,pmstat2,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(188,832,32, 4, 4,0x2059,0x000f,-2, 4,0x0101,pmstat3,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(189,836,32, 4, 4,0x205a,0x0003,-2, 4,0x0101,ocdid,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(190,840,32, 4, 4,0x205b,0x000f,-2, 4,0x0101,ocd_dcrclr,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:08:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:08:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(191,844,32, 4, 4,0x205c,0x000f,-2, 4,0x0101,ocd_dcrset,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:0c:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:0c:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(192,848,32, 4, 4,0x205d,0x000f,-2, 4,0x0101,ocd_dsr,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:10:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:10:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(193,852,32, 4, 4,0x0000,0x0006,-2, 8,0x0100,a0,          0,0,0,0,0,0)
  XTREG(194,856,32, 4, 4,0x0001,0x0006,-2, 8,0x0100,a1,          0,0,0,0,0,0)
  XTREG(195,860,32, 4, 4,0x0002,0x0006,-2, 8,0x0100,a2,          0,0,0,0,0,0)
  XTREG(196,864,32, 4, 4,0x0003,0x0006,-2, 8,0x0100,a3,          0,0,0,0,0,0)
  XTREG(197,868,32, 4, 4,0x0004,0x0006,-2, 8,0x0100,a4,          0,0,0,0,0,0)
  XTREG(198,872,32, 4, 4,0x0005,0x0006,-2, 8,0x0100,a5,          0,0,0,0,0,0)
  XTREG(199,876,32, 4, 4,0x0006,0x0006,-2, 8,0x0100,a6,          0,0,0,0,0,0)
  XTREG(200,880,32, 4, 4,0x0007,0x0006,-2, 8,0x0100,a7,          0,0,0,0,0,0)
  XTREG(201,884,32, 4, 4,0x0008,0x0006,-2, 8,0x0100,a8,          0,0,0,0,0,0)
  XTREG(202,888,32, 4, 4,0x0009,0x0006,-2, 8,0x0100,a9,          0,0,0,0,0,0)
  XTREG(203,892,32, 4, 4,0x000a,0x0006,-2, 8,0x0100,a10,         0,0,0,0,0,0)
  XTREG(204,896,32, 4, 4,0x000b,0x0006,-2, 8,0x0100,a11,         0,0,0,0,0,0)
  XTREG(205,900,32, 4, 4,0x000c,0x0006,-2, 8,0x0100,a12,         0,0,0,0,0,0)
  XTREG(206,904,32, 4, 4,0x000d,0x0006,-2, 8,0x0100,a13,         0,0,0,0,0,0)
  XTREG(207,908,32, 4, 4,0x000e,0x0006,-2, 8,0x0100,a14,         0,0,0,0,0,0)
  XTREG(208,912,32, 4, 4,0x000f,0x0006,-2, 8,0x0100,a15,         0,0,0,0,0,0)
  XTREG(209,916, 1, 1, 1,0x0010,0x0006,-2, 6,0x1010,b0,
            0,0,&xtensa_mask0,0,0,0)
  XTREG(210,917, 1, 1, 1,0x0011,0x0006,-2, 6,0x1010,b1,
            0,0,&xtensa_mask1,0,0,0)
  XTREG(211,918, 1, 1, 1,0x0012,0x0006,-2, 6,0x1010,b2,
            0,0,&xtensa_mask2,0,0,0)
  XTREG(212,919, 1, 1, 1,0x0013,0x0006,-2, 6,0x1010,b3,
            0,0,&xtensa_mask3,0,0,0)
  XTREG(213,920, 1, 1, 1,0x0014,0x0006,-2, 6,0x1010,b4,
            0,0,&xtensa_mask4,0,0,0)
  XTREG(214,921, 1, 1, 1,0x0015,0x0006,-2, 6,0x1010,b5,
            0,0,&xtensa_mask5,0,0,0)
  XTREG(215,922, 1, 1, 1,0x0016,0x0006,-2, 6,0x1010,b6,
            0,0,&xtensa_mask6,0,0,0)
  XTREG(216,923, 1, 1, 1,0x0017,0x0006,-2, 6,0x1010,b7,
            0,0,&xtensa_mask7,0,0,0)
  XTREG(217,924, 1, 1, 1,0x0018,0x0006,-2, 6,0x1010,b8,
            0,0,&xtensa_mask8,0,0,0)
  XTREG(218,925, 1, 1, 1,0x0019,0x0006,-2, 6,0x1010,b9,
            0,0,&xtensa_mask9,0,0,0)
  XTREG(219,926, 1, 1, 1,0x001a,0x0006,-2, 6,0x1010,b10,
            0,0,&xtensa_mask10,0,0,0)
  XTREG(220,927, 1, 1, 1,0x001b,0x0006,-2, 6,0x1010,b11,
            0,0,&xtensa_mask11,0,0,0)
  XTREG(221,928, 1, 1, 1,0x001c,0x0006,-2, 6,0x1010,b12,
            0,0,&xtensa_mask12,0,0,0)
  XTREG(222,929, 1, 1, 1,0x001d,0x0006,-2, 6,0x1010,b13,
            0,0,&xtensa_mask13,0,0,0)
  XTREG(223,930, 1, 1, 1,0x001e,0x0006,-2, 6,0x1010,b14,
            0,0,&xtensa_mask14,0,0,0)
  XTREG(224,931, 1, 1, 1,0x001f,0x0006,-2, 6,0x1010,b15,
            0,0,&xtensa_mask15,0,0,0)
  XTREG(225,932, 4, 4, 4,0x2007,0x0006,-2, 6,0x1010,psintlevel,
            0,0,&xtensa_mask16,0,0,0)
  XTREG(226,936, 1, 4, 4,0x2008,0x0006,-2, 6,0x1010,psum,
            0,0,&xtensa_mask17,0,0,0)
  XTREG(227,940, 1, 4, 4,0x2009,0x0006,-2, 6,0x1010,pswoe,
            0,0,&xtensa_mask18,0,0,0)
  XTREG(228,944, 1, 4, 4,0x200a,0x0006,-2, 6,0x1010,psexcm,
            0,0,&xtensa_mask19,0,0,0)
  XTREG(229,948, 2, 4, 4,0x200b,0x0006,-2, 6,0x1010,pscallinc,
            0,0,&xtensa_mask20,0,0,0)
  XTREG(230,952, 4, 4, 4,0x200c,0x0006,-2, 6,0x1010,psowb,
            0,0,&xtensa_mask21,0,0,0)
  XTREG(231,956,40, 8, 4,0x200d,0x0006,-2, 6,0x1010,acc,
            0,0,&xtensa_mask22,0,0,0)
  XTREG(232,964, 4, 4, 4,0x2012,0x0006,-2, 6,0x1010,dbnum,
            0,0,&xtensa_mask23,0,0,0)
  XTREG(233,968, 1, 4, 4,0x2015,0x0006, 1, 5,0x1010,ae_overflow,
            0,0,&xtensa_mask24,0,0,0)
  XTREG(234,972, 7, 4, 4,0x2016,0x0006, 1, 5,0x1010,ae_sar,
            0,0,&xtensa_mask25,0,0,0)
  XTREG(235,976, 1, 4, 4,0x2017,0x0006, 1, 5,0x1010,ae_cwrap,
            0,0,&xtensa_mask26,0,0,0)
  XTREG(236,980, 4, 4, 4,0x2018,0x0006, 1, 5,0x1010,ae_bitptr,
            0,0,&xtensa_mask27,0,0,0)
  XTREG(237,984, 4, 4, 4,0x2019,0x0006, 1, 5,0x1010,ae_bitsused,
            0,0,&xtensa_mask28,0,0,0)
  XTREG(238,988, 4, 4, 4,0x201a,0x0006, 1, 5,0x1010,ae_tablesize,
            0,0,&xtensa_mask29,0,0,0)
  XTREG(239,992, 4, 4, 4,0x201b,0x0006, 1, 5,0x1010,ae_first_ts,
            0,0,&xtensa_mask30,0,0,0)
  XTREG(240,996,27, 4, 4,0x201c,0x0006, 1, 5,0x1010,ae_nextoffset,
            0,0,&xtensa_mask31,0,0,0)

