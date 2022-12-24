#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_LocaleParser
#include <haxe/ui/parsers/locale/LocaleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_PoParser
#include <haxe/ui/parsers/locale/PoParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4fd870d7aa40988_7_new,"haxe.ui.parsers.locale.PoParser","new",0x3b188c18,"haxe.ui.parsers.locale.PoParser.new","haxe/ui/parsers/locale/PoParser.hx",7,0xbab1fed8)
HX_LOCAL_STACK_FRAME(_hx_pos_e4fd870d7aa40988_10_parse,"haxe.ui.parsers.locale.PoParser","parse",0xbf8aa9eb,"haxe.ui.parsers.locale.PoParser.parse","haxe/ui/parsers/locale/PoParser.hx",10,0xbab1fed8)
namespace haxe{
namespace ui{
namespace parsers{
namespace locale{

void PoParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e4fd870d7aa40988_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic PoParser_obj::__CreateEmpty() { return new PoParser_obj; }

void *PoParser_obj::_hx_vtable = 0;

Dynamic PoParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PoParser_obj > _hx_result = new PoParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PoParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55ebf20d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x55ebf20d;
	} else {
		return inClassId==(int)0x6f2def32;
	}
}

 ::haxe::ds::StringMap PoParser_obj::parse(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_e4fd870d7aa40988_10_parse)
HXLINE(  11)		 ::EReg msgidEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("msgid *= *\"(.*)\"",7c,40,11,fe),HX_("",00,00,00,00));
HXLINE(  12)		 ::EReg msgstrEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("msgstr *= *\"(.*)\"",48,70,14,27),HX_("",00,00,00,00));
HXLINE(  13)		 ::haxe::ds::StringMap result =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  14)		::Array< ::String > lines = data.split(HX_("\n",0a,00,00,00));
HXLINE(  15)		::String currentID = null();
HXLINE(  16)		{
HXLINE(  16)			int _g = 0;
HXDLIN(  16)			while((_g < lines->length)){
HXLINE(  16)				::String line = lines->__get(_g);
HXDLIN(  16)				_g = (_g + 1);
HXLINE(  17)				line = ::StringTools_obj::trim(line);
HXLINE(  18)				bool _hx_tmp;
HXDLIN(  18)				if ((line.length != 0)) {
HXLINE(  18)					_hx_tmp = ::StringTools_obj::startsWith(line,HX_("#",23,00,00,00));
            				}
            				else {
HXLINE(  18)					_hx_tmp = true;
            				}
HXDLIN(  18)				if (_hx_tmp) {
HXLINE(  19)					continue;
            				}
HXLINE(  22)				if (::hx::IsNull( currentID )) {
HXLINE(  23)					if (msgidEReg->match(line)) {
HXLINE(  24)						currentID = msgidEReg->matched(1);
            					}
            					else {
HXLINE(  26)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Locale parser: Invalid line ",58,0b,93,b0) + line)));
            					}
            				}
            				else {
HXLINE(  29)					if (msgstrEReg->match(line)) {
HXLINE(  30)						result->set(currentID,msgstrEReg->matched(1));
HXLINE(  32)						currentID = null();
            					}
            					else {
HXLINE(  34)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Locale parser: Invalid line ",58,0b,93,b0) + line)));
            					}
            				}
            			}
            		}
HXLINE(  39)		return result;
            	}



::hx::ObjectPtr< PoParser_obj > PoParser_obj::__new() {
	::hx::ObjectPtr< PoParser_obj > __this = new PoParser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PoParser_obj > PoParser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PoParser_obj *__this = (PoParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PoParser_obj), false, "haxe.ui.parsers.locale.PoParser"));
	*(void **)__this = PoParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PoParser_obj::PoParser_obj()
{
}

::hx::Val PoParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PoParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PoParser_obj_sStaticStorageInfo = 0;
#endif

static ::String PoParser_obj_sMemberFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class PoParser_obj::__mClass;

void PoParser_obj::__register()
{
	PoParser_obj _hx_dummy;
	PoParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.parsers.locale.PoParser",26,e0,32,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PoParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PoParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PoParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PoParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace locale
