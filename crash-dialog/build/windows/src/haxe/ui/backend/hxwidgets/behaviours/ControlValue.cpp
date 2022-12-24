#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlValue
#include <haxe/ui/backend/hxwidgets/behaviours/ControlValue.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_hx_widgets_CheckBox
#include <hx/widgets/CheckBox.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Gauge
#include <hx/widgets/Gauge.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_RadioButton
#include <hx/widgets/RadioButton.h>
#endif
#ifndef INCLUDED_hx_widgets_ScrollBar
#include <hx/widgets/ScrollBar.h>
#endif
#ifndef INCLUDED_hx_widgets_Slider
#include <hx/widgets/Slider.h>
#endif
#ifndef INCLUDED_hx_widgets_SpinCtrl
#include <hx/widgets/SpinCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_TextCtrl
#include <hx/widgets/TextCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif
#ifndef INCLUDED_hx_widgets_ToggleButton
#include <hx/widgets/ToggleButton.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a478d00b812ad3c_16_new,"haxe.ui.backend.hxwidgets.behaviours.ControlValue","new",0x4b3109c3,"haxe.ui.backend.hxwidgets.behaviours.ControlValue.new","haxe/ui/backend/hxwidgets/behaviours/ControlValue.hx",16,0x7b1ee48e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a478d00b812ad3c_18_validateData,"haxe.ui.backend.hxwidgets.behaviours.ControlValue","validateData",0x7963581d,"haxe.ui.backend.hxwidgets.behaviours.ControlValue.validateData","haxe/ui/backend/hxwidgets/behaviours/ControlValue.hx",18,0x7b1ee48e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a478d00b812ad3c_38_get,"haxe.ui.backend.hxwidgets.behaviours.ControlValue","get",0x4b2bb9f9,"haxe.ui.backend.hxwidgets.behaviours.ControlValue.get","haxe/ui/backend/hxwidgets/behaviours/ControlValue.hx",38,0x7b1ee48e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a478d00b812ad3c_58_normalizeText,"haxe.ui.backend.hxwidgets.behaviours.ControlValue","normalizeText",0xbe5d6dfd,"haxe.ui.backend.hxwidgets.behaviours.ControlValue.normalizeText","haxe/ui/backend/hxwidgets/behaviours/ControlValue.hx",58,0x7b1ee48e)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlValue_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4a478d00b812ad3c_16_new)
HXDLIN(  16)		super::__construct(component);
            	}

Dynamic ControlValue_obj::__CreateEmpty() { return new ControlValue_obj; }

void *ControlValue_obj::_hx_vtable = 0;

Dynamic ControlValue_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlValue_obj > _hx_result = new ControlValue_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlValue_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x2f6354b3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2f6354b3;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ControlValue_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_4a478d00b812ad3c_18_validateData)
HXDLIN(  18)		if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Gauge >())) {
HXLINE(  19)			 ::hx::widgets::Gauge _hx_tmp = ::hx::TCast<  ::hx::widgets::Gauge >::cast(this->_component->get_window());
HXDLIN(  19)			_hx_tmp->set_value(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            		}
            		else {
HXLINE(  20)			if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  21)				 ::hx::widgets::Slider _hx_tmp = ::hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->get_window());
HXDLIN(  21)				_hx_tmp->set_value(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            			}
            			else {
HXLINE(  22)				if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::ScrollBar >())) {
HXLINE(  23)					 ::hx::widgets::ScrollBar scroll = ::hx::TCast<  ::hx::widgets::ScrollBar >::cast(this->_component->get_window());
HXLINE(  24)					int _hx_tmp = ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) );
HXDLIN(  24)					int _hx_tmp1 = scroll->get_thumbSize();
HXDLIN(  24)					int _hx_tmp2 = scroll->get_range();
HXDLIN(  24)					scroll->setScrollbar(_hx_tmp,_hx_tmp1,_hx_tmp2,scroll->get_pageSize());
            				}
            				else {
HXLINE(  25)					if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::CheckBox >())) {
HXLINE(  26)						 ::hx::widgets::CheckBox _hx_tmp = ::hx::TCast<  ::hx::widgets::CheckBox >::cast(this->_component->get_window());
HXDLIN(  26)						_hx_tmp->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value));
            					}
            					else {
HXLINE(  27)						if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::RadioButton >())) {
HXLINE(  28)							 ::hx::widgets::RadioButton _hx_tmp = ::hx::TCast<  ::hx::widgets::RadioButton >::cast(this->_component->get_window());
HXDLIN(  28)							_hx_tmp->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value));
            						}
            						else {
HXLINE(  29)							if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::ToggleButton >())) {
HXLINE(  30)								 ::hx::widgets::ToggleButton _hx_tmp = ::hx::TCast<  ::hx::widgets::ToggleButton >::cast(this->_component->get_window());
HXDLIN(  30)								_hx_tmp->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value));
            							}
            							else {
HXLINE(  31)								if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::TextCtrl >())) {
HXLINE(  32)									 ::hx::widgets::TextCtrl _hx_tmp = ::hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->get_window());
HXDLIN(  32)									::String s = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
HXDLIN(  32)									s = ::StringTools_obj::replace(s,HX_("\\n",92,50,00,00),HX_("\r\n",5d,0b,00,00));
HXDLIN(  32)									_hx_tmp->set_value(s);
            								}
            								else {
HXLINE(  33)									if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::SpinCtrl >())) {
HXLINE(  34)										 ::hx::widgets::SpinCtrl _hx_tmp = ::hx::TCast<  ::hx::widgets::SpinCtrl >::cast(this->_component->get_window());
HXDLIN(  34)										_hx_tmp->set_value(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


 ::haxe::ui::util::VariantType ControlValue_obj::get(){
            	HX_STACKFRAME(&_hx_pos_4a478d00b812ad3c_38_get)
HXLINE(  39)		 ::haxe::ui::util::VariantType v = null();
HXLINE(  40)		if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Gauge >())) {
HXLINE(  41)			v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(::hx::TCast<  ::hx::widgets::Gauge >::cast(this->_component->get_window())->get_value());
            		}
            		else {
HXLINE(  42)			if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  43)				v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(::hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->get_window())->get_value());
            			}
            			else {
HXLINE(  44)				if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::CheckBox >())) {
HXLINE(  45)					v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(::hx::TCast<  ::hx::widgets::CheckBox >::cast(this->_component->get_window())->get_value());
            				}
            				else {
HXLINE(  46)					if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::RadioButton >())) {
HXLINE(  47)						v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(::hx::TCast<  ::hx::widgets::RadioButton >::cast(this->_component->get_window())->get_value());
            					}
            					else {
HXLINE(  48)						if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::ToggleButton >())) {
HXLINE(  49)							v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(::hx::TCast<  ::hx::widgets::ToggleButton >::cast(this->_component->get_window())->get_value());
            						}
            						else {
HXLINE(  50)							if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::TextCtrl >())) {
HXLINE(  51)								v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(::hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->get_window())->get_value());
            							}
            							else {
HXLINE(  52)								if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::SpinCtrl >())) {
HXLINE(  53)									v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(::hx::TCast<  ::hx::widgets::SpinCtrl >::cast(this->_component->get_window())->get_value());
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  55)		return v;
            	}


::String ControlValue_obj::normalizeText(::String s){
            	HX_STACKFRAME(&_hx_pos_4a478d00b812ad3c_58_normalizeText)
HXLINE(  59)		s = ::StringTools_obj::replace(s,HX_("\\n",92,50,00,00),HX_("\r\n",5d,0b,00,00));
HXLINE(  60)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlValue_obj,normalizeText,return )


::hx::ObjectPtr< ControlValue_obj > ControlValue_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ControlValue_obj > __this = new ControlValue_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ControlValue_obj > ControlValue_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlValue_obj *__this = (ControlValue_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlValue_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlValue"));
	*(void **)__this = ControlValue_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlValue_obj::ControlValue_obj()
{
}

::hx::Val ControlValue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalizeText") ) { return ::hx::Val( normalizeText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ControlValue_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlValue_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlValue_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("get",96,80,4e,00),
	HX_("normalizeText",da,7a,5b,01),
	::String(null()) };

::hx::Class ControlValue_obj::__mClass;

void ControlValue_obj::__register()
{
	ControlValue_obj _hx_dummy;
	ControlValue_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlValue_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlValue_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlValue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlValue_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
