#include <hxcpp.h>

#ifndef INCLUDED_f803ca800b24f38b
#define INCLUDED_f803ca800b24f38b
#include "wx/glcanvas.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GLCanvas
#include <hx/widgets/GLCanvas.h>
#endif
#ifndef INCLUDED_hx_widgets_GLContext
#include <hx/widgets/GLContext.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b1aa99a2b14d2055_9_new,"hx.widgets.GLContext","new",0x72623bdf,"hx.widgets.GLContext.new","hx/widgets/GLContext.hx",9,0x96ee0873)
HX_LOCAL_STACK_FRAME(_hx_pos_b1aa99a2b14d2055_18_get_glContextRef,"hx.widgets.GLContext","get_glContextRef",0xb61d76d3,"hx.widgets.GLContext.get_glContextRef","hx/widgets/GLContext.hx",18,0x96ee0873)
namespace hx{
namespace widgets{

void GLContext_obj::__construct( ::hx::widgets::GLCanvas canvas){
            	HX_STACKFRAME(&_hx_pos_b1aa99a2b14d2055_9_new)
HXDLIN(   9)		super::__construct();
HXLINE(  10)		::cpp::Pointer<  wxGLContext > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxGLContext(canvas->_ref->rawCast())));
HXDLIN(  10)		this->_ref = _hx_tmp->reinterpret();
            	}

Dynamic GLContext_obj::__CreateEmpty() { return new GLContext_obj; }

void *GLContext_obj::_hx_vtable = 0;

Dynamic GLContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLContext_obj > _hx_result = new GLContext_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GLContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x131f2caf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x131f2caf;
	} else {
		return inClassId==(int)0x2045b63e;
	}
}

::cpp::Pointer<  wxGLContext > GLContext_obj::get_glContextRef(){
            	HX_STACKFRAME(&_hx_pos_b1aa99a2b14d2055_18_get_glContextRef)
HXDLIN(  18)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLContext_obj,get_glContextRef,return )


::hx::ObjectPtr< GLContext_obj > GLContext_obj::__new( ::hx::widgets::GLCanvas canvas) {
	::hx::ObjectPtr< GLContext_obj > __this = new GLContext_obj();
	__this->__construct(canvas);
	return __this;
}

::hx::ObjectPtr< GLContext_obj > GLContext_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::GLCanvas canvas) {
	GLContext_obj *__this = (GLContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLContext_obj), true, "hx.widgets.GLContext"));
	*(void **)__this = GLContext_obj::_hx_vtable;
	__this->__construct(canvas);
	return __this;
}

GLContext_obj::GLContext_obj()
{
}

void GLContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLContext);
	HX_MARK_MEMBER_NAME(glContextRef,"glContextRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(glContextRef,"glContextRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GLContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"glContextRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_glContextRef() : glContextRef ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_glContextRef") ) { return ::hx::Val( get_glContextRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GLContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"glContextRef") ) { glContextRef=inValue.Cast< ::cpp::Pointer<  wxGLContext > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("glContextRef",29,79,77,ce));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GLContext_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxGLContext > */ ,(int)offsetof(GLContext_obj,glContextRef),HX_("glContextRef",29,79,77,ce)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GLContext_obj_sStaticStorageInfo = 0;
#endif

static ::String GLContext_obj_sMemberFields[] = {
	HX_("glContextRef",29,79,77,ce),
	HX_("get_glContextRef",b2,65,16,d3),
	::String(null()) };

::hx::Class GLContext_obj::__mClass;

void GLContext_obj::__register()
{
	GLContext_obj _hx_dummy;
	GLContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.GLContext",6d,60,c9,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GLContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GLContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
