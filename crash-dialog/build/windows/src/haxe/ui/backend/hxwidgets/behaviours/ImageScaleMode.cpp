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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ImageScaleMode
#include <haxe/ui/backend/hxwidgets/behaviours/ImageScaleMode.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticBitmap
#include <haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBitmap
#include <hx/widgets/StaticBitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f7e3319aa219aac_7_new,"haxe.ui.backend.hxwidgets.behaviours.ImageScaleMode","new",0x23dfef61,"haxe.ui.backend.hxwidgets.behaviours.ImageScaleMode.new","haxe/ui/backend/hxwidgets/behaviours/ImageScaleMode.hx",7,0xd11e3ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_1f7e3319aa219aac_8_validateData,"haxe.ui.backend.hxwidgets.behaviours.ImageScaleMode","validateData",0x6625cebf,"haxe.ui.backend.hxwidgets.behaviours.ImageScaleMode.validateData","haxe/ui/backend/hxwidgets/behaviours/ImageScaleMode.hx",8,0xd11e3ef0)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ImageScaleMode_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1f7e3319aa219aac_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ImageScaleMode_obj::__CreateEmpty() { return new ImageScaleMode_obj; }

void *ImageScaleMode_obj::_hx_vtable = 0;

Dynamic ImageScaleMode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageScaleMode_obj > _hx_result = new ImageScaleMode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ImageScaleMode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x62d3ea99 || inClassId==(int)0x7e17fa9f;
	}
}

void ImageScaleMode_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_1f7e3319aa219aac_8_validateData)
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		 ::haxe::ui::backend::hxwidgets::custom::TransparentStaticBitmap bitmap = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TransparentStaticBitmap >::cast(this->_component->get_window());
HXLINE(  14)		bitmap->scaleMode = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
            	}



::hx::ObjectPtr< ImageScaleMode_obj > ImageScaleMode_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ImageScaleMode_obj > __this = new ImageScaleMode_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ImageScaleMode_obj > ImageScaleMode_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ImageScaleMode_obj *__this = (ImageScaleMode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageScaleMode_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ImageScaleMode"));
	*(void **)__this = ImageScaleMode_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ImageScaleMode_obj::ImageScaleMode_obj()
{
}

::hx::Val ImageScaleMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageScaleMode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageScaleMode_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageScaleMode_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ImageScaleMode_obj::__mClass;

void ImageScaleMode_obj::__register()
{
	ImageScaleMode_obj _hx_dummy;
	ImageScaleMode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ImageScaleMode",ef,aa,c2,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageScaleMode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageScaleMode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageScaleMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageScaleMode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
