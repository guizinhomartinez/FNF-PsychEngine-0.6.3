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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TextCtrlWordWrap
#include <haxe/ui/backend/hxwidgets/behaviours/TextCtrlWordWrap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_eb0e0e3f322ec97e_10_new,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap","new",0x7c07da3b,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap.new","haxe/ui/backend/hxwidgets/behaviours/TextCtrlWordWrap.hx",10,0x33891f96)
HX_LOCAL_STACK_FRAME(_hx_pos_eb0e0e3f322ec97e_11_set,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap","set",0x7c0ba57d,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap.set","haxe/ui/backend/hxwidgets/behaviours/TextCtrlWordWrap.hx",11,0x33891f96)
HX_LOCAL_STACK_FRAME(_hx_pos_eb0e0e3f322ec97e_44_get,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap","get",0x7c028a71,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap.get","haxe/ui/backend/hxwidgets/behaviours/TextCtrlWordWrap.hx",44,0x33891f96)
HX_LOCAL_STACK_FRAME(_hx_pos_eb0e0e3f322ec97e_52_copyMap,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap","copyMap",0x5d2e1942,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap.copyMap","haxe/ui/backend/hxwidgets/behaviours/TextCtrlWordWrap.hx",52,0x33891f96)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TextCtrlWordWrap_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_eb0e0e3f322ec97e_10_new)
HXDLIN(  10)		super::__construct(component);
            	}

Dynamic TextCtrlWordWrap_obj::__CreateEmpty() { return new TextCtrlWordWrap_obj; }

void *TextCtrlWordWrap_obj::_hx_vtable = 0;

Dynamic TextCtrlWordWrap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextCtrlWordWrap_obj > _hx_result = new TextCtrlWordWrap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextCtrlWordWrap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x69b2808f) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x69b2808f;
		}
	} else {
		return inClassId==(int)0x71b1e25d;
	}
}

void TextCtrlWordWrap_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_eb0e0e3f322ec97e_11_set)
HXLINE(  12)		this->super::set(value);
HXLINE(  13)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  18)			return;
            		}
HXLINE(  21)		int style = (::wx::widgets::styles::TextCtrlStyle_obj::MULTILINE | ::wx::widgets::styles::TextCtrlStyle_obj::HSCROLL);
HXLINE(  22)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true))) {
HXLINE(  23)			style = ::wx::widgets::styles::TextCtrlStyle_obj::MULTILINE;
            		}
HXLINE(  26)		 ::haxe::ds::StringMap eventMap = this->copyMap(this->_component->_eventMap);
HXLINE(  27)		{
HXLINE(  27)			 ::Dynamic k = eventMap->keys();
HXDLIN(  27)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  27)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  28)				 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  28)				_hx_tmp->unmapEvent(k1,eventMap->get(k1));
            			}
            		}
HXLINE(  31)		 ::hx::widgets::TextCtrl oldControl = ::hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->get_window());
HXLINE(  32)		 ::hx::widgets::Window newControl = oldControl->get_parent();
HXDLIN(  32)		 ::hx::widgets::TextCtrl newControl1 =  ::hx::widgets::TextCtrl_obj::__alloc( HX_CTX ,newControl,oldControl->get_value(),style,null());
HXLINE(  33)		int _hx_tmp = oldControl->get_position()->x;
HXDLIN(  33)		newControl1->move(_hx_tmp,oldControl->get_position()->y);
HXLINE(  34)		newControl1->set_size(oldControl->get_size());
HXLINE(  35)		oldControl->destroy();
HXLINE(  36)		this->_component->set_window(newControl1);
HXLINE(  37)		{
HXLINE(  37)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  37)			_this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(  37)			{
            			}
            		}
HXLINE(  39)		{
HXLINE(  39)			 ::Dynamic k1 = eventMap->keys();
HXDLIN(  39)			while(( (bool)(k1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  39)				::String k = ( (::String)(k1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  40)				 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  40)				_hx_tmp->mapEvent(k,eventMap->get(k));
            			}
            		}
            	}


 ::haxe::ui::util::VariantType TextCtrlWordWrap_obj::get(){
            	HX_STACKFRAME(&_hx_pos_eb0e0e3f322ec97e_44_get)
HXLINE(  45)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  46)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            		}
HXLINE(  49)		int _hx_tmp = this->_component->get_window()->get_windowStyle();
HXDLIN(  49)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(((_hx_tmp & ::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD) == ::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD));
            	}


 ::haxe::ds::StringMap TextCtrlWordWrap_obj::copyMap( ::haxe::ds::StringMap map){
            	HX_GC_STACKFRAME(&_hx_pos_eb0e0e3f322ec97e_52_copyMap)
HXLINE(  53)		 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  55)		{
HXLINE(  55)			 ::Dynamic k = map->keys();
HXDLIN(  55)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  55)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  56)				newMap->set(k1,map->get(k1));
            			}
            		}
HXLINE(  59)		return newMap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextCtrlWordWrap_obj,copyMap,return )


::hx::ObjectPtr< TextCtrlWordWrap_obj > TextCtrlWordWrap_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextCtrlWordWrap_obj > __this = new TextCtrlWordWrap_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextCtrlWordWrap_obj > TextCtrlWordWrap_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextCtrlWordWrap_obj *__this = (TextCtrlWordWrap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlWordWrap_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap"));
	*(void **)__this = TextCtrlWordWrap_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextCtrlWordWrap_obj::TextCtrlWordWrap_obj()
{
}

::hx::Val TextCtrlWordWrap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *TextCtrlWordWrap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextCtrlWordWrap_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrlWordWrap_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("copyMap",e7,85,80,43),
	::String(null()) };

::hx::Class TextCtrlWordWrap_obj::__mClass;

void TextCtrlWordWrap_obj::__register()
{
	TextCtrlWordWrap_obj _hx_dummy;
	TextCtrlWordWrap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap",c9,a0,71,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextCtrlWordWrap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextCtrlWordWrap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrlWordWrap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrlWordWrap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
