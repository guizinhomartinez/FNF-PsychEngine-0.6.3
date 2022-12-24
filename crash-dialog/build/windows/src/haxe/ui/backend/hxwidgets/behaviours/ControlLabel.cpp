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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlLabel
#include <haxe/ui/backend/hxwidgets/behaviours/ControlLabel.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_eaf2ed8d718df123_12_new,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","new",0x100495c6,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.new","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",12,0x0dcc09eb)
HX_LOCAL_STACK_FRAME(_hx_pos_eaf2ed8d718df123_13_get,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","get",0x0fff45fc,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.get","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",13,0x0dcc09eb)
HX_LOCAL_STACK_FRAME(_hx_pos_eaf2ed8d718df123_26_validateData,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","validateData",0xfc9db3ba,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.validateData","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",26,0x0dcc09eb)
HX_LOCAL_STACK_FRAME(_hx_pos_eaf2ed8d718df123_38_normalizeText,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","normalizeText",0x0e333bc0,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.normalizeText","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",38,0x0dcc09eb)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlLabel_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_12_new)
HXDLIN(  12)		super::__construct(component);
            	}

Dynamic ControlLabel_obj::__CreateEmpty() { return new ControlLabel_obj; }

void *ControlLabel_obj::_hx_vtable = 0;

Dynamic ControlLabel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlLabel_obj > _hx_result = new ControlLabel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlLabel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6d59e336 || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType ControlLabel_obj::get(){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_13_get)
HXLINE(  14)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  15)			return null();
            		}
HXLINE(  17)		 ::hx::widgets::Control ctrl = ::hx::TCast<  ::hx::widgets::Control >::cast(this->_component->get_window());
HXLINE(  18)		::String label = ctrl->get_label();
HXLINE(  19)		if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::TextCtrl >())) {
HXLINE(  20)			label = ::hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->get_window())->get_value();
            		}
HXLINE(  23)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(label);
            	}


void ControlLabel_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_26_validateData)
HXLINE(  27)		 ::hx::widgets::Control ctrl = ::hx::TCast<  ::hx::widgets::Control >::cast(this->_component->get_window());
HXLINE(  28)		if (::hx::IsNotNull( this->_value )) {
HXLINE(  29)			 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  29)			_hx_tmp->set(HX_("originalLabel",e3,03,a0,ca),::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
HXLINE(  30)			::String s = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
HXDLIN(  30)			s = ::StringTools_obj::replace(s,HX_("\\n",92,50,00,00),HX_("\r\n",5d,0b,00,00));
HXDLIN(  30)			ctrl->set_label(s);
HXLINE(  31)			{
HXLINE(  31)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  31)				bool _hx_tmp1;
HXDLIN(  31)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  31)					_hx_tmp1 = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(  31)					_hx_tmp1 = true;
            				}
HXDLIN(  31)				if (!(_hx_tmp1)) {
HXLINE(  31)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(  32)			{
HXLINE(  32)				 ::haxe::ui::core::Component _this1 = this->_component;
HXDLIN(  32)				_this1->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(  32)				{
            				}
            			}
            		}
            		else {
HXLINE(  34)			this->_component->set(HX_("originalLabel",e3,03,a0,ca),null());
            		}
            	}


::String ControlLabel_obj::normalizeText(::String s){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_38_normalizeText)
HXLINE(  39)		s = ::StringTools_obj::replace(s,HX_("\\n",92,50,00,00),HX_("\r\n",5d,0b,00,00));
HXLINE(  40)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlLabel_obj,normalizeText,return )


::hx::ObjectPtr< ControlLabel_obj > ControlLabel_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ControlLabel_obj > __this = new ControlLabel_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ControlLabel_obj > ControlLabel_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlLabel_obj *__this = (ControlLabel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlLabel_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlLabel"));
	*(void **)__this = ControlLabel_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlLabel_obj::ControlLabel_obj()
{
}

::hx::Val ControlLabel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ControlLabel_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlLabel_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlLabel_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	HX_("normalizeText",da,7a,5b,01),
	::String(null()) };

::hx::Class ControlLabel_obj::__mClass;

void ControlLabel_obj::__register()
{
	ControlLabel_obj _hx_dummy;
	ControlLabel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlLabel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlLabel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlLabel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlLabel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
