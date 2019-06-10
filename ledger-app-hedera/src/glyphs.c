#include "glyphs.h"
unsigned int const C_icon_back_colors[]
 = {
  0x00000000, 
  0x00ffffff, 
};
	
unsigned char const C_icon_back_bitmap[] = {
0xe0, 0x01, 0xfe, 0xc1, 0xfd, 0x38, 0x7f, 0x06, 0xdf, 0x81, 0xff, 0xc4, 0x7f, 0xf3, 0xff, 0xbc, 
  0x1f, 0xe7, 0xe7, 0xf1, 0x3f, 0xf8, 0x07, 0x78, 0x00, };

#ifdef OS_IO_SEPROXYHAL
#include "os_io_seproxyhal.h"
const bagl_icon_details_t C_icon_back = { GLYPH_icon_back_WIDTH, GLYPH_icon_back_HEIGHT, 1, C_icon_back_colors, C_icon_back_bitmap };
#endif // OS_IO_SEPROXYHAL
#include "glyphs.h"
unsigned int const C_icon_dashboard_colors[]
 = {
  0x00000000, 
  0x00ffffff, 
};
	
unsigned char const C_icon_dashboard_bitmap[] = {
0xe0, 0x01, 0xfe, 0xc1, 0xff, 0x38, 0x70, 0x06, 0xd8, 0x79, 0x7e, 0x9e, 0x9f, 0xe7, 0xe7, 0xb9, 
  0x01, 0xe6, 0xc0, 0xf1, 0x3f, 0xf8, 0x07, 0x78, 0x00, };

#ifdef OS_IO_SEPROXYHAL
#include "os_io_seproxyhal.h"
const bagl_icon_details_t C_icon_dashboard = { GLYPH_icon_dashboard_WIDTH, GLYPH_icon_dashboard_HEIGHT, 1, C_icon_dashboard_colors, C_icon_dashboard_bitmap };
#endif // OS_IO_SEPROXYHAL
#include "glyphs.h"
unsigned int const C_icon_hb_colors[]
 = {
  0x00000000, 
  0x00ffffff, 
};
	
unsigned char const C_icon_hb_bitmap[] = {
0xe0, 0x01, 0xfe, 0xc1, 0xfd, 0x78, 0x7e, 0xce, 0xdf, 0xd7, 0xff, 0xe1, 0x7f, 0xfb, 0xdf, 0xbe, 
  0x37, 0xe7, 0xed, 0xf1, 0x3f, 0xf8, 0x07, 0x78, 0x00, };

#ifdef OS_IO_SEPROXYHAL
#include "os_io_seproxyhal.h"
const bagl_icon_details_t C_icon_hb = { GLYPH_icon_hb_WIDTH, GLYPH_icon_hb_HEIGHT, 1, C_icon_hb_colors, C_icon_hb_bitmap };
#endif // OS_IO_SEPROXYHAL
#include "glyphs.h"
unsigned int const C_icon_stellar_colors[]
 = {
  0x00000000, 
  0x00ffffff, 
};
	
unsigned char const C_icon_stellar_bitmap[] = {
0xe0, 0x01, 0xfe, 0xc1, 0xff, 0x78, 0x60, 0x02, 0xd8, 0x70, 0x7e, 0x92, 0x9f, 0xe4, 0xcf, 0xbc, 
  0x04, 0x27, 0xc2, 0x91, 0x33, 0xf8, 0x07, 0x78, 0x00, };

#ifdef OS_IO_SEPROXYHAL
#include "os_io_seproxyhal.h"
const bagl_icon_details_t C_icon_stellar = { GLYPH_icon_stellar_WIDTH, GLYPH_icon_stellar_HEIGHT, 1, C_icon_stellar_colors, C_icon_stellar_bitmap };
#endif // OS_IO_SEPROXYHAL
#include "glyphs.h"
unsigned int const C_icon_toggle_reset_colors[]
 = {
  0x00cccccc, 
  0x00cdcdcd, 
  0x00cecece, 
  0x00d0d0d0, 
  0x00d2d2d2, 
  0x00d6d6d6, 
  0x00dddddd, 
  0x00dedede, 
  0x00e7e7e7, 
  0x00ededed, 
  0x00f2f2f2, 
  0x00f6f6f6, 
  0x00f9f9f9, 
  0x00fcfcfc, 
  0x00fefefe, 
  0x00ffffff, 
};
	
unsigned char const C_icon_toggle_reset_bitmap[] = {
0xcc, 0xcc, 0x9c, 0x47, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x74, 0xc9, 0xcc, 0xcc, 
  0xcc, 0xac, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xca, 0xcc, 
  0xcc, 0x29, 0x30, 0xb8, 0xee, 0x8b, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0xcc, 
  0xac, 0x03, 0xd6, 0xff, 0xff, 0xff, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xca, 
  0x5c, 0x60, 0xff, 0xff, 0xff, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc5, 
  0x09, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 
  0x07, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 
  0x04, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
  0x01, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  0x02, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  0x04, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
  0x06, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 
  0x09, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 
  0x5c, 0x60, 0xff, 0xff, 0xff, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc5, 
  0xac, 0x03, 0xd6, 0xff, 0xff, 0xff, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xca, 
  0xcc, 0x29, 0x30, 0xb8, 0xde, 0x8b, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0xcc, 
  0xcc, 0xac, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xca, 0xcc, 
  0xcc, 0xcc, 0x9c, 0x47, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x74, 0xc9, 0xcc, 0xcc, 
  };

#ifdef OS_IO_SEPROXYHAL
#include "os_io_seproxyhal.h"
const bagl_icon_details_t C_icon_toggle_reset = { GLYPH_icon_toggle_reset_WIDTH, GLYPH_icon_toggle_reset_HEIGHT, 4, C_icon_toggle_reset_colors, C_icon_toggle_reset_bitmap };
#endif // OS_IO_SEPROXYHAL
#include "glyphs.h"
unsigned int const C_icon_toggle_set_colors[]
 = {
  0x0037cdb4, 
  0x003cceb6, 
  0x0043cfb8, 
  0x004ad1ba, 
  0x0055d3be, 
  0x0066d7c4, 
  0x0081decd, 
  0x00a2e7db, 
  0x00c5ede6, 
  0x00c9eee8, 
  0x00dbf2ee, 
  0x00dbf6f1, 
  0x00f9f9f9, 
  0x00f5fcfb, 
  0x00fafefd, 
  0x00ffffff, 
};
	
unsigned char const C_icon_toggle_set_bitmap[] = {
0xcc, 0xcc, 0x9c, 0x46, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x64, 0xc9, 0xcc, 0xcc, 
  0xcc, 0xac, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xca, 0xcc, 
  0xcc, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xb7, 0xee, 0x7b, 0x03, 0x92, 0xcc, 
  0xac, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd6, 0xff, 0xff, 0xff, 0x6d, 0x20, 0xca, 
  0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xff, 0xff, 0xff, 0xff, 0xff, 0x06, 0xc5, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3d, 0x80, 
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x60, 
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x40, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x10, 
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x10, 
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x40, 
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x60, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3d, 0x80, 
  0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xff, 0xff, 0xff, 0xff, 0xff, 0x06, 0xc5, 
  0xac, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd6, 0xff, 0xff, 0xff, 0x6d, 0x20, 0xca, 
  0xcc, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xb7, 0xde, 0x7b, 0x03, 0x92, 0xcc, 
  0xcc, 0xac, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xca, 0xcc, 
  0xcc, 0xcc, 0x8c, 0x46, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x64, 0xc8, 0xcc, 0xcc, 
  };

#ifdef OS_IO_SEPROXYHAL
#include "os_io_seproxyhal.h"
const bagl_icon_details_t C_icon_toggle_set = { GLYPH_icon_toggle_set_WIDTH, GLYPH_icon_toggle_set_HEIGHT, 4, C_icon_toggle_set_colors, C_icon_toggle_set_bitmap };
#endif // OS_IO_SEPROXYHAL
