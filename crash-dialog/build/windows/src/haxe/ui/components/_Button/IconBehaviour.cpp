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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_IconBehaviour
#include <haxe/ui/components/_Button/IconBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_26545bda63a80f75_368_new,"haxe.ui.components._Button.IconBehaviour","new",0xe530ed13,"haxe.ui.components._Button.IconBehaviour.new","haxe/ui/components/Button.hx",368,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_26545bda63a80f75_369_validateData,"haxe.ui.components._Button.IconBehaviour","validateData",0x47148acd,"haxe.ui.components._Button.IconBehaviour.validateData","haxe/ui/components/Button.hx",369,0x45086125)
namespace haxe{
namespace ui{
namespace components{
namespace _Button{

void IconBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_26545bda63a80f75_368_new)
HXDLIN( 368)		super::__construct(component);
            	}

Dynamic IconBehaviour_obj::__CreateEmpty() { return new IconBehaviour_obj; }

void *IconBehaviour_obj::_hx_vtable = 0;

Dynamic IconBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IconBehaviour_obj > _hx_result = new IconBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IconBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x7c39f233 || inClassId==(int)0x7e17fa9f;
	}
}

void IconBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_26545bda63a80f75_369_validateData)
HXLINE( 370)		 ::haxe::ui::components::Image icon = this->_component->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 372)		bool _hx_tmp;
HXDLIN( 372)		bool _hx_tmp1;
HXDLIN( 372)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 372)			_hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 372)			_hx_tmp1 = true;
            		}
HXDLIN( 372)		if (_hx_tmp1) {
HXLINE( 372)			_hx_tmp = ::hx::IsNotNull( icon );
            		}
            		else {
HXLINE( 372)			_hx_tmp = false;
            		}
HXDLIN( 372)		if (_hx_tmp) {
HXLINE( 373)			this->_component->get_customStyle()->icon = null();
HXLINE( 374)			this->_component->removeComponent(icon,null(),null());
HXLINE( 375)			return;
            		}
HXLINE( 378)		if (::hx::IsNull( icon )) {
HXLINE( 379)			icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 380)			icon->addClass(HX_("icon",79,e7,b2,45),null(),null());
HXLINE( 381)			icon->set_id(HX_("button-icon",f4,52,38,e9));
HXLINE( 382)			icon->set_scriptAccess(false);
HXLINE( 383)			this->_component->addComponentAt(icon,0);
HXLINE( 384)			{
HXLINE( 384)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 384)				_this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 384)				_this->_style = null();
            			}
            		}
HXLINE( 388)		icon->set_resource(this->_value);
            	}



::hx::ObjectPtr< IconBehaviour_obj > IconBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< IconBehaviour_obj > __this = new IconBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< IconBehaviour_obj > IconBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	IconBehaviour_obj *__this = (IconBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IconBehaviour_obj), true, "haxe.ui.components._Button.IconBehaviour"));
	*(void **)__this = IconBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

IconBehaviour_obj::IconBehaviour_obj()
{
}

::hx::Val IconBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IconBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IconBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String IconBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class IconBehaviour_obj::__mClass;

void IconBehaviour_obj::__register()
{
	IconBehaviour_obj _hx_dummy;
	IconBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Button.IconBehaviour",a1,67,32,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IconBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IconBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IconBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IconBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Button
