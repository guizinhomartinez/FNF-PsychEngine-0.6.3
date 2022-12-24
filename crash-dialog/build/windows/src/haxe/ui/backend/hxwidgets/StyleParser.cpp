#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_StyleParser
#include <haxe/ui/backend/hxwidgets/StyleParser.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_DataViewCtrlStyle
#include <wx/widgets/styles/DataViewCtrlStyle.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_GaugeStyle
#include <wx/widgets/styles/GaugeStyle.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_ScrollBarStyle
#include <wx/widgets/styles/ScrollBarStyle.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_SliderStyle
#include <wx/widgets/styles/SliderStyle.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_StaticLineStyle
#include <wx/widgets/styles/StaticLineStyle.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_TextCtrlStyle
#include <wx/widgets/styles/TextCtrlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2bc7250efe1345fd_6_parseStyleString,"haxe.ui.backend.hxwidgets.StyleParser","parseStyleString",0x863a9928,"haxe.ui.backend.hxwidgets.StyleParser.parseStyleString","haxe/ui/backend/hxwidgets/StyleParser.hx",6,0x59ec486b)
HX_LOCAL_STACK_FRAME(_hx_pos_2bc7250efe1345fd_20_parseStyle,"haxe.ui.backend.hxwidgets.StyleParser","parseStyle",0xdb8268f7,"haxe.ui.backend.hxwidgets.StyleParser.parseStyle","haxe/ui/backend/hxwidgets/StyleParser.hx",20,0x59ec486b)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void StyleParser_obj::__construct() { }

Dynamic StyleParser_obj::__CreateEmpty() { return new StyleParser_obj; }

void *StyleParser_obj::_hx_vtable = 0;

Dynamic StyleParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleParser_obj > _hx_result = new StyleParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62647b6b;
}

int StyleParser_obj::parseStyleString(::String styleString){
            	HX_STACKFRAME(&_hx_pos_2bc7250efe1345fd_6_parseStyleString)
HXLINE(   7)		if (::hx::IsNull( styleString )) {
HXLINE(   8)			return 0;
            		}
HXLINE(  11)		int style = 0;
HXLINE(  12)		::Array< ::String > styles = styleString.split(HX_(",",2c,00,00,00));
HXLINE(  13)		{
HXLINE(  13)			int _g = 0;
HXDLIN(  13)			while((_g < styles->length)){
HXLINE(  13)				::String s = styles->__get(_g);
HXDLIN(  13)				_g = (_g + 1);
HXLINE(  14)				s = ::StringTools_obj::trim(s);
HXLINE(  15)				style = (style | ::haxe::ui::backend::hxwidgets::StyleParser_obj::parseStyle(s));
            			}
            		}
HXLINE(  17)		return style;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleParser_obj,parseStyleString,return )

int StyleParser_obj::parseStyle(::String style){
            	HX_STACKFRAME(&_hx_pos_2bc7250efe1345fd_20_parseStyle)
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (::hx::IsNotNull( style )) {
HXLINE(  21)			_hx_tmp = (style.length == 0);
            		}
            		else {
HXLINE(  21)			_hx_tmp = true;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  22)			return 0;
            		}
HXLINE(  25)		::String _hx_switch_0 = style;
            		if (  (_hx_switch_0==HX_("DataViewCtrlStyle.DV_ROW_LINES",84,ba,44,18)) ){
HXLINE(  34)			return ::wx::widgets::styles::DataViewCtrlStyle_obj::DV_ROW_LINES;
HXDLIN(  34)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("GaugeStyle.HORIZONTAL",fa,0e,1b,9a)) ){
HXLINE(  26)			return ::wx::widgets::styles::GaugeStyle_obj::HORIZONTAL;
HXDLIN(  26)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("GaugeStyle.VERTICAL",0c,19,ac,d6)) ){
HXLINE(  27)			return ::wx::widgets::styles::GaugeStyle_obj::VERTICAL;
HXDLIN(  27)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("ScrollBarStyle.HORIZONTAL",c7,6c,15,a2)) ){
HXLINE(  30)			return ::wx::widgets::styles::ScrollBarStyle_obj::HORIZONTAL;
HXDLIN(  30)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("ScrollBarStyle.VERTICAL",99,79,a3,a9)) ){
HXLINE(  31)			return ::wx::widgets::styles::ScrollBarStyle_obj::VERTICAL;
HXDLIN(  31)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("SliderStyle.HORIZONTAL",62,95,23,4c)) ){
HXLINE(  29)			return ::wx::widgets::styles::SliderStyle_obj::HORIZONTAL;
HXDLIN(  29)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("SliderStyle.VERTICAL",74,b5,86,a7)) ){
HXLINE(  28)			return ::wx::widgets::styles::SliderStyle_obj::VERTICAL;
HXDLIN(  28)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("StaticLineStyle.VERTICAL",d5,c6,26,82)) ){
HXLINE(  35)			return ::wx::widgets::styles::StaticLineStyle_obj::VERTICAL;
HXDLIN(  35)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("TextCtrlStyle.HSCROLL",e0,b2,1c,03)) ){
HXLINE(  33)			return ::wx::widgets::styles::TextCtrlStyle_obj::HSCROLL;
HXDLIN(  33)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("TextCtrlStyle.MULTILINE",18,84,81,e9)) ){
HXLINE(  32)			return ::wx::widgets::styles::TextCtrlStyle_obj::MULTILINE;
HXDLIN(  32)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  37)			::haxe::Log_obj::trace(((HX_("WARNING: hxWidgets style \"",30,8f,16,d3) + style) + HX_("\" not recognised",fa,2a,a2,aa)),::hx::SourceInfo(HX_("haxe/ui/backend/hxwidgets/StyleParser.hx",6b,48,ec,59),37,HX_("haxe.ui.backend.hxwidgets.StyleParser",d5,be,d6,85),HX_("parseStyle",fe,eb,fe,ad)));
            		}
            		_hx_goto_2:;
HXLINE(  40)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleParser_obj,parseStyle,return )


StyleParser_obj::StyleParser_obj()
{
}

bool StyleParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"parseStyle") ) { outValue = parseStyle_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"parseStyleString") ) { outValue = parseStyleString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StyleParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StyleParser_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StyleParser_obj::__mClass;

static ::String StyleParser_obj_sStaticFields[] = {
	HX_("parseStyleString",6f,9b,91,fc),
	HX_("parseStyle",fe,eb,fe,ad),
	::String(null())
};

void StyleParser_obj::__register()
{
	StyleParser_obj _hx_dummy;
	StyleParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.StyleParser",d5,be,d6,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleParser_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StyleParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StyleParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
