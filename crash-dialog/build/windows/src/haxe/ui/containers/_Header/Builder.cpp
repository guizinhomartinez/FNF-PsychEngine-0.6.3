#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Header_Builder
#include <haxe/ui/containers/_Header/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_SortEvent
#include <haxe/ui/events/SortEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_209c43d2fa3b9857_22_new,"haxe.ui.containers._Header.Builder","new",0x9c90a181,"haxe.ui.containers._Header.Builder.new","haxe/ui/containers/Header.hx",22,0x99daae66)
HX_LOCAL_STACK_FRAME(_hx_pos_209c43d2fa3b9857_27_addComponent,"haxe.ui.containers._Header.Builder","addComponent",0xa062951b,"haxe.ui.containers._Header.Builder.addComponent","haxe/ui/containers/Header.hx",27,0x99daae66)
HX_LOCAL_STACK_FRAME(_hx_pos_209c43d2fa3b9857_32_addComponentAt,"haxe.ui.containers._Header.Builder","addComponentAt",0x6e068aee,"haxe.ui.containers._Header.Builder.addComponentAt","haxe/ui/containers/Header.hx",32,0x99daae66)
HX_LOCAL_STACK_FRAME(_hx_pos_209c43d2fa3b9857_37_addEventListeners,"haxe.ui.containers._Header.Builder","addEventListeners",0xf53e70e7,"haxe.ui.containers._Header.Builder.addEventListeners","haxe/ui/containers/Header.hx",37,0x99daae66)
HX_LOCAL_STACK_FRAME(_hx_pos_209c43d2fa3b9857_47_onSortChanged,"haxe.ui.containers._Header.Builder","onSortChanged",0x0d107ab8,"haxe.ui.containers._Header.Builder.onSortChanged","haxe/ui/containers/Header.hx",47,0x99daae66)
namespace haxe{
namespace ui{
namespace containers{
namespace _Header{

void Builder_obj::__construct( ::haxe::ui::containers::Header header){
            	HX_STACKFRAME(&_hx_pos_209c43d2fa3b9857_22_new)
HXLINE(  23)		super::__construct(header);
HXLINE(  24)		this->_header = header;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x12059ec3;
	}
}

 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_209c43d2fa3b9857_27_addComponent)
HXLINE(  28)		this->addEventListeners(child);
HXLINE(  29)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_209c43d2fa3b9857_32_addComponentAt)
HXLINE(  33)		this->addEventListeners(child);
HXLINE(  34)		return null();
            	}


void Builder_obj::addEventListeners( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_209c43d2fa3b9857_37_addEventListeners)
HXLINE(  38)		if (!(::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::components::Column >()))) {
HXLINE(  39)			return;
            		}
HXLINE(  42)		 ::haxe::ui::components::Column column = ::hx::TCast<  ::haxe::ui::components::Column >::cast(c);
HXLINE(  43)		column->registerEvent(HX_("sortchanged",56,51,5d,eb),this->onSortChanged_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,addEventListeners,(void))

void Builder_obj::onSortChanged( ::haxe::ui::events::SortEvent e){
            	HX_STACKFRAME(&_hx_pos_209c43d2fa3b9857_47_onSortChanged)
HXDLIN(  47)		int _g = 0;
HXDLIN(  47)		 ::haxe::ui::containers::Header _this = this->_header;
HXDLIN(  47)		::Array< ::Dynamic> _g1;
HXDLIN(  47)		if (::hx::IsNull( _this->_children )) {
HXDLIN(  47)			_g1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXDLIN(  47)			_g1 = _this->_children;
            		}
HXDLIN(  47)		while((_g < _g1->length)){
HXDLIN(  47)			 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  47)			_g = (_g + 1);
HXLINE(  48)			if (::hx::IsInstanceEq( e->target,c )) {
HXLINE(  49)				this->_header->dispatch(e);
            			}
            			else {
HXLINE(  51)				::hx::TCast<  ::haxe::ui::components::Column >::cast(c)->set_sortDirection(null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onSortChanged,(void))


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::Header header) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(header);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Header header) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._Header.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(header);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_header,"_header");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_header,"_header");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { return ::hx::Val( _header ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onSortChanged") ) { return ::hx::Val( onSortChanged_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addEventListeners") ) { return ::hx::Val( addEventListeners_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast<  ::haxe::ui::containers::Header >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_header",2c,1b,77,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::Header */ ,(int)offsetof(Builder_obj,_header),HX_("_header",2c,1b,77,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_header",2c,1b,77,6b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("addEventListeners",06,48,26,46),
	HX_("onSortChanged",57,96,98,1b),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._Header.Builder",0f,cd,67,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _Header
