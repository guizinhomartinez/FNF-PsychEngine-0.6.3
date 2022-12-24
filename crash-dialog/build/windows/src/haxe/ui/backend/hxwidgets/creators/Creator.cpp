#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca4a4ce8b90b9c91_10_new,"haxe.ui.backend.hxwidgets.creators.Creator","new",0x92c5f832,"haxe.ui.backend.hxwidgets.creators.Creator.new","haxe/ui/backend/hxwidgets/creators/Creator.hx",10,0x393f2a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_ca4a4ce8b90b9c91_14_createStyle,"haxe.ui.backend.hxwidgets.creators.Creator","createStyle",0xd3122667,"haxe.ui.backend.hxwidgets.creators.Creator.createStyle","haxe/ui/backend/hxwidgets/creators/Creator.hx",14,0x393f2a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_ca4a4ce8b90b9c91_18_createConstructorParams,"haxe.ui.backend.hxwidgets.creators.Creator","createConstructorParams",0x4ac00e16,"haxe.ui.backend.hxwidgets.creators.Creator.createConstructorParams","haxe/ui/backend/hxwidgets/creators/Creator.hx",18,0x393f2a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_ca4a4ce8b90b9c91_22_createWindow,"haxe.ui.backend.hxwidgets.creators.Creator","createWindow",0x198921fa,"haxe.ui.backend.hxwidgets.creators.Creator.createWindow","haxe/ui/backend/hxwidgets/creators/Creator.hx",22,0x393f2a1d)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void Creator_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ca4a4ce8b90b9c91_10_new)
HXDLIN(  10)		this->_component = component;
            	}

Dynamic Creator_obj::__CreateEmpty() { return new Creator_obj; }

void *Creator_obj::_hx_vtable = 0;

Dynamic Creator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Creator_obj > _hx_result = new Creator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Creator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3925cb80;
}

int Creator_obj::createStyle(int style){
            	HX_STACKFRAME(&_hx_pos_ca4a4ce8b90b9c91_14_createStyle)
HXDLIN(  14)		return style;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Creator_obj,createStyle,return )

::cpp::VirtualArray Creator_obj::createConstructorParams(::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_ca4a4ce8b90b9c91_18_createConstructorParams)
HXDLIN(  18)		return params;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Creator_obj,createConstructorParams,return )

 ::hx::widgets::Object Creator_obj::createWindow( ::hx::widgets::Object parent,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_ca4a4ce8b90b9c91_22_createWindow)
HXDLIN(  22)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Creator_obj,createWindow,return )


::hx::ObjectPtr< Creator_obj > Creator_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Creator_obj > __this = new Creator_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Creator_obj > Creator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Creator_obj *__this = (Creator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Creator_obj), true, "haxe.ui.backend.hxwidgets.creators.Creator"));
	*(void **)__this = Creator_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Creator_obj::Creator_obj()
{
}

void Creator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Creator);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_END_CLASS();
}

void Creator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
}

::hx::Val Creator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createStyle") ) { return ::hx::Val( createStyle_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createConstructorParams") ) { return ::hx::Val( createConstructorParams_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Creator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Creator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_component",7e,6c,f6,6a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Creator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Creator_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Creator_obj_sStaticStorageInfo = 0;
#endif

static ::String Creator_obj_sMemberFields[] = {
	HX_("_component",7e,6c,f6,6a),
	HX_("createStyle",95,dc,98,ad),
	HX_("createConstructorParams",44,51,16,38),
	HX_("createWindow",0c,d4,e1,74),
	::String(null()) };

::hx::Class Creator_obj::__mClass;

void Creator_obj::__register()
{
	Creator_obj _hx_dummy;
	Creator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.Creator",40,b7,bd,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Creator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Creator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Creator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Creator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
