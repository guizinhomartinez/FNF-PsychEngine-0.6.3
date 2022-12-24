#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticText
#include <haxe/ui/backend/hxwidgets/custom/TransparentStaticText.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
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
#ifndef INCLUDED_hx_widgets_StaticText
#include <hx/widgets/StaticText.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5a042f82f0098edc_8_new,"haxe.ui.backend.hxwidgets.custom.TransparentStaticText","new",0x7d77b69d,"haxe.ui.backend.hxwidgets.custom.TransparentStaticText.new","haxe/ui/backend/hxwidgets/custom/TransparentStaticText.hx",8,0x1149c6d2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a042f82f0098edc_18_bind,"haxe.ui.backend.hxwidgets.custom.TransparentStaticText","bind",0x435c84e0,"haxe.ui.backend.hxwidgets.custom.TransparentStaticText.bind","haxe/ui/backend/hxwidgets/custom/TransparentStaticText.hx",18,0x1149c6d2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a042f82f0098edc_31_doNothing,"haxe.ui.backend.hxwidgets.custom.TransparentStaticText","doNothing",0xfa8ef5bf,"haxe.ui.backend.hxwidgets.custom.TransparentStaticText.doNothing","haxe/ui/backend/hxwidgets/custom/TransparentStaticText.hx",31,0x1149c6d2)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void TransparentStaticText_obj::__construct( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5a042f82f0098edc_8_new)
HXLINE(  10)		this->_hasUp = true;
HXLINE(   9)		this->_hasDown = true;
HXLINE(  13)		super::__construct(parent,text,style,id);
HXLINE(  14)		this->super::bind(::wx::widgets::EventType_obj::LEFT_DOWN,this->doNothing_dyn(),null());
HXLINE(  15)		this->super::bind(::wx::widgets::EventType_obj::LEFT_UP,this->doNothing_dyn(),null());
            	}

Dynamic TransparentStaticText_obj::__CreateEmpty() { return new TransparentStaticText_obj; }

void *TransparentStaticText_obj::_hx_vtable = 0;

Dynamic TransparentStaticText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransparentStaticText_obj > _hx_result = new TransparentStaticText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TransparentStaticText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		if (inClassId<=(int)0x504ef296) {
			return inClassId==(int)0x4ec6d073 || inClassId==(int)0x504ef296;
		} else {
			return inClassId==(int)0x5d92cb6f;
		}
	}
}

void TransparentStaticText_obj::bind(int event, ::Dynamic fn,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5a042f82f0098edc_18_bind)
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


void TransparentStaticText_obj::doNothing( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_5a042f82f0098edc_31_doNothing)
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransparentStaticText_obj,doNothing,(void))


::hx::ObjectPtr< TransparentStaticText_obj > TransparentStaticText_obj::__new( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< TransparentStaticText_obj > __this = new TransparentStaticText_obj();
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< TransparentStaticText_obj > TransparentStaticText_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	TransparentStaticText_obj *__this = (TransparentStaticText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransparentStaticText_obj), true, "haxe.ui.backend.hxwidgets.custom.TransparentStaticText"));
	*(void **)__this = TransparentStaticText_obj::_hx_vtable;
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

TransparentStaticText_obj::TransparentStaticText_obj()
{
}

::hx::Val TransparentStaticText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val TransparentStaticText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void TransparentStaticText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_hasDown",5d,72,6a,4b));
	outFields->push(HX_("_hasUp",96,db,08,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransparentStaticText_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TransparentStaticText_obj,_hasDown),HX_("_hasDown",5d,72,6a,4b)},
	{::hx::fsBool,(int)offsetof(TransparentStaticText_obj,_hasUp),HX_("_hasUp",96,db,08,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransparentStaticText_obj_sStaticStorageInfo = 0;
#endif

static ::String TransparentStaticText_obj_sMemberFields[] = {
	HX_("_hasDown",5d,72,6a,4b),
	HX_("_hasUp",96,db,08,1e),
	HX_("bind",bd,f5,16,41),
	HX_("doNothing",c2,43,dd,4f),
	::String(null()) };

::hx::Class TransparentStaticText_obj::__mClass;

void TransparentStaticText_obj::__register()
{
	TransparentStaticText_obj _hx_dummy;
	TransparentStaticText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.custom.TransparentStaticText",2b,24,1f,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransparentStaticText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransparentStaticText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransparentStaticText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransparentStaticText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
