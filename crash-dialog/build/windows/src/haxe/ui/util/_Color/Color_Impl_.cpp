#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_4_fromString,"haxe.ui.util._Color.Color_Impl_","fromString",0xcecb5716,"haxe.ui.util._Color.Color_Impl_.fromString","haxe/ui/util/Color.hx",4,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_153_fromComponents,"haxe.ui.util._Color.Color_Impl_","fromComponents",0xaa8ee9db,"haxe.ui.util._Color.Color_Impl_.fromComponents","haxe/ui/util/Color.hx",153,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_164_get_r,"haxe.ui.util._Color.Color_Impl_","get_r",0xc43005ee,"haxe.ui.util._Color.Color_Impl_.get_r","haxe/ui/util/Color.hx",164,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_167_set_r,"haxe.ui.util._Color.Color_Impl_","set_r",0xacfefbfa,"haxe.ui.util._Color.Color_Impl_.set_r","haxe/ui/util/Color.hx",167,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_171_get_g,"haxe.ui.util._Color.Color_Impl_","get_g",0xc43005e3,"haxe.ui.util._Color.Color_Impl_.get_g","haxe/ui/util/Color.hx",171,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_174_set_g,"haxe.ui.util._Color.Color_Impl_","set_g",0xacfefbef,"haxe.ui.util._Color.Color_Impl_.set_g","haxe/ui/util/Color.hx",174,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_178_get_b,"haxe.ui.util._Color.Color_Impl_","get_b",0xc43005de,"haxe.ui.util._Color.Color_Impl_.get_b","haxe/ui/util/Color.hx",178,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_181_set_b,"haxe.ui.util._Color.Color_Impl_","set_b",0xacfefbea,"haxe.ui.util._Color.Color_Impl_.set_b","haxe/ui/util/Color.hx",181,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_185_get_a,"haxe.ui.util._Color.Color_Impl_","get_a",0xc43005dd,"haxe.ui.util._Color.Color_Impl_.get_a","haxe/ui/util/Color.hx",185,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_188_set_a,"haxe.ui.util._Color.Color_Impl_","set_a",0xacfefbe9,"haxe.ui.util._Color.Color_Impl_.set_a","haxe/ui/util/Color.hx",188,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_192_set,"haxe.ui.util._Color.Color_Impl_","set",0x67c11907,"haxe.ui.util._Color.Color_Impl_.set","haxe/ui/util/Color.hx",192,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_197_toInt,"haxe.ui.util._Color.Color_Impl_","toInt",0x46e11ed9,"haxe.ui.util._Color.Color_Impl_.toInt","haxe/ui/util/Color.hx",197,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_201_toHex,"haxe.ui.util._Color.Color_Impl_","toHex",0x46e054c5,"haxe.ui.util._Color.Color_Impl_.toHex","haxe/ui/util/Color.hx",201,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_205_or,"haxe.ui.util._Color.Color_Impl_","or",0xccce575e,"haxe.ui.util._Color.Color_Impl_.or","haxe/ui/util/Color.hx",205,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_209_sumColor,"haxe.ui.util._Color.Color_Impl_","sumColor",0x3f859453,"haxe.ui.util._Color.Color_Impl_.sumColor","haxe/ui/util/Color.hx",209,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_213_restColor,"haxe.ui.util._Color.Color_Impl_","restColor",0x2c98f4d4,"haxe.ui.util._Color.Color_Impl_.restColor","haxe/ui/util/Color.hx",213,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_216_sumFloat,"haxe.ui.util._Color.Color_Impl_","sumFloat",0xf7bfe88c,"haxe.ui.util._Color.Color_Impl_.sumFloat","haxe/ui/util/Color.hx",216,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_222_mulFloat,"haxe.ui.util._Color.Color_Impl_","mulFloat",0x3a35df73,"haxe.ui.util._Color.Color_Impl_.mulFloat","haxe/ui/util/Color.hx",222,0x4a531b56)
namespace haxe{
namespace ui{
namespace util{
namespace _Color{

void Color_Impl__obj::__construct() { }

Dynamic Color_Impl__obj::__CreateEmpty() { return new Color_Impl__obj; }

void *Color_Impl__obj::_hx_vtable = 0;

Dynamic Color_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Color_Impl__obj > _hx_result = new Color_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Color_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0dd482e3;
}

int Color_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_4_fromString)
HXLINE(   5)		bool _hx_tmp;
HXDLIN(   5)		if (!(::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00)))) {
HXLINE(   5)			_hx_tmp = ::StringTools_obj::startsWith(s,HX_("#",23,00,00,00));
            		}
            		else {
HXLINE(   5)			_hx_tmp = true;
            		}
HXDLIN(   5)		if (_hx_tmp) {
HXLINE(   6)			return ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s.substring((s.length - 6),null())))) );
            		}
HXLINE(   8)		::String _hx_switch_0 = s;
            		if (  (_hx_switch_0==HX_("aliceblue",da,35,f5,1a)) ){
HXLINE( 129)			return 15792383;
HXDLIN( 129)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("antiquewhite",aa,63,39,5c)) ){
HXLINE( 123)			return 16444375;
HXDLIN( 123)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("aqua",3c,d7,73,40)) ){
HXLINE(  84)			return 65535;
HXDLIN(  84)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("aquamarine",3e,e5,e5,98)) ){
HXLINE(  86)			return 8388564;
HXDLIN(  86)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("azure",0f,78,db,2a)) ){
HXLINE( 134)			return 15794175;
HXDLIN( 134)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("beige",e4,6c,57,b0)) ){
HXLINE( 125)			return 16119260;
HXDLIN( 125)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bisque",b5,f3,65,f0)) ){
HXLINE(  54)			return 16770244;
HXDLIN(  54)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("black",bf,d5,f1,b4)) ){
HXLINE( 139)			return 0;
HXDLIN( 139)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("blanchedalmond",be,6b,17,5b)) ){
HXLINE(  55)			return 16772045;
HXDLIN(  55)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("blue",9a,42,19,41)) ){
HXLINE(  92)			return 255;
HXDLIN(  92)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("blueviolet",99,a9,40,13)) ){
HXLINE( 109)			return 9055202;
HXDLIN( 109)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("brown",76,ce,f3,b8)) ){
HXLINE(  41)			return 10824234;
HXDLIN(  41)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("burlywood",b9,64,0b,92)) ){
HXLINE(  51)			return 14596231;
HXDLIN(  51)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("cadetblue",0f,3b,7b,eb)) ){
HXLINE(  80)			return 6266528;
HXDLIN(  80)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("chartreuse",d6,d8,ba,87)) ){
HXLINE(  73)			return 8388352;
HXDLIN(  73)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("chocolate",7c,9d,24,9e)) ){
HXLINE(  44)			return 13789470;
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("coral",b1,f2,60,4a)) ){
HXLINE(  27)			return 16744272;
HXDLIN(  27)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("cornflowerblue",5d,23,ff,31)) ){
HXLINE(  98)			return 6591981;
HXDLIN(  98)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("cornsilk",fd,25,67,5d)) ){
HXLINE(  56)			return 16775388;
HXDLIN(  56)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("crimson",df,dd,f2,66)) ){
HXLINE(  18)			return 14423100;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("cyan",23,45,cc,41)) ){
HXLINE(  85)			return 65535;
HXDLIN(  85)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkblue",10,0a,ff,8a)) ){
HXLINE(  90)			return 139;
HXDLIN(  90)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkcyan",99,0c,b2,8b)) ){
HXLINE(  78)			return 35723;
HXDLIN(  78)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkgoldenrod",68,47,29,8e)) ){
HXLINE(  45)			return 12092939;
HXDLIN(  45)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkgray",59,97,51,8e)) ){
HXLINE( 145)			return 11119017;
HXDLIN( 145)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkgreen",8d,ce,15,f9)) ){
HXLINE(  57)			return 25600;
HXDLIN(  57)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkkhaki",8c,fa,10,40)) ){
HXLINE(  29)			return 12433259;
HXDLIN(  29)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkmagenta",73,80,4d,19)) ){
HXLINE( 106)			return 9109643;
HXDLIN( 106)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkolivegreen",fe,15,8a,98)) ){
HXLINE(  59)			return 5597999;
HXDLIN(  59)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkorange",e4,c3,3b,2a)) ){
HXLINE(  26)			return 16747520;
HXDLIN(  26)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkorchid",59,a5,89,2b)) ){
HXLINE( 110)			return 10040012;
HXDLIN( 110)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkred",9b,32,bf,f1)) ){
HXLINE(  15)			return 9109504;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darksalmon",64,f6,1d,01)) ){
HXLINE(  22)			return 15308410;
HXDLIN(  22)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkseagreen",4a,e7,49,cb)) ){
HXLINE(  69)			return 9419919;
HXDLIN(  69)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkslateblue",fd,70,39,5a)) ){
HXLINE( 108)			return 4734347;
HXDLIN( 108)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkslategray",46,fe,8b,5d)) ){
HXLINE( 140)			return 3100495;
HXDLIN( 140)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkturquoise",6b,70,ca,fe)) ){
HXLINE(  81)			return 52945;
HXDLIN(  81)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darkviolet",75,88,5f,d1)) ){
HXLINE( 107)			return 9699539;
HXDLIN( 107)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("deeppink",a2,ca,f0,e8)) ){
HXLINE(  10)			return 16716947;
HXDLIN(  10)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("deepskyblue",4f,f3,7c,d6)) ){
HXLINE(  97)			return 49151;
HXDLIN(  97)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("dimgray",2b,51,f4,40)) ){
HXLINE( 141)			return 6908265;
HXDLIN( 141)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("dodgerblue",d5,8b,6d,ed)) ){
HXLINE(  96)			return 2003199;
HXDLIN(  96)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("firebrick",0b,28,6a,21)) ){
HXLINE(  17)			return 11674146;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("floralwhite",15,e9,16,21)) ){
HXLINE( 133)			return 16775920;
HXDLIN( 133)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("forestgreen",c6,c0,c7,e2)) ){
HXLINE(  60)			return 2263842;
HXDLIN(  60)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("fuchsia",d7,c5,0f,9f)) ){
HXLINE( 111)			return 16711935;
HXDLIN( 111)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gainsboro",de,1f,fe,0c)) ){
HXLINE( 148)			return 14474460;
HXDLIN( 148)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("ghostwhite",fa,dc,2f,b6)) ){
HXLINE( 131)			return 16316671;
HXDLIN( 131)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gold",a0,92,69,44)) ){
HXLINE(  30)			return 16766720;
HXDLIN(  30)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("goldenrod",9e,da,43,a3)) ){
HXLINE(  48)			return 14329120;
HXDLIN(  48)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("green",c3,0e,ed,99)) ){
HXLINE(  58)			return 32768;
HXDLIN(  58)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("greenyellow",77,a2,61,f3)) ){
HXLINE(  75)			return 11403055;
HXDLIN(  75)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gray",e3,cf,6b,44)) ||  (_hx_switch_0==HX_("grey",5f,d3,6b,44)) ){
HXLINE( 143)			return 8421504;
HXDLIN( 143)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("honeydew",fb,2c,4e,b7)) ){
HXLINE( 132)			return 15794160;
HXDLIN( 132)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("hotpink",83,88,28,5b)) ){
HXLINE(  12)			return 16738740;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("indianred",9a,f7,76,75)) ){
HXLINE(  19)			return 13458524;
HXDLIN(  19)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("indigo",52,0f,f6,93)) ){
HXLINE( 104)			return 4915330;
HXDLIN( 104)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("ivory",29,b4,66,c3)) ){
HXLINE( 137)			return 16777200;
HXDLIN( 137)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("khaki",c2,3a,e8,e0)) ){
HXLINE(  31)			return 15787660;
HXDLIN(  31)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lavender",07,01,81,81)) ){
HXLINE( 121)			return 15132410;
HXDLIN( 121)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lavenderblush",59,f6,bb,47)) ){
HXLINE( 127)			return 16773365;
HXDLIN( 127)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lawngreen",77,7d,9e,93)) ){
HXLINE(  72)			return 8190976;
HXDLIN(  72)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lemonchiffon",f0,10,48,e1)) ){
HXLINE(  38)			return 16775885;
HXDLIN(  38)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightblue",70,f6,5d,cf)) ){
HXLINE( 102)			return 11393254;
HXDLIN( 102)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightcoral",1b,9a,39,38)) ){
HXLINE(  20)			return 15761536;
HXDLIN(  20)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightcyan",f9,f8,10,d0)) ){
HXLINE(  88)			return 14745599;
HXDLIN(  88)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightgoldenrodyellow",7c,14,27,d9)) ){
HXLINE(  37)			return 16448210;
HXDLIN(  37)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightgray",b9,83,b0,d2)) ){
HXLINE( 147)			return 13882323;
HXDLIN( 147)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightgreen",2d,b6,c5,87)) ){
HXLINE(  74)			return 9498256;
HXDLIN(  74)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightpink",4c,a6,9c,d8)) ){
HXLINE(  13)			return 16758465;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightsalmon",c4,ba,58,4c)) ){
HXLINE(  23)			return 16752762;
HXDLIN(  23)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightseagreen",aa,83,06,6e)) ){
HXLINE(  79)			return 2142890;
HXDLIN(  79)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightskyblue",e5,3d,ca,f5)) ){
HXLINE( 100)			return 8900346;
HXDLIN( 100)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightslategray",e6,35,d8,1f)) ){
HXLINE( 144)			return 7833753;
HXDLIN( 144)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightsteelblue",8f,ba,e2,94)) ){
HXLINE( 101)			return 11584734;
HXDLIN( 101)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lightyellow",ca,74,16,00)) ){
HXLINE(  39)			return 16777184;
HXDLIN(  39)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lime",15,17,b3,47)) ){
HXLINE(  66)			return 65280;
HXDLIN(  66)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("limegreen",8e,2b,25,24)) ){
HXLINE(  65)			return 3329330;
HXDLIN(  65)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("linen",fa,dd,01,75)) ){
HXLINE( 124)			return 16445670;
HXDLIN( 124)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("magenta",29,ba,9d,0e)) ){
HXLINE( 112)			return 16711935;
HXDLIN( 112)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("maroon",70,87,73,ba)) ){
HXLINE(  40)			return 8388608;
HXDLIN(  40)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumaquamarine",f3,3d,86,c2)) ){
HXLINE(  70)			return 6737322;
HXDLIN(  70)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumblue",8f,75,7d,4a)) ){
HXLINE(  91)			return 205;
HXDLIN(  91)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumorchid",98,2e,19,98)) ){
HXLINE( 115)			return 12211667;
HXDLIN( 115)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumpurple",71,90,98,c2)) ){
HXLINE( 116)			return 9662683;
HXDLIN( 116)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumseagreen",49,7e,bd,21)) ){
HXLINE(  64)			return 3978097;
HXDLIN(  64)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumslateblue",1e,f9,e9,a8)) ){
HXLINE( 114)			return 8087790;
HXDLIN( 114)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumspringgreen",81,b6,45,53)) ){
HXLINE(  68)			return 64154;
HXDLIN(  68)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumturquoise",8c,f8,7a,4d)) ){
HXLINE(  82)			return 4772300;
HXDLIN(  82)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mediumvioletred",1d,d0,62,95)) ){
HXLINE(   9)			return 13047173;
HXDLIN(   9)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("midnightblue",ea,45,13,6c)) ){
HXLINE(  93)			return 1644912;
HXDLIN(  93)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mintcream",60,1f,6c,d2)) ){
HXLINE( 135)			return 16121850;
HXDLIN( 135)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mistyrose",6b,da,2f,4d)) ){
HXLINE( 122)			return 16770273;
HXDLIN( 122)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("moccasin",d9,8c,be,38)) ){
HXLINE(  35)			return 16770229;
HXDLIN(  35)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("navajowhite",66,a9,6a,86)) ){
HXLINE(  53)			return 16768685;
HXDLIN(  53)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("navy",36,7a,ff,48)) ){
HXLINE(  89)			return 128;
HXDLIN(  89)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("oldlace",7e,74,18,12)) ){
HXLINE( 128)			return 16643558;
HXDLIN( 128)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("olive",db,82,2d,31)) ){
HXLINE(  62)			return 8421376;
HXDLIN(  62)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("olivedrab",4a,b8,47,3e)) ){
HXLINE(  63)			return 7048739;
HXDLIN(  63)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("orange",ee,b2,bc,45)) ){
HXLINE(  28)			return 16753920;
HXDLIN(  28)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("orangered",23,2f,66,3d)) ){
HXLINE(  24)			return 16729344;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("orchid",63,94,0a,47)) ){
HXLINE( 117)			return 14315734;
HXDLIN( 117)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("palegoldenrod",b4,d6,39,4c)) ){
HXLINE(  34)			return 15657130;
HXDLIN(  34)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("palegreen",d9,c7,c1,7c)) ){
HXLINE(  76)			return 10025880;
HXDLIN(  76)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("paleturquoise",b7,ff,da,bc)) ){
HXLINE(  87)			return 11529966;
HXDLIN(  87)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("palevioletred",48,d7,c2,04)) ){
HXLINE(  11)			return 14381203;
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("papayawhip",a2,bf,c5,5f)) ){
HXLINE(  36)			return 16773077;
HXDLIN(  36)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("peachpuff",76,09,89,5d)) ){
HXLINE(  32)			return 16767673;
HXDLIN(  32)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("peru",f8,ec,54,4a)) ){
HXLINE(  46)			return 13468991;
HXDLIN(  46)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pink",76,f2,57,4a)) ){
HXLINE(  14)			return 16761035;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("plum",54,3f,5a,4a)) ){
HXLINE( 119)			return 14524637;
HXDLIN( 119)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("powderblue",53,3e,e9,b2)) ){
HXLINE( 103)			return 11591910;
HXDLIN( 103)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("purple",3c,f6,89,71)) ){
HXLINE( 105)			return 8388736;
HXDLIN( 105)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("red",51,d9,56,00)) ){
HXLINE(  16)			return 16711680;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("rosybrown",f3,0d,a7,84)) ){
HXLINE(  47)			return 12357519;
HXDLIN(  47)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("royalblue",21,48,03,9d)) ){
HXLINE(  94)			return 4286945;
HXDLIN(  94)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("saddlebrown",8f,8b,30,24)) ){
HXLINE(  42)			return 9127187;
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("salmon",6e,e5,9e,1c)) ){
HXLINE(  21)			return 16416882;
HXDLIN(  21)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("sandybrown",a1,86,1e,3b)) ){
HXLINE(  49)			return 16032864;
HXDLIN(  49)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("seagreen",d4,2c,2c,7c)) ){
HXLINE(  61)			return 3050327;
HXDLIN(  61)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("seashell",c1,06,5f,5e)) ){
HXLINE( 130)			return 16774638;
HXDLIN( 130)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("sienna",72,cc,33,b3)) ){
HXLINE(  43)			return 10506797;
HXDLIN(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("silver",0d,55,da,b7)) ){
HXLINE( 146)			return 12632256;
HXDLIN( 146)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("skyblue",fb,67,e9,62)) ){
HXLINE(  99)			return 8900331;
HXDLIN(  99)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("slateblue",33,04,54,6f)) ){
HXLINE( 113)			return 6970061;
HXDLIN( 113)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("slategray",7c,91,a6,72)) ){
HXLINE( 142)			return 7372944;
HXDLIN( 142)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("snow",83,62,57,4c)) ){
HXLINE( 136)			return 16775930;
HXDLIN( 136)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("springgreen",d6,70,98,10)) ){
HXLINE(  67)			return 65407;
HXDLIN(  67)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("steelblue",25,16,b1,e7)) ){
HXLINE(  95)			return 4620980;
HXDLIN(  95)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("tan",61,5a,58,00)) ){
HXLINE(  50)			return 13808780;
HXDLIN(  50)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("teal",9c,b8,f9,4c)) ){
HXLINE(  77)			return 32896;
HXDLIN(  77)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("thistle",4f,2c,46,2e)) ){
HXLINE( 120)			return 14204888;
HXDLIN( 120)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("tomato",ca,80,36,93)) ){
HXLINE(  25)			return 16737095;
HXDLIN(  25)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("turquoise",a1,03,e5,13)) ){
HXLINE(  83)			return 4251856;
HXDLIN(  83)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("violet",7f,77,e0,ec)) ){
HXLINE( 118)			return 15631086;
HXDLIN( 118)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("wheat",27,31,ba,c9)) ){
HXLINE(  52)			return 16113331;
HXDLIN(  52)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("white",a9,4a,bd,c9)) ){
HXLINE( 138)			return 16777215;
HXDLIN( 138)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("whitesmoke",26,00,9c,43)) ){
HXLINE( 126)			return 16119285;
HXDLIN( 126)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("yellow",74,9f,5c,d0)) ){
HXLINE(  33)			return 16776960;
HXDLIN(  33)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("yellowgreen",cf,ea,d5,1b)) ){
HXLINE(  71)			return 10145074;
HXDLIN(  71)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE( 149)			return 0;
            		}
            		_hx_goto_0:;
HXLINE(   8)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,fromString,return )

int Color_Impl__obj::fromComponents(int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_153_fromComponents)
HXLINE( 154)		int result = ((((r & 255) << 16) | ((g & 255) << 8)) | (b & 255));
HXLINE( 155)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color_Impl__obj,fromComponents,return )

int Color_Impl__obj::get_r(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_164_get_r)
HXDLIN( 164)		return ((this1 >> 16) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_r,return )

int Color_Impl__obj::set_r(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_167_set_r)
HXDLIN( 167)		this1 = ((((value & 255) << 16) | ((((this1 >> 8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXDLIN( 167)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_r,return )

int Color_Impl__obj::get_g(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_171_get_g)
HXDLIN( 171)		return ((this1 >> 8) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_g,return )

int Color_Impl__obj::set_g(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_174_set_g)
HXDLIN( 174)		this1 = ((((((this1 >> 16) & 255) & 255) << 16) | ((value & 255) << 8)) | ((this1 & 255) & 255));
HXDLIN( 174)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_g,return )

int Color_Impl__obj::get_b(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_178_get_b)
HXDLIN( 178)		return (this1 & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_b,return )

int Color_Impl__obj::set_b(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_181_set_b)
HXDLIN( 181)		this1 = ((((((this1 >> 16) & 255) & 255) << 16) | ((((this1 >> 8) & 255) & 255) << 8)) | (value & 255));
HXDLIN( 181)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_b,return )

int Color_Impl__obj::get_a(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_185_get_a)
HXDLIN( 185)		return ((this1 >> 24) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_a,return )

int Color_Impl__obj::set_a(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_188_set_a)
HXDLIN( 188)		this1 = ((((((this1 >> 16) & 255) & 255) << 16) | ((((this1 >> 8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXDLIN( 188)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_a,return )

int Color_Impl__obj::set(int this1,int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_192_set)
HXDLIN( 192)		this1 = ((((r & 255) << 16) | ((g & 255) << 8)) | (b & 255));
HXDLIN( 192)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Color_Impl__obj,set,return )

int Color_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_197_toInt)
HXDLIN( 197)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,toInt,return )

::String Color_Impl__obj::toHex(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_201_toHex)
HXDLIN( 201)		::String _hx_tmp = (HX_("#",23,00,00,00) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 201)		::String _hx_tmp1 = (_hx_tmp + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 201)		return (_hx_tmp1 + ::StringTools_obj::hex((this1 & 255),2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,toHex,return )

int Color_Impl__obj::_hx_or(int a,int b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_205_or)
HXDLIN( 205)		int _hx_tmp = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(a);
HXDLIN( 205)		return (_hx_tmp | ::haxe::ui::util::_Color::Color_Impl__obj::toInt(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,_hx_or,return )

int Color_Impl__obj::sumColor(int a,int b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_209_sumColor)
HXDLIN( 209)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents((((a >> 16) & 255) + ((b >> 16) & 255)),(((a >> 8) & 255) + ((b >> 8) & 255)),((a & 255) + (b & 255)),(((a >> 24) & 255) + ((b >> 24) & 255))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,sumColor,return )

int Color_Impl__obj::restColor(int a,int b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_213_restColor)
HXDLIN( 213)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents((((a >> 16) & 255) - ((b >> 16) & 255)),(((a >> 8) & 255) - ((b >> 8) & 255)),((a & 255) - (b & 255)),(((a >> 24) & 255) - ((b >> 24) & 255))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,restColor,return )

int Color_Impl__obj::sumFloat(int a,Float b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_216_sumFloat)
HXLINE( 217)		int bInt = ::Std_obj::_hx_int(b);
HXLINE( 218)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents((((a >> 16) & 255) - bInt),(((a >> 8) & 255) - bInt),((a & 255) - bInt),(((a >> 24) & 255) - bInt)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,sumFloat,return )

int Color_Impl__obj::mulFloat(int a,Float b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_222_mulFloat)
HXDLIN( 222)		int _hx_tmp = ::Std_obj::_hx_int((( (Float)(((a >> 16) & 255)) ) * b));
HXDLIN( 222)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(((a >> 8) & 255)) ) * b));
HXDLIN( 222)		int _hx_tmp2 = ::Std_obj::_hx_int((( (Float)((a & 255)) ) * b));
HXDLIN( 222)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(_hx_tmp,_hx_tmp1,_hx_tmp2,::Std_obj::_hx_int((( (Float)(((a >> 24) & 255)) ) * b))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,mulFloat,return )


Color_Impl__obj::Color_Impl__obj()
{
}

bool Color_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _hx_or_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHex") ) { outValue = toHex_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sumColor") ) { outValue = sumColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sumFloat") ) { outValue = sumFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mulFloat") ) { outValue = mulFloat_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"restColor") ) { outValue = restColor_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromComponents") ) { outValue = fromComponents_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Color_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Color_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Color_Impl__obj::__mClass;

static ::String Color_Impl__obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("fromComponents",20,07,4b,52),
	HX_("get_r",49,a5,60,91),
	HX_("set_r",55,9b,2f,7a),
	HX_("get_g",3e,a5,60,91),
	HX_("set_g",4a,9b,2f,7a),
	HX_("get_b",39,a5,60,91),
	HX_("set_b",45,9b,2f,7a),
	HX_("get_a",38,a5,60,91),
	HX_("set_a",44,9b,2f,7a),
	HX_("set",a2,9b,57,00),
	HX_("toInt",34,be,11,14),
	HX_("toHex",20,f4,10,14),
	HX_("or",23,61,00,00),
	HX_("sumColor",d8,bf,68,25),
	HX_("restColor",af,dd,7b,6d),
	HX_("sumFloat",11,14,a3,dd),
	HX_("mulFloat",f8,0a,19,20),
	::String(null())
};

void Color_Impl__obj::__register()
{
	Color_Impl__obj _hx_dummy;
	Color_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util._Color.Color_Impl_",53,07,b0,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Color_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Color_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Color_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Color_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Color
