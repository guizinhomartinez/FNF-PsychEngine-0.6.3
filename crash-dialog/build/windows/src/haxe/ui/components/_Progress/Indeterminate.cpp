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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Progress_Indeterminate
#include <haxe/ui/components/_Progress/Indeterminate.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d87b03eddc7875f2_85_new,"haxe.ui.components._Progress.Indeterminate","new",0x18d798c5,"haxe.ui.components._Progress.Indeterminate.new","haxe/ui/components/Progress.hx",85,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_d87b03eddc7875f2_89_get,"haxe.ui.components._Progress.Indeterminate","get",0x18d248fb,"haxe.ui.components._Progress.Indeterminate.get","haxe/ui/components/Progress.hx",89,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_d87b03eddc7875f2_92_set,"haxe.ui.components._Progress.Indeterminate","set",0x18db6407,"haxe.ui.components._Progress.Indeterminate.set","haxe/ui/components/Progress.hx",92,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_d87b03eddc7875f2_107_detatch,"haxe.ui.components._Progress.Indeterminate","detatch",0x0cdf8c90,"haxe.ui.components._Progress.Indeterminate.detatch","haxe/ui/components/Progress.hx",107,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{
namespace _Progress{

void Indeterminate_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d87b03eddc7875f2_85_new)
HXDLIN(  85)		super::__construct(component);
            	}

Dynamic Indeterminate_obj::__CreateEmpty() { return new Indeterminate_obj; }

void *Indeterminate_obj::_hx_vtable = 0;

Dynamic Indeterminate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Indeterminate_obj > _hx_result = new Indeterminate_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Indeterminate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x713afaff;
	}
}

 ::haxe::ui::util::VariantType Indeterminate_obj::get(){
            	HX_STACKFRAME(&_hx_pos_d87b03eddc7875f2_89_get)
HXDLIN(  89)		return this->_value;
            	}


void Indeterminate_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_d87b03eddc7875f2_92_set)
HXLINE(  93)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE(  94)			return;
            		}
HXLINE(  97)		this->super::set(value);
HXLINE(  99)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false))) {
HXLINE( 100)			this->_component->removeClass(HX_(":indeterminate",81,da,8e,29),null(),null());
            		}
            		else {
HXLINE( 102)			this->_component->addClass(HX_(":indeterminate",81,da,8e,29),null(),null());
            		}
            	}


void Indeterminate_obj::detatch(){
            	HX_STACKFRAME(&_hx_pos_d87b03eddc7875f2_107_detatch)
HXLINE( 108)		this->super::detatch();
HXLINE( 109)		this->_component->removeClass(HX_(":indeterminate",81,da,8e,29),null(),null());
            	}



::hx::ObjectPtr< Indeterminate_obj > Indeterminate_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Indeterminate_obj > __this = new Indeterminate_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Indeterminate_obj > Indeterminate_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Indeterminate_obj *__this = (Indeterminate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Indeterminate_obj), true, "haxe.ui.components._Progress.Indeterminate"));
	*(void **)__this = Indeterminate_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Indeterminate_obj::Indeterminate_obj()
{
}

::hx::Val Indeterminate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"detatch") ) { return ::hx::Val( detatch_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Indeterminate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Indeterminate_obj_sStaticStorageInfo = 0;
#endif

static ::String Indeterminate_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("detatch",ab,2d,5f,ab),
	::String(null()) };

::hx::Class Indeterminate_obj::__mClass;

void Indeterminate_obj::__register()
{
	Indeterminate_obj _hx_dummy;
	Indeterminate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Progress.Indeterminate",53,d2,08,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Indeterminate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Indeterminate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Indeterminate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Indeterminate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Progress
