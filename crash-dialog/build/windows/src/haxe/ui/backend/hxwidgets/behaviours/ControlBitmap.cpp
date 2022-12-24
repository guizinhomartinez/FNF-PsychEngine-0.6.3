#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlBitmap
#include <haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.h>
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
#ifndef INCLUDED_haxe_ui_util_ImageLoader
#include <haxe/ui/util/ImageLoader.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Image
#include <hx/widgets/Image.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5e30fdb6e60d3e64_10_new,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap","new",0xcb173b81,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap.new","haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.hx",10,0x864afa6e)
HX_LOCAL_STACK_FRAME(_hx_pos_5e30fdb6e60d3e64_14_validateData,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap","validateData",0xc4f3fe9f,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap.validateData","haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.hx",14,0x864afa6e)
HX_LOCAL_STACK_FRAME(_hx_pos_5e30fdb6e60d3e64_11_validateData,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap","validateData",0xc4f3fe9f,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap.validateData","haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.hx",11,0x864afa6e)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlBitmap_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5e30fdb6e60d3e64_10_new)
HXDLIN(  10)		super::__construct(component);
            	}

Dynamic ControlBitmap_obj::__CreateEmpty() { return new ControlBitmap_obj; }

void *ControlBitmap_obj::_hx_vtable = 0;

Dynamic ControlBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlBitmap_obj > _hx_result = new ControlBitmap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x142f4aa5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x142f4aa5;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ControlBitmap_obj::validateData(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::hxwidgets::behaviours::ControlBitmap,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic imageInfo){
            			HX_GC_STACKFRAME(&_hx_pos_5e30fdb6e60d3e64_14_validateData)
HXLINE(  14)			if (::hx::IsNotNull( imageInfo )) {
HXLINE(  15)				if (::Std_obj::isOfType(_gthis->_component->get_window(),::hx::ClassOf< ::hx::widgets::AnyButton >())) {
HXLINE(  16)					 ::hx::widgets::AnyButton button = ( ( ::hx::widgets::AnyButton)(_gthis->_component->get_window()) );
HXLINE(  17)					button->set_bitmap(( ( ::hx::widgets::Bitmap)(imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ));
            				}
            				else {
HXLINE(  18)					if (::Std_obj::isOfType(_gthis->_component->get_window(),::hx::ClassOf< ::hx::widgets::StaticBitmap >())) {
HXLINE(  19)						Float scale = ( (Float)(1) );
HXLINE(  20)						if (::Std_obj::isOfType(_gthis->_component,::hx::ClassOf< ::haxe::ui::components::Image >())) {
HXLINE(  21)							scale = ::hx::TCast<  ::haxe::ui::components::Image >::cast(_gthis->_component)->get_imageScale();
            						}
HXLINE(  23)						 ::hx::widgets::StaticBitmap bmp = ( ( ::hx::widgets::StaticBitmap)(_gthis->_component->get_window()) );
HXLINE(  24)						 ::hx::widgets::Bitmap bitmap = ( ( ::hx::widgets::Bitmap)(imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXLINE(  25)						if ((scale != 1)) {
HXLINE(  26)							 ::hx::widgets::Image img = bitmap->convertToImage();
HXLINE(  27)							int scaledImg = ::Std_obj::_hx_int((( (Float)(img->get_width()) ) * scale));
HXDLIN(  27)							 ::hx::widgets::Image scaledImg1 = img->scale(scaledImg,::Std_obj::_hx_int((( (Float)(img->get_height()) ) * scale)));
HXLINE(  28)							 ::hx::widgets::Bitmap scaledBitmap =  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,scaledImg1,null());
HXLINE(  29)							img->destroy();
HXLINE(  30)							bitmap->destroy();
HXLINE(  31)							bitmap = scaledBitmap;
HXLINE(  32)							scaledImg1->destroy();
            						}
HXLINE(  34)						bmp->set_bitmap(bitmap);
HXLINE(  35)						if (::hx::IsNotNull( bmp->get_parent() )) {
HXLINE(  36)							bmp->get_parent()->refresh(null());
            						}
HXLINE(  38)						{
HXLINE(  38)							 ::haxe::ui::core::Component _this = _gthis->_component;
HXDLIN(  38)							bool _hx_tmp;
HXDLIN(  38)							if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  38)								_hx_tmp = (_this->_layoutLocked == true);
            							}
            							else {
HXLINE(  38)								_hx_tmp = true;
            							}
HXDLIN(  38)							if (!(_hx_tmp)) {
HXLINE(  38)								_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            							}
            						}
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_5e30fdb6e60d3e64_11_validateData)
HXDLIN(  11)		 ::haxe::ui::backend::hxwidgets::behaviours::ControlBitmap _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  12)		 ::haxe::ui::util::ImageLoader imageLoader =  ::haxe::ui::util::ImageLoader_obj::__alloc( HX_CTX ,this->_value);
HXLINE(  13)		imageLoader->load( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}



::hx::ObjectPtr< ControlBitmap_obj > ControlBitmap_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ControlBitmap_obj > __this = new ControlBitmap_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ControlBitmap_obj > ControlBitmap_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlBitmap_obj *__this = (ControlBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlBitmap_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlBitmap"));
	*(void **)__this = ControlBitmap_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlBitmap_obj::ControlBitmap_obj()
{
}

::hx::Val ControlBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ControlBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlBitmap_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ControlBitmap_obj::__mClass;

void ControlBitmap_obj::__register()
{
	ControlBitmap_obj _hx_dummy;
	ControlBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap",0f,67,19,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
