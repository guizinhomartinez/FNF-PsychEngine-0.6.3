#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
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
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_RestrictCharsBehaviour
#include <haxe/ui/components/_TextField/RestrictCharsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldHelper
#include <haxe/ui/components/_TextField/TextFieldHelper.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_53171ec1428773df_183_new,"haxe.ui.components._TextField.RestrictCharsBehaviour","new",0x868416c8,"haxe.ui.components._TextField.RestrictCharsBehaviour.new","haxe/ui/components/TextField.hx",183,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_53171ec1428773df_190_validateData,"haxe.ui.components._TextField.RestrictCharsBehaviour","validateData",0x453b0278,"haxe.ui.components._TextField.RestrictCharsBehaviour.validateData","haxe/ui/components/TextField.hx",190,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_53171ec1428773df_186_validateData,"haxe.ui.components._TextField.RestrictCharsBehaviour","validateData",0x453b0278,"haxe.ui.components._TextField.RestrictCharsBehaviour.validateData","haxe/ui/components/TextField.hx",186,0x9dfe9498)
static const ::String _hx_array_data_0cf752d6_3[] = {
	HX_("",00,00,00,00),
};
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void RestrictCharsBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_53171ec1428773df_183_new)
HXDLIN( 183)		super::__construct(component);
            	}

Dynamic RestrictCharsBehaviour_obj::__CreateEmpty() { return new RestrictCharsBehaviour_obj; }

void *RestrictCharsBehaviour_obj::_hx_vtable = 0;

Dynamic RestrictCharsBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RestrictCharsBehaviour_obj > _hx_result = new RestrictCharsBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RestrictCharsBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x3fb83fda || inClassId==(int)0x7e17fa9f;
	}
}

void RestrictCharsBehaviour_obj::validateData(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,excludeChars) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_GC_STACKFRAME(&_hx_pos_53171ec1428773df_190_validateData)
HXLINE( 191)			::Array< ::String > excludeChars1 = excludeChars;
HXDLIN( 191)			int includeChars = 0;
HXDLIN( 191)			::String excludeChars2 = excludeChars1->__get(includeChars);
HXDLIN( 191)			excludeChars1[includeChars] = (excludeChars2 + ereg->matched(1));
HXLINE( 192)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_53171ec1428773df_186_validateData)
HXLINE( 187)		 ::EReg excludeEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\^(.-.|.)",ee,f5,da,ba),HX_("gu",2e,5a,00,00));
HXLINE( 188)		::Array< ::String > excludeChars = ::Array_obj< ::String >::fromData( _hx_array_data_0cf752d6_3,1);
HXLINE( 190)		::String includeChars = excludeEReg->map(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value), ::Dynamic(new _hx_Closure_0(excludeChars)));
HXLINE( 195)		::Array< ::String > testRegexpParts = ::Array_obj< ::String >::__new(0);
HXLINE( 197)		if ((includeChars.length > 0)) {
HXLINE( 198)			::String _hx_tmp;
HXDLIN( 198)			if (::hx::IsNull( this->_value )) {
HXLINE( 198)				_hx_tmp = HX_("null",87,9e,0e,49);
            			}
            			else {
HXLINE( 198)				_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
            			}
HXDLIN( 198)			testRegexpParts->push(((HX_("[^",a3,4f,00,00) + _hx_tmp) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 201)		if ((excludeChars->__get(0).length > 0)) {
HXLINE( 202)			testRegexpParts->push(((HX_("[",5b,00,00,00) + excludeChars->__get(0)) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 205)		this->regexp =  ::EReg_obj::__alloc( HX_CTX ,((HX_("(",28,00,00,00) + testRegexpParts->join(HX_(" | ",44,b4,18,00))) + HX_(")",29,00,00,00)),HX_("g",67,00,00,00));
HXLINE( 207)		 ::haxe::ui::components::TextField textfield = ::hx::TCast<  ::haxe::ui::components::TextField >::cast(this->_component);
HXLINE( 208)		::haxe::ui::components::_TextField::TextFieldHelper_obj::validateText(textfield,textfield->get_text());
            	}



::hx::ObjectPtr< RestrictCharsBehaviour_obj > RestrictCharsBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RestrictCharsBehaviour_obj > __this = new RestrictCharsBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RestrictCharsBehaviour_obj > RestrictCharsBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RestrictCharsBehaviour_obj *__this = (RestrictCharsBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RestrictCharsBehaviour_obj), true, "haxe.ui.components._TextField.RestrictCharsBehaviour"));
	*(void **)__this = RestrictCharsBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RestrictCharsBehaviour_obj::RestrictCharsBehaviour_obj()
{
}

void RestrictCharsBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RestrictCharsBehaviour);
	HX_MARK_MEMBER_NAME(regexp,"regexp");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RestrictCharsBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(regexp,"regexp");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RestrictCharsBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"regexp") ) { return ::hx::Val( regexp ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RestrictCharsBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"regexp") ) { regexp=inValue.Cast<  ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RestrictCharsBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("regexp",c9,bf,89,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RestrictCharsBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(RestrictCharsBehaviour_obj,regexp),HX_("regexp",c9,bf,89,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RestrictCharsBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String RestrictCharsBehaviour_obj_sMemberFields[] = {
	HX_("regexp",c9,bf,89,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class RestrictCharsBehaviour_obj::__mClass;

void RestrictCharsBehaviour_obj::__register()
{
	RestrictCharsBehaviour_obj _hx_dummy;
	RestrictCharsBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.RestrictCharsBehaviour",d6,52,f7,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RestrictCharsBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RestrictCharsBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RestrictCharsBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RestrictCharsBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
