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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_RemoveTab
#include <haxe/ui/components/_TabBar/RemoveTab.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_afe0ed77044d5153_218_new,"haxe.ui.components._TabBar.RemoveTab","new",0xcf0fc78c,"haxe.ui.components._TabBar.RemoveTab.new","haxe/ui/components/TabBar.hx",218,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_afe0ed77044d5153_219_call,"haxe.ui.components._TabBar.RemoveTab","call",0x577667f2,"haxe.ui.components._TabBar.RemoveTab.call","haxe/ui/components/TabBar.hx",219,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void RemoveTab_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_afe0ed77044d5153_218_new)
HXDLIN( 218)		super::__construct(component);
            	}

Dynamic RemoveTab_obj::__CreateEmpty() { return new RemoveTab_obj; }

void *RemoveTab_obj::_hx_vtable = 0;

Dynamic RemoveTab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RemoveTab_obj > _hx_result = new RemoveTab_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemoveTab_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1bfbf668) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1bfbf668;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType RemoveTab_obj::call( ::Dynamic param){
            	HX_GC_STACKFRAME(&_hx_pos_afe0ed77044d5153_219_call)
HXLINE( 220)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 221)		int index = ( (int)(param) );
HXLINE( 222)		 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 222)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 222)		if (::hx::IsNull( _this->_children )) {
HXLINE( 222)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 222)			_hx_tmp = _this->_children;
            		}
HXDLIN( 222)		if ((index < _hx_tmp->length)) {
HXLINE( 223)			int selectedIndex = ::hx::TCast<  ::haxe::ui::components::TabBar >::cast(this->_component)->get_selectedIndex();
HXLINE( 224)			int newSelectedIndex = selectedIndex;
HXLINE( 225)			if ((index < selectedIndex)) {
HXLINE( 226)				newSelectedIndex = (newSelectedIndex - 1);
            			}
            			else {
HXLINE( 227)				if ((index == selectedIndex)) {
HXLINE( 228)					::hx::TCast<  ::haxe::ui::components::TabBar >::cast(this->_component)->set_selectedIndex(-1);
HXLINE( 229)					newSelectedIndex = selectedIndex;
HXLINE( 230)					 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 230)					::Array< ::Dynamic> _hx_tmp;
HXDLIN( 230)					if (::hx::IsNull( _this->_children )) {
HXLINE( 230)						_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 230)						_hx_tmp = _this->_children;
            					}
HXDLIN( 230)					if ((newSelectedIndex > (_hx_tmp->length - 2))) {
HXLINE( 231)						 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 231)						::Array< ::Dynamic> newSelectedIndex1;
HXDLIN( 231)						if (::hx::IsNull( _this->_children )) {
HXLINE( 231)							newSelectedIndex1 = ::Array_obj< ::Dynamic>::__new(0);
            						}
            						else {
HXLINE( 231)							newSelectedIndex1 = _this->_children;
            						}
HXDLIN( 231)						newSelectedIndex = (newSelectedIndex1->length - 2);
            					}
            				}
            			}
HXLINE( 235)			builder->_container->removeComponentAt(index,null(),null());
HXLINE( 236)			 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 236)			_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),null(),index));
HXLINE( 238)			::hx::TCast<  ::haxe::ui::components::TabBar >::cast(this->_component)->set_selectedIndex(newSelectedIndex);
            		}
HXLINE( 240)		return null();
            	}



::hx::ObjectPtr< RemoveTab_obj > RemoveTab_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RemoveTab_obj > __this = new RemoveTab_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RemoveTab_obj > RemoveTab_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RemoveTab_obj *__this = (RemoveTab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RemoveTab_obj), true, "haxe.ui.components._TabBar.RemoveTab"));
	*(void **)__this = RemoveTab_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RemoveTab_obj::RemoveTab_obj()
{
}

::hx::Val RemoveTab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RemoveTab_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RemoveTab_obj_sStaticStorageInfo = 0;
#endif

static ::String RemoveTab_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class RemoveTab_obj::__mClass;

void RemoveTab_obj::__register()
{
	RemoveTab_obj _hx_dummy;
	RemoveTab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.RemoveTab",9a,51,a2,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RemoveTab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RemoveTab_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemoveTab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemoveTab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
