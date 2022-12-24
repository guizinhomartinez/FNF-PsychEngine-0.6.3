#include <hxcpp.h>

#ifndef INCLUDED_04a9d982f0dc0b25
#define INCLUDED_04a9d982f0dc0b25
#include "wx/control.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_WebView
#include <hx/widgets/WebView.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6fdc7568f4ad5d23_13_new,"hx.widgets.WebView","new",0x75b1c74e,"hx.widgets.WebView.new","hx/widgets/WebView.hx",13,0x99f69b64)
HX_LOCAL_STACK_FRAME(_hx_pos_6fdc7568f4ad5d23_35_loadURL,"hx.widgets.WebView","loadURL",0x8cd28ed7,"hx.widgets.WebView.loadURL","hx/widgets/WebView.hx",35,0x99f69b64)
namespace hx{
namespace widgets{

void WebView_obj::__construct( ::hx::widgets::Window parent,::String url,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_6fdc7568f4ad5d23_13_new)
HXLINE(  25)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxControl()))->reinterpret();
HXLINE(  29)		super::__construct(parent,id,null());
            	}

Dynamic WebView_obj::__CreateEmpty() { return new WebView_obj; }

void *WebView_obj::_hx_vtable = 0;

Dynamic WebView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebView_obj > _hx_result = new WebView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool WebView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0b33a01e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x0b33a01e;
			}
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

void WebView_obj::loadURL(::String url){
            	HX_STACKFRAME(&_hx_pos_6fdc7568f4ad5d23_35_loadURL)
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebView_obj,loadURL,(void))


::hx::ObjectPtr< WebView_obj > WebView_obj::__new( ::hx::widgets::Window parent,::String url,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< WebView_obj > __this = new WebView_obj();
	__this->__construct(parent,url,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< WebView_obj > WebView_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String url,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	WebView_obj *__this = (WebView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebView_obj), true, "hx.widgets.WebView"));
	*(void **)__this = WebView_obj::_hx_vtable;
	__this->__construct(parent,url,__o_style,__o_id);
	return __this;
}

WebView_obj::WebView_obj()
{
}

::hx::Val WebView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"loadURL") ) { return ::hx::Val( loadURL_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WebView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *WebView_obj_sStaticStorageInfo = 0;
#endif

static ::String WebView_obj_sMemberFields[] = {
	HX_("loadURL",e9,88,e3,08),
	::String(null()) };

::hx::Class WebView_obj::__mClass;

void WebView_obj::__register()
{
	WebView_obj _hx_dummy;
	WebView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.WebView",5c,c8,14,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WebView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WebView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
