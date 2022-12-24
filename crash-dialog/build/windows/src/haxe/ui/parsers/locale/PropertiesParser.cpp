#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_parsers_locale_PropertiesParser
#include <haxe/ui/parsers/locale/PropertiesParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4cfdadb2b79f4822_7_new,"haxe.ui.parsers.locale.PropertiesParser","new",0x1f54c70c,"haxe.ui.parsers.locale.PropertiesParser.new","haxe/ui/parsers/locale/PropertiesParser.hx",7,0xa31dde64)
HX_LOCAL_STACK_FRAME(_hx_pos_4cfdadb2b79f4822_10_parse,"haxe.ui.parsers.locale.PropertiesParser","parse",0x578289df,"haxe.ui.parsers.locale.PropertiesParser.parse","haxe/ui/parsers/locale/PropertiesParser.hx",10,0xa31dde64)
namespace haxe{
namespace ui{
namespace parsers{
namespace locale{

void PropertiesParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4cfdadb2b79f4822_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic PropertiesParser_obj::__CreateEmpty() { return new PropertiesParser_obj; }

void *PropertiesParser_obj::_hx_vtable = 0;

Dynamic PropertiesParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertiesParser_obj > _hx_result = new PropertiesParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertiesParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x44048c26) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x44048c26;
	} else {
		return inClassId==(int)0x55ebf20d;
	}
}

 ::haxe::ds::StringMap PropertiesParser_obj::parse(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_4cfdadb2b79f4822_10_parse)
HXLINE(  11)		 ::haxe::ds::StringMap result =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  12)		::Array< ::String > lines = data.split(HX_("\n",0a,00,00,00));
HXLINE(  13)		{
HXLINE(  13)			int _g = 0;
HXDLIN(  13)			while((_g < lines->length)){
HXLINE(  13)				::String line = lines->__get(_g);
HXDLIN(  13)				_g = (_g + 1);
HXLINE(  14)				line = ::StringTools_obj::trim(line);
HXLINE(  15)				bool _hx_tmp;
HXDLIN(  15)				if ((line.length != 0)) {
HXLINE(  15)					_hx_tmp = ::StringTools_obj::startsWith(line,HX_("#",23,00,00,00));
            				}
            				else {
HXLINE(  15)					_hx_tmp = true;
            				}
HXDLIN(  15)				if (_hx_tmp) {
HXLINE(  16)					continue;
            				}
HXLINE(  19)				int separator = line.indexOf(HX_("=",3d,00,00,00),null());
HXLINE(  20)				if ((separator == -1)) {
HXLINE(  21)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Locale parser: Invalid line ",58,0b,93,b0) + line)));
            				}
HXLINE(  24)				::String key = ::StringTools_obj::trim(line.substr(0,separator));
HXLINE(  25)				::String content = ::StringTools_obj::trim(line.substr((separator + 1),null()));
HXLINE(  26)				result->set(key,content);
            			}
            		}
HXLINE(  29)		return result;
            	}



::hx::ObjectPtr< PropertiesParser_obj > PropertiesParser_obj::__new() {
	::hx::ObjectPtr< PropertiesParser_obj > __this = new PropertiesParser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PropertiesParser_obj > PropertiesParser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PropertiesParser_obj *__this = (PropertiesParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertiesParser_obj), false, "haxe.ui.parsers.locale.PropertiesParser"));
	*(void **)__this = PropertiesParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PropertiesParser_obj::PropertiesParser_obj()
{
}

::hx::Val PropertiesParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PropertiesParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PropertiesParser_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertiesParser_obj_sMemberFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class PropertiesParser_obj::__mClass;

void PropertiesParser_obj::__register()
{
	PropertiesParser_obj _hx_dummy;
	PropertiesParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.parsers.locale.PropertiesParser",1a,91,91,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertiesParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertiesParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertiesParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertiesParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace locale
