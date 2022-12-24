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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_ImageBuilder
#include <haxe/ui/backend/hxwidgets/builders/ImageBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_39af28c70b6a8a82_11_new,"haxe.ui.backend.hxwidgets.builders.ImageBuilder","new",0x3edbaf0d,"haxe.ui.backend.hxwidgets.builders.ImageBuilder.new","haxe/ui/backend/hxwidgets/builders/ImageBuilder.hx",11,0x7282ba04)
HX_LOCAL_STACK_FRAME(_hx_pos_39af28c70b6a8a82_17_applyStyle,"haxe.ui.backend.hxwidgets.builders.ImageBuilder","applyStyle",0x45d621d6,"haxe.ui.backend.hxwidgets.builders.ImageBuilder.applyStyle","haxe/ui/backend/hxwidgets/builders/ImageBuilder.hx",17,0x7282ba04)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void ImageBuilder_obj::__construct( ::haxe::ui::components::Image image){
            	HX_STACKFRAME(&_hx_pos_39af28c70b6a8a82_11_new)
HXLINE(  12)		super::__construct(image);
HXLINE(  13)		this->_image = image;
            	}

Dynamic ImageBuilder_obj::__CreateEmpty() { return new ImageBuilder_obj; }

void *ImageBuilder_obj::_hx_vtable = 0;

Dynamic ImageBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageBuilder_obj > _hx_result = new ImageBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ImageBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x3bf6801d;
	}
}

void ImageBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_39af28c70b6a8a82_17_applyStyle)
HXDLIN(  17)		if (::hx::IsNotNull( style->resource )) {
HXLINE(  18)			this->_image->set_resource(style->resource);
            		}
            	}



::hx::ObjectPtr< ImageBuilder_obj > ImageBuilder_obj::__new( ::haxe::ui::components::Image image) {
	::hx::ObjectPtr< ImageBuilder_obj > __this = new ImageBuilder_obj();
	__this->__construct(image);
	return __this;
}

::hx::ObjectPtr< ImageBuilder_obj > ImageBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Image image) {
	ImageBuilder_obj *__this = (ImageBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.ImageBuilder"));
	*(void **)__this = ImageBuilder_obj::_hx_vtable;
	__this->__construct(image);
	return __this;
}

ImageBuilder_obj::ImageBuilder_obj()
{
}

void ImageBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBuilder);
	HX_MARK_MEMBER_NAME(_image,"_image");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_image,"_image");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImageBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { return ::hx::Val( _image ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { _image=inValue.Cast<  ::haxe::ui::components::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_image",9c,66,50,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Image */ ,(int)offsetof(ImageBuilder_obj,_image),HX_("_image",9c,66,50,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageBuilder_obj_sMemberFields[] = {
	HX_("_image",9c,66,50,b9),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class ImageBuilder_obj::__mClass;

void ImageBuilder_obj::__register()
{
	ImageBuilder_obj _hx_dummy;
	ImageBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.ImageBuilder",9b,24,22,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
