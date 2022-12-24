#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ToolTipBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/ToolTipBehaviour.h>
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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_adc055e5aa42da21_6_new,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour","new",0x9f02cd49,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour.new","haxe/ui/backend/hxwidgets/behaviours/ToolTipBehaviour.hx",6,0x5621c848)
HX_LOCAL_STACK_FRAME(_hx_pos_adc055e5aa42da21_8_validateData,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour","validateData",0x03bbf3d7,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour.validateData","haxe/ui/backend/hxwidgets/behaviours/ToolTipBehaviour.hx",8,0x5621c848)
HX_LOCAL_STACK_FRAME(_hx_pos_adc055e5aa42da21_16_setDynamic,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour","setDynamic",0xf3472634,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour.setDynamic","haxe/ui/backend/hxwidgets/behaviours/ToolTipBehaviour.hx",16,0x5621c848)
HX_LOCAL_STACK_FRAME(_hx_pos_adc055e5aa42da21_31_update,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour","update",0xf4dec0c0,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour.update","haxe/ui/backend/hxwidgets/behaviours/ToolTipBehaviour.hx",31,0x5621c848)
HX_LOCAL_STACK_FRAME(_hx_pos_adc055e5aa42da21_37_getDynamic,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour","getDynamic",0xefc987c0,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour.getDynamic","haxe/ui/backend/hxwidgets/behaviours/ToolTipBehaviour.hx",37,0x5621c848)
HX_LOCAL_STACK_FRAME(_hx_pos_adc055e5aa42da21_44_extractTip,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour","extractTip",0xae7dc4d1,"haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour.extractTip","haxe/ui/backend/hxwidgets/behaviours/ToolTipBehaviour.hx",44,0x5621c848)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ToolTipBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_adc055e5aa42da21_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic ToolTipBehaviour_obj::__CreateEmpty() { return new ToolTipBehaviour_obj; }

void *ToolTipBehaviour_obj::_hx_vtable = 0;

Dynamic ToolTipBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToolTipBehaviour_obj > _hx_result = new ToolTipBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ToolTipBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x4f767301 || inClassId==(int)0x7e17fa9f;
	}
}

void ToolTipBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_adc055e5aa42da21_8_validateData)
HXDLIN(   8)		bool _hx_tmp;
HXDLIN(   8)		if (::hx::IsNotNull( this->_value )) {
HXDLIN(   8)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXDLIN(   8)			_hx_tmp = true;
            		}
HXDLIN(   8)		if (_hx_tmp) {
HXLINE(   9)			this->_component->get_window()->set_toolTip(null());
            		}
            		else {
HXLINE(  11)			 ::hx::widgets::Window _hx_tmp = this->_component->get_window();
HXDLIN(  11)			_hx_tmp->set_toolTip(this->extractTip(::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->_value)));
            		}
            	}


void ToolTipBehaviour_obj::setDynamic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_adc055e5aa42da21_16_setDynamic)
HXLINE(  17)		if (::hx::IsEq( this->_cachedValue,value )) {
HXLINE(  18)			return;
            		}
HXLINE(  20)		this->_cachedValue = value;
HXLINE(  21)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  22)			return;
            		}
HXLINE(  24)		if (::hx::IsNull( value )) {
HXLINE(  25)			this->_component->get_window()->set_toolTip(null());
            		}
            		else {
HXLINE(  27)			 ::hx::widgets::Window _hx_tmp = this->_component->get_window();
HXDLIN(  27)			_hx_tmp->set_toolTip(this->extractTip(value));
            		}
            	}


void ToolTipBehaviour_obj::update(){
            	HX_STACKFRAME(&_hx_pos_adc055e5aa42da21_31_update)
HXLINE(  32)		 ::Dynamic t = this->_cachedValue;
HXLINE(  33)		this->_cachedValue = null();
HXLINE(  34)		this->setDynamic(t);
            	}


 ::Dynamic ToolTipBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_adc055e5aa42da21_37_getDynamic)
HXLINE(  38)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  39)			return null();
            		}
HXLINE(  41)		return this->_component->get_window()->get_toolTip();
            	}


::String ToolTipBehaviour_obj::extractTip( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_adc055e5aa42da21_44_extractTip)
HXLINE(  45)		::String s = ( (::String)(value) );
HXLINE(  46)		if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(value),::ValueType_obj::TObject_dyn() )) {
HXLINE(  47)			if (::hx::IsNotNull( value->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) )) {
HXLINE(  48)				s = ( (::String)(value->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
            			}
            			else {
HXLINE(  49)				if (::hx::IsNotNull( value->__Field(HX_("tooltip",03,ad,8c,6a),::hx::paccDynamic) )) {
HXLINE(  50)					s = ( (::String)(value->__Field(HX_("tooltip",03,ad,8c,6a),::hx::paccDynamic)) );
            				}
            			}
            		}
HXLINE(  53)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipBehaviour_obj,extractTip,return )


::hx::ObjectPtr< ToolTipBehaviour_obj > ToolTipBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ToolTipBehaviour_obj > __this = new ToolTipBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ToolTipBehaviour_obj > ToolTipBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ToolTipBehaviour_obj *__this = (ToolTipBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToolTipBehaviour_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour"));
	*(void **)__this = ToolTipBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ToolTipBehaviour_obj::ToolTipBehaviour_obj()
{
}

void ToolTipBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolTipBehaviour);
	HX_MARK_MEMBER_NAME(_cachedValue,"_cachedValue");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ToolTipBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cachedValue,"_cachedValue");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ToolTipBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"extractTip") ) { return ::hx::Val( extractTip_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"_cachedValue") ) { return ::hx::Val( _cachedValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ToolTipBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedValue") ) { _cachedValue=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToolTipBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_cachedValue",30,6a,ac,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ToolTipBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ToolTipBehaviour_obj,_cachedValue),HX_("_cachedValue",30,6a,ac,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ToolTipBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ToolTipBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("_cachedValue",30,6a,ac,10),
	HX_("setDynamic",fd,c3,f4,88),
	HX_("update",09,86,05,87),
	HX_("getDynamic",89,25,77,85),
	HX_("extractTip",9a,62,2b,44),
	::String(null()) };

::hx::Class ToolTipBehaviour_obj::__mClass;

void ToolTipBehaviour_obj::__register()
{
	ToolTipBehaviour_obj _hx_dummy;
	ToolTipBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToolTipBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToolTipBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolTipBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolTipBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
