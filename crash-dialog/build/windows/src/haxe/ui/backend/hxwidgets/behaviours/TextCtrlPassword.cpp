#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TextCtrlPassword
#include <haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
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
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_TextCtrl
#include <hx/widgets/TextCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_TextCtrlStyle
#include <wx/widgets/styles/TextCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_50d10a76d2739927_9_new,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","new",0x4ce1a822,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.new","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",9,0x17c5cb8f)
HX_LOCAL_STACK_FRAME(_hx_pos_50d10a76d2739927_10_set,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","set",0x4ce57364,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.set","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",10,0x17c5cb8f)
HX_LOCAL_STACK_FRAME(_hx_pos_50d10a76d2739927_43_get,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","get",0x4cdc5858,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.get","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",43,0x17c5cb8f)
HX_LOCAL_STACK_FRAME(_hx_pos_50d10a76d2739927_51_copyMap,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","copyMap",0x350266a9,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.copyMap","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",51,0x17c5cb8f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TextCtrlPassword_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_50d10a76d2739927_9_new)
HXDLIN(   9)		super::__construct(component);
            	}

Dynamic TextCtrlPassword_obj::__CreateEmpty() { return new TextCtrlPassword_obj; }

void *TextCtrlPassword_obj::_hx_vtable = 0;

Dynamic TextCtrlPassword_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextCtrlPassword_obj > _hx_result = new TextCtrlPassword_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextCtrlPassword_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x22e9522e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x22e9522e;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x71b1e25d;
	}
}

void TextCtrlPassword_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_50d10a76d2739927_10_set)
HXLINE(  11)		this->super::set(value);
HXLINE(  12)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  13)			return;
            		}
HXLINE(  16)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  17)			return;
            		}
HXLINE(  20)		int style = 0;
HXLINE(  21)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true))) {
HXLINE(  22)			style = (style | ::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD);
            		}
HXLINE(  25)		 ::haxe::ds::StringMap eventMap = this->copyMap(this->_component->_eventMap);
HXLINE(  26)		{
HXLINE(  26)			 ::Dynamic k = eventMap->keys();
HXDLIN(  26)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  26)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  27)				 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  27)				_hx_tmp->unmapEvent(k1,eventMap->get(k1));
            			}
            		}
HXLINE(  30)		 ::hx::widgets::TextCtrl oldControl = ::hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->get_window());
HXLINE(  31)		 ::hx::widgets::Window newControl = oldControl->get_parent();
HXDLIN(  31)		 ::hx::widgets::TextCtrl newControl1 =  ::hx::widgets::TextCtrl_obj::__alloc( HX_CTX ,newControl,oldControl->get_value(),style,null());
HXLINE(  32)		int _hx_tmp = oldControl->get_position()->x;
HXDLIN(  32)		newControl1->move(_hx_tmp,oldControl->get_position()->y);
HXLINE(  33)		newControl1->set_size(oldControl->get_size());
HXLINE(  34)		oldControl->destroy();
HXLINE(  35)		this->_component->set_window(newControl1);
HXLINE(  36)		{
HXLINE(  36)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  36)			_this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(  36)			{
            			}
            		}
HXLINE(  38)		{
HXLINE(  38)			 ::Dynamic k1 = eventMap->keys();
HXDLIN(  38)			while(( (bool)(k1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  38)				::String k = ( (::String)(k1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  39)				 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  39)				_hx_tmp->mapEvent(k,eventMap->get(k));
            			}
            		}
            	}


 ::haxe::ui::util::VariantType TextCtrlPassword_obj::get(){
            	HX_STACKFRAME(&_hx_pos_50d10a76d2739927_43_get)
HXLINE(  44)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  45)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            		}
HXLINE(  48)		int _hx_tmp = this->_component->get_window()->get_windowStyle();
HXDLIN(  48)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(((_hx_tmp & ::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD) == ::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD));
            	}


 ::haxe::ds::StringMap TextCtrlPassword_obj::copyMap( ::haxe::ds::StringMap map){
            	HX_GC_STACKFRAME(&_hx_pos_50d10a76d2739927_51_copyMap)
HXLINE(  52)		 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  54)		{
HXLINE(  54)			 ::Dynamic k = map->keys();
HXDLIN(  54)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  54)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  55)				newMap->set(k1,map->get(k1));
            			}
            		}
HXLINE(  58)		return newMap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextCtrlPassword_obj,copyMap,return )


::hx::ObjectPtr< TextCtrlPassword_obj > TextCtrlPassword_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextCtrlPassword_obj > __this = new TextCtrlPassword_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextCtrlPassword_obj > TextCtrlPassword_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextCtrlPassword_obj *__this = (TextCtrlPassword_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlPassword_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword"));
	*(void **)__this = TextCtrlPassword_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextCtrlPassword_obj::TextCtrlPassword_obj()
{
}

::hx::Val TextCtrlPassword_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"copyMap") ) { return ::hx::Val( copyMap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextCtrlPassword_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextCtrlPassword_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrlPassword_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("copyMap",e7,85,80,43),
	::String(null()) };

::hx::Class TextCtrlPassword_obj::__mClass;

void TextCtrlPassword_obj::__register()
{
	TextCtrlPassword_obj _hx_dummy;
	TextCtrlPassword_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword",30,af,66,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextCtrlPassword_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextCtrlPassword_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrlPassword_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrlPassword_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
