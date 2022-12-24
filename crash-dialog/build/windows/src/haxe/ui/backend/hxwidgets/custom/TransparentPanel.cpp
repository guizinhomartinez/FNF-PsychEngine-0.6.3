#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentPanel
#include <haxe/ui/backend/hxwidgets/custom/TransparentPanel.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Panel
#include <hx/widgets/Panel.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_218795e699cf9008_8_new,"haxe.ui.backend.hxwidgets.custom.TransparentPanel","new",0xf1aa1446,"haxe.ui.backend.hxwidgets.custom.TransparentPanel.new","haxe/ui/backend/hxwidgets/custom/TransparentPanel.hx",8,0x7ef256eb)
HX_LOCAL_STACK_FRAME(_hx_pos_218795e699cf9008_18_bind,"haxe.ui.backend.hxwidgets.custom.TransparentPanel","bind",0x7b3c1b17,"haxe.ui.backend.hxwidgets.custom.TransparentPanel.bind","haxe/ui/backend/hxwidgets/custom/TransparentPanel.hx",18,0x7ef256eb)
HX_LOCAL_STACK_FRAME(_hx_pos_218795e699cf9008_31_doNothing,"haxe.ui.backend.hxwidgets.custom.TransparentPanel","doNothing",0x60107828,"haxe.ui.backend.hxwidgets.custom.TransparentPanel.doNothing","haxe/ui/backend/hxwidgets/custom/TransparentPanel.hx",31,0x7ef256eb)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void TransparentPanel_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_218795e699cf9008_8_new)
HXLINE(  10)		this->_hasUp = true;
HXLINE(   9)		this->_hasDown = true;
HXLINE(  13)		super::__construct(parent,style,id);
HXLINE(  14)		this->super::bind(::wx::widgets::EventType_obj::LEFT_DOWN,this->doNothing_dyn(),null());
HXLINE(  15)		this->super::bind(::wx::widgets::EventType_obj::LEFT_UP,this->doNothing_dyn(),null());
            	}

Dynamic TransparentPanel_obj::__CreateEmpty() { return new TransparentPanel_obj; }

void *TransparentPanel_obj::_hx_vtable = 0;

Dynamic TransparentPanel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransparentPanel_obj > _hx_result = new TransparentPanel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TransparentPanel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x402dd5a8) {
		if (inClassId<=(int)0x2fce02c9) {
			if (inClassId<=(int)0x2045b63e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
			} else {
				return inClassId==(int)0x2fce02c9;
			}
		} else {
			return inClassId==(int)0x402dd5a8;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

void TransparentPanel_obj::bind(int event, ::Dynamic fn,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_218795e699cf9008_18_bind)
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if ((event == ::wx::widgets::EventType_obj::LEFT_DOWN)) {
HXLINE(  19)			_hx_tmp = (this->_hasDown == true);
            		}
            		else {
HXLINE(  19)			_hx_tmp = false;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  20)			this->super::unbind(::wx::widgets::EventType_obj::LEFT_DOWN,this->doNothing_dyn(),null());
HXLINE(  21)			this->_hasDown = false;
            		}
HXLINE(  23)		bool _hx_tmp1;
HXDLIN(  23)		if ((event == ::wx::widgets::EventType_obj::LEFT_UP)) {
HXLINE(  23)			_hx_tmp1 = (this->_hasUp == true);
            		}
            		else {
HXLINE(  23)			_hx_tmp1 = false;
            		}
HXDLIN(  23)		if (_hx_tmp1) {
HXLINE(  24)			this->super::unbind(::wx::widgets::EventType_obj::LEFT_UP,this->doNothing_dyn(),null());
HXLINE(  25)			this->_hasUp = false;
            		}
HXLINE(  28)		this->super::bind(event,fn,id);
            	}


void TransparentPanel_obj::doNothing( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_218795e699cf9008_31_doNothing)
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransparentPanel_obj,doNothing,(void))


::hx::ObjectPtr< TransparentPanel_obj > TransparentPanel_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< TransparentPanel_obj > __this = new TransparentPanel_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< TransparentPanel_obj > TransparentPanel_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	TransparentPanel_obj *__this = (TransparentPanel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransparentPanel_obj), true, "haxe.ui.backend.hxwidgets.custom.TransparentPanel"));
	*(void **)__this = TransparentPanel_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

TransparentPanel_obj::TransparentPanel_obj()
{
}

::hx::Val TransparentPanel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_hasUp") ) { return ::hx::Val( _hasUp ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasDown") ) { return ::hx::Val( _hasDown ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doNothing") ) { return ::hx::Val( doNothing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransparentPanel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_hasUp") ) { _hasUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasDown") ) { _hasDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransparentPanel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_hasDown",5d,72,6a,4b));
	outFields->push(HX_("_hasUp",96,db,08,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransparentPanel_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TransparentPanel_obj,_hasDown),HX_("_hasDown",5d,72,6a,4b)},
	{::hx::fsBool,(int)offsetof(TransparentPanel_obj,_hasUp),HX_("_hasUp",96,db,08,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransparentPanel_obj_sStaticStorageInfo = 0;
#endif

static ::String TransparentPanel_obj_sMemberFields[] = {
	HX_("_hasDown",5d,72,6a,4b),
	HX_("_hasUp",96,db,08,1e),
	HX_("bind",bd,f5,16,41),
	HX_("doNothing",c2,43,dd,4f),
	::String(null()) };

::hx::Class TransparentPanel_obj::__mClass;

void TransparentPanel_obj::__register()
{
	TransparentPanel_obj _hx_dummy;
	TransparentPanel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.custom.TransparentPanel",54,39,b5,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransparentPanel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransparentPanel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransparentPanel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransparentPanel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
