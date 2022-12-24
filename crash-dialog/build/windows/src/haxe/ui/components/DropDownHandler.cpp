#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#include <haxe/ui/components/DropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5eb292b087d03656_209_new,"haxe.ui.components.DropDownHandler","new",0x62d87425,"haxe.ui.components.DropDownHandler.new","haxe/ui/components/DropDown.hx",209,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_218_get_component,"haxe.ui.components.DropDownHandler","get_component",0xc9aeb099,"haxe.ui.components.DropDownHandler.get_component","haxe/ui/components/DropDown.hx",218,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_221_prepare,"haxe.ui.components.DropDownHandler","prepare",0xeadffbcc,"haxe.ui.components.DropDownHandler.prepare","haxe/ui/components/DropDown.hx",221,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_224_reset,"haxe.ui.components.DropDownHandler","reset",0x6e9128d4,"haxe.ui.components.DropDownHandler.reset","haxe/ui/components/DropDown.hx",224,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_229_get_selectedIndex,"haxe.ui.components.DropDownHandler","get_selectedIndex",0xd8a45493,"haxe.ui.components.DropDownHandler.get_selectedIndex","haxe/ui/components/DropDown.hx",229,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_232_set_selectedIndex,"haxe.ui.components.DropDownHandler","set_selectedIndex",0xfc122c9f,"haxe.ui.components.DropDownHandler.set_selectedIndex","haxe/ui/components/DropDown.hx",232,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_237_get_selectedItem,"haxe.ui.components.DropDownHandler","get_selectedItem",0x616b76b2,"haxe.ui.components.DropDownHandler.get_selectedItem","haxe/ui/components/DropDown.hx",237,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_240_set_selectedItem,"haxe.ui.components.DropDownHandler","set_selectedItem",0xb7ad6426,"haxe.ui.components.DropDownHandler.set_selectedItem","haxe/ui/components/DropDown.hx",240,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_243_applyDefault,"haxe.ui.components.DropDownHandler","applyDefault",0x6bce608e,"haxe.ui.components.DropDownHandler.applyDefault","haxe/ui/components/DropDown.hx",243,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_248_pauseEvents,"haxe.ui.components.DropDownHandler","pauseEvents",0x1aa0a774,"haxe.ui.components.DropDownHandler.pauseEvents","haxe/ui/components/DropDown.hx",248,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_253_resumeEvents,"haxe.ui.components.DropDownHandler","resumeEvents",0x06d66841,"haxe.ui.components.DropDownHandler.resumeEvents","haxe/ui/components/DropDown.hx",253,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb292b087d03656_251_resumeEvents,"haxe.ui.components.DropDownHandler","resumeEvents",0x06d66841,"haxe.ui.components.DropDownHandler.resumeEvents","haxe/ui/components/DropDown.hx",251,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDownHandler_obj::__construct( ::haxe::ui::components::DropDown dropdown){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_209_new)
HXLINE( 246)		this->eventsPaused = false;
HXLINE( 213)		this->_dropdown = dropdown;
            	}

Dynamic DropDownHandler_obj::__CreateEmpty() { return new DropDownHandler_obj; }

void *DropDownHandler_obj::_hx_vtable = 0;

Dynamic DropDownHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropDownHandler_obj > _hx_result = new DropDownHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DropDownHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x184b9921;
}

static ::haxe::ui::components::IDropDownHandler_obj _hx_haxe_ui_components_DropDownHandler__hx_haxe_ui_components_IDropDownHandler= {
	(  ::haxe::ui::core::Component (::hx::Object::*)())&::haxe::ui::components::DropDownHandler_obj::get_component,
	( int (::hx::Object::*)())&::haxe::ui::components::DropDownHandler_obj::get_selectedIndex,
	( int (::hx::Object::*)(int))&::haxe::ui::components::DropDownHandler_obj::set_selectedIndex,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::components::DropDownHandler_obj::get_selectedItem,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ui::components::DropDownHandler_obj::set_selectedItem,
	( void (::hx::Object::*)( ::haxe::ui::containers::Box))&::haxe::ui::components::DropDownHandler_obj::prepare,
	( void (::hx::Object::*)())&::haxe::ui::components::DropDownHandler_obj::reset,
	( void (::hx::Object::*)())&::haxe::ui::components::DropDownHandler_obj::applyDefault,
	( void (::hx::Object::*)())&::haxe::ui::components::DropDownHandler_obj::pauseEvents,
	( void (::hx::Object::*)())&::haxe::ui::components::DropDownHandler_obj::resumeEvents,
};

void *DropDownHandler_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x726dd720: return &_hx_haxe_ui_components_DropDownHandler__hx_haxe_ui_components_IDropDownHandler;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::haxe::ui::core::Component DropDownHandler_obj::get_component(){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_218_get_component)
HXDLIN( 218)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownHandler_obj,get_component,return )

void DropDownHandler_obj::prepare( ::haxe::ui::containers::Box wrapper){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_221_prepare)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownHandler_obj,prepare,(void))

void DropDownHandler_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_224_reset)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownHandler_obj,reset,(void))

int DropDownHandler_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_229_get_selectedIndex)
HXDLIN( 229)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownHandler_obj,get_selectedIndex,return )

int DropDownHandler_obj::set_selectedIndex(int value){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_232_set_selectedIndex)
HXDLIN( 232)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownHandler_obj,set_selectedIndex,return )

 ::Dynamic DropDownHandler_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_237_get_selectedItem)
HXDLIN( 237)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownHandler_obj,get_selectedItem,return )

 ::Dynamic DropDownHandler_obj::set_selectedItem( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_240_set_selectedItem)
HXDLIN( 240)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownHandler_obj,set_selectedItem,return )

void DropDownHandler_obj::applyDefault(){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_243_applyDefault)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownHandler_obj,applyDefault,(void))

void DropDownHandler_obj::pauseEvents(){
            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_248_pauseEvents)
HXDLIN( 248)		this->eventsPaused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownHandler_obj,pauseEvents,(void))

void DropDownHandler_obj::resumeEvents(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::DropDownHandler,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_5eb292b087d03656_253_resumeEvents)
HXLINE( 253)			_gthis->eventsPaused = false;
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_5eb292b087d03656_251_resumeEvents)
HXDLIN( 251)		 ::haxe::ui::components::DropDownHandler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 252)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownHandler_obj,resumeEvents,(void))


::hx::ObjectPtr< DropDownHandler_obj > DropDownHandler_obj::__new( ::haxe::ui::components::DropDown dropdown) {
	::hx::ObjectPtr< DropDownHandler_obj > __this = new DropDownHandler_obj();
	__this->__construct(dropdown);
	return __this;
}

::hx::ObjectPtr< DropDownHandler_obj > DropDownHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown) {
	DropDownHandler_obj *__this = (DropDownHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropDownHandler_obj), true, "haxe.ui.components.DropDownHandler"));
	*(void **)__this = DropDownHandler_obj::_hx_vtable;
	__this->__construct(dropdown);
	return __this;
}

DropDownHandler_obj::DropDownHandler_obj()
{
}

void DropDownHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropDownHandler);
	HX_MARK_MEMBER_NAME(_dropdown,"_dropdown");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(eventsPaused,"eventsPaused");
	HX_MARK_END_CLASS();
}

void DropDownHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dropdown,"_dropdown");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(eventsPaused,"eventsPaused");
}

::hx::Val DropDownHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return ::hx::Val( prepare_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { return ::hx::Val( _dropdown ); }
		if (HX_FIELD_EQ(inName,"component") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_component() : component ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pauseEvents") ) { return ::hx::Val( pauseEvents_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItem() ); }
		if (HX_FIELD_EQ(inName,"applyDefault") ) { return ::hx::Val( applyDefault_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventsPaused") ) { return ::hx::Val( eventsPaused ); }
		if (HX_FIELD_EQ(inName,"resumeEvents") ) { return ::hx::Val( resumeEvents_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_component") ) { return ::hx::Val( get_component_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropDownHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { _dropdown=inValue.Cast<  ::haxe::ui::components::DropDown >(); return inValue; }
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItem(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"eventsPaused") ) { eventsPaused=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropDownHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dropdown",70,6b,c5,44));
	outFields->push(HX_("component",bd,f0,53,0f));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("selectedItem",0e,e5,59,d6));
	outFields->push(HX_("eventsPaused",a7,dc,40,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropDownHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::DropDown */ ,(int)offsetof(DropDownHandler_obj,_dropdown),HX_("_dropdown",70,6b,c5,44)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(DropDownHandler_obj,component),HX_("component",bd,f0,53,0f)},
	{::hx::fsBool,(int)offsetof(DropDownHandler_obj,eventsPaused),HX_("eventsPaused",a7,dc,40,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropDownHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String DropDownHandler_obj_sMemberFields[] = {
	HX_("_dropdown",70,6b,c5,44),
	HX_("component",bd,f0,53,0f),
	HX_("get_component",94,c4,b7,d0),
	HX_("prepare",87,91,dd,37),
	HX_("reset",cf,49,c8,e6),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("applyDefault",f3,24,31,db),
	HX_("eventsPaused",a7,dc,40,95),
	HX_("pauseEvents",af,36,7b,8a),
	HX_("resumeEvents",a6,2c,39,76),
	::String(null()) };

::hx::Class DropDownHandler_obj::__mClass;

void DropDownHandler_obj::__register()
{
	DropDownHandler_obj _hx_dummy;
	DropDownHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.DropDownHandler",b3,7d,e0,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropDownHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropDownHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDownHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDownHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
