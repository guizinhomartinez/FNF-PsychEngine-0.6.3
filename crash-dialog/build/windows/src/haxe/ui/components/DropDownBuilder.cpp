#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CalendarDropDownHandler
#include <haxe/ui/components/CalendarDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#include <haxe/ui/components/DropDownBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#include <haxe/ui/components/DropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_ListDropDownHandler
#include <haxe/ui/components/_DropDown/ListDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_918_new,"haxe.ui.components.DropDownBuilder","new",0xc1a41bf6,"haxe.ui.components.DropDownBuilder.new","haxe/ui/components/DropDown.hx",918,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_927_get_handler,"haxe.ui.components.DropDownBuilder","get_handler",0xb056e177,"haxe.ui.components.DropDownBuilder.get_handler","haxe/ui/components/DropDown.hx",927,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_939_onReady,"haxe.ui.components.DropDownBuilder","onReady",0x91e50d5a,"haxe.ui.components.DropDownBuilder.onReady","haxe/ui/components/DropDown.hx",939,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_946_create,"haxe.ui.components.DropDownBuilder","create",0x62e5fd26,"haxe.ui.components.DropDownBuilder.create","haxe/ui/components/DropDown.hx",946,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_953_destroy,"haxe.ui.components.DropDownBuilder","destroy",0x3972fb90,"haxe.ui.components.DropDownBuilder.destroy","haxe/ui/components/DropDown.hx",953,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_962_addComponent,"haxe.ui.components.DropDownBuilder","addComponent",0x2018a406,"haxe.ui.components.DropDownBuilder.addComponent","haxe/ui/components/DropDown.hx",962,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_974_onThemeChanged,"haxe.ui.components.DropDownBuilder","onThemeChanged",0xe4304dd4,"haxe.ui.components.DropDownBuilder.onThemeChanged","haxe/ui/components/DropDown.hx",974,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_ff5df7ac87c4dee2_913_boot,"haxe.ui.components.DropDownBuilder","boot",0xa60d5bdc,"haxe.ui.components.DropDownBuilder.boot","haxe/ui/components/DropDown.hx",913,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDownBuilder_obj::__construct( ::haxe::ui::components::DropDown dropdown){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_918_new)
HXLINE( 919)		super::__construct(dropdown);
HXLINE( 920)		this->_dropdown = dropdown;
HXLINE( 922)		{
HXLINE( 922)			::Dynamic this1 = ::haxe::ui::components::DropDownBuilder_obj::HANDLER_MAP;
HXDLIN( 922)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("list",5e,1c,b3,47),::Type_obj::getClassName(::hx::ClassOf< ::haxe::ui::components::_DropDown::ListDropDownHandler >()));
            		}
HXLINE( 923)		{
HXLINE( 923)			::Dynamic this2 = ::haxe::ui::components::DropDownBuilder_obj::HANDLER_MAP;
HXDLIN( 923)			( ( ::haxe::ds::StringMap)(this2) )->set(HX_("date",2e,56,63,42),::Type_obj::getClassName(::hx::ClassOf< ::haxe::ui::components::CalendarDropDownHandler >()));
            		}
            	}

Dynamic DropDownBuilder_obj::__CreateEmpty() { return new DropDownBuilder_obj; }

void *DropDownBuilder_obj::_hx_vtable = 0;

Dynamic DropDownBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropDownBuilder_obj > _hx_result = new DropDownBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DropDownBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12e64056) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x12e64056;
		}
	} else {
		return inClassId==(int)0x69fc3099;
	}
}

::Dynamic DropDownBuilder_obj::get_handler(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_927_get_handler)
HXLINE( 928)		if (::hx::IsNull( this->_handler )) {
HXLINE( 929)			::Dynamic this1 = ::haxe::ui::components::DropDownBuilder_obj::HANDLER_MAP;
HXDLIN( 929)			::String handlerClass = ( ( ::haxe::ds::StringMap)(this1) )->get_string(this->_dropdown->get_type());
HXLINE( 930)			if (::hx::IsNull( handlerClass )) {
HXLINE( 931)				handlerClass = this->_dropdown->get_type();
            			}
HXLINE( 933)			::hx::Class _hx_tmp = ::Type_obj::resolveClass(handlerClass);
HXDLIN( 933)			this->_handler = ::Type_obj::createInstance(_hx_tmp,::cpp::VirtualArray_obj::__new(1)->init(0,this->_dropdown));
            		}
HXLINE( 936)		return this->_handler;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownBuilder_obj,get_handler,return )

void DropDownBuilder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_939_onReady)
HXLINE( 940)		this->super::onReady();
HXLINE( 941)		if (::hx::IsNull( this->_dropdown->get_text() )) {
HXLINE( 942)			::haxe::ui::components::IDropDownHandler_obj::applyDefault(this->get_handler());
            		}
            	}


void DropDownBuilder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_946_create)
HXLINE( 947)		this->_dropdown->set_toggle(true);
HXLINE( 948)		if (::hx::IsNull( this->_dropdown->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >() )) {
HXLINE( 949)			 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 949)			_hx_tmp->addComponent( ::haxe::ui::core::BasicItemRenderer_obj::__alloc( HX_CTX ));
            		}
            	}


void DropDownBuilder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_953_destroy)
HXLINE( 954)		 ::haxe::ui::components::DropDownEvents events = ::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_dropdown->_internalEvents);
HXLINE( 955)		events->hideDropDown();
HXLINE( 956)		if (::hx::IsNotNull( events->_wrapper )) {
HXLINE( 957)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(events->_wrapper,null());
HXLINE( 958)			events->_wrapper = null();
            		}
            	}


 ::haxe::ui::core::Component DropDownBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_962_addComponent)
HXLINE( 963)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 964)			 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 964)			_hx_tmp->set_itemRenderer(( ( ::haxe::ui::core::ItemRenderer)(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >()) ));
HXLINE( 965)			bool _hx_tmp1;
HXDLIN( 965)			if ((child->get_id() != HX_("dropdown-renderer",3f,3c,7f,af))) {
HXLINE( 965)				_hx_tmp1 = (child->get_id() == HX_("dropdownRenderer",74,ee,58,36));
            			}
            			else {
HXLINE( 965)				_hx_tmp1 = true;
            			}
HXDLIN( 965)			if (_hx_tmp1) {
HXLINE( 966)				return child;
            			}
            		}
HXLINE( 969)		return this->super::addComponent(child);
            	}


void DropDownBuilder_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_974_onThemeChanged)
HXDLIN( 974)		if (::hx::IsNotNull( this->_handler )) {
HXLINE( 975)			 ::haxe::ui::core::Screen _hx_tmp = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 975)			_hx_tmp->invalidateChildren(::haxe::ui::components::IDropDownHandler_obj::get_component(this->_handler),null());
HXLINE( 976)			 ::haxe::ui::core::Screen _hx_tmp1 = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 976)			_hx_tmp1->onThemeChangedChildren(::haxe::ui::components::IDropDownHandler_obj::get_component(this->_handler));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownBuilder_obj,onThemeChanged,(void))

 ::haxe::ds::StringMap DropDownBuilder_obj::HANDLER_MAP;


::hx::ObjectPtr< DropDownBuilder_obj > DropDownBuilder_obj::__new( ::haxe::ui::components::DropDown dropdown) {
	::hx::ObjectPtr< DropDownBuilder_obj > __this = new DropDownBuilder_obj();
	__this->__construct(dropdown);
	return __this;
}

::hx::ObjectPtr< DropDownBuilder_obj > DropDownBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown) {
	DropDownBuilder_obj *__this = (DropDownBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropDownBuilder_obj), true, "haxe.ui.components.DropDownBuilder"));
	*(void **)__this = DropDownBuilder_obj::_hx_vtable;
	__this->__construct(dropdown);
	return __this;
}

DropDownBuilder_obj::DropDownBuilder_obj()
{
}

void DropDownBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropDownBuilder);
	HX_MARK_MEMBER_NAME(_dropdown,"_dropdown");
	HX_MARK_MEMBER_NAME(_handler,"_handler");
	HX_MARK_MEMBER_NAME(handler,"handler");
	 ::haxe::ui::components::ButtonBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DropDownBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dropdown,"_dropdown");
	HX_VISIT_MEMBER_NAME(_handler,"_handler");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	 ::haxe::ui::components::ButtonBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DropDownBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_handler() : handler ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_handler") ) { return ::hx::Val( _handler ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { return ::hx::Val( _dropdown ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_handler") ) { return ::hx::Val( get_handler_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DropDownBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HANDLER_MAP") ) { outValue = ( HANDLER_MAP ); return true; }
	}
	return false;
}

::hx::Val DropDownBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_handler") ) { _handler=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { _dropdown=inValue.Cast<  ::haxe::ui::components::DropDown >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DropDownBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HANDLER_MAP") ) { HANDLER_MAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void DropDownBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dropdown",70,6b,c5,44));
	outFields->push(HX_("_handler",4b,09,8e,7f));
	outFields->push(HX_("handler",ca,af,d5,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropDownBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::DropDown */ ,(int)offsetof(DropDownBuilder_obj,_dropdown),HX_("_dropdown",70,6b,c5,44)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DropDownBuilder_obj,_handler),HX_("_handler",4b,09,8e,7f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DropDownBuilder_obj,handler),HX_("handler",ca,af,d5,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DropDownBuilder_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &DropDownBuilder_obj::HANDLER_MAP,HX_("HANDLER_MAP",27,8c,4b,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DropDownBuilder_obj_sMemberFields[] = {
	HX_("_dropdown",70,6b,c5,44),
	HX_("_handler",4b,09,8e,7f),
	HX_("handler",ca,af,d5,45),
	HX_("get_handler",e1,0f,d0,cb),
	HX_("onReady",c4,3e,f8,7c),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onThemeChanged",aa,7d,38,28),
	::String(null()) };

static void DropDownBuilder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropDownBuilder_obj::HANDLER_MAP,"HANDLER_MAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DropDownBuilder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropDownBuilder_obj::HANDLER_MAP,"HANDLER_MAP");
};

#endif

::hx::Class DropDownBuilder_obj::__mClass;

static ::String DropDownBuilder_obj_sStaticFields[] = {
	HX_("HANDLER_MAP",27,8c,4b,ed),
	::String(null())
};

void DropDownBuilder_obj::__register()
{
	DropDownBuilder_obj _hx_dummy;
	DropDownBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.DropDownBuilder",04,a9,c5,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DropDownBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &DropDownBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = DropDownBuilder_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DropDownBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropDownBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropDownBuilder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DropDownBuilder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDownBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDownBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DropDownBuilder_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_ff5df7ac87c4dee2_913_boot)
HXDLIN( 913)		HANDLER_MAP =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
