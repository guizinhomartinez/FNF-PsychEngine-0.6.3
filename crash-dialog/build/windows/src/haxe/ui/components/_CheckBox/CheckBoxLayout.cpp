#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__CheckBox_CheckBoxLayout
#include <haxe/ui/components/_CheckBox/CheckBoxLayout.h>
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
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f436fda044ebfe43_261_new,"haxe.ui.components._CheckBox.CheckBoxLayout","new",0x644d3991,"haxe.ui.components._CheckBox.CheckBoxLayout.new","haxe/ui/components/CheckBox.hx",261,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_f436fda044ebfe43_262_repositionChildren,"haxe.ui.components._CheckBox.CheckBoxLayout","repositionChildren",0x7a0396aa,"haxe.ui.components._CheckBox.CheckBoxLayout.repositionChildren","haxe/ui/components/CheckBox.hx",262,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_f436fda044ebfe43_272_calcAutoSize,"haxe.ui.components._CheckBox.CheckBoxLayout","calcAutoSize",0x2b91ea34,"haxe.ui.components._CheckBox.CheckBoxLayout.calcAutoSize","haxe/ui/components/CheckBox.hx",272,0xaeb3e5d4)
namespace haxe{
namespace ui{
namespace components{
namespace _CheckBox{

void CheckBoxLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f436fda044ebfe43_261_new)
HXDLIN( 261)		super::__construct();
            	}

Dynamic CheckBoxLayout_obj::__CreateEmpty() { return new CheckBoxLayout_obj; }

void *CheckBoxLayout_obj::_hx_vtable = 0;

Dynamic CheckBoxLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckBoxLayout_obj > _hx_result = new CheckBoxLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CheckBoxLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6be4a2dd || inClassId==(int)0x7b94863b;
	}
}

void CheckBoxLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_f436fda044ebfe43_262_repositionChildren)
HXLINE( 263)		this->super::repositionChildren();
HXLINE( 265)		 ::haxe::ui::components::Image icon = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),true,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 266)		if (::hx::IsNotNull( icon )) {
HXLINE( 267)			icon->set_left(::Math_obj::fround(( (Float)(icon->get_left()) )));
HXLINE( 268)			icon->set_top(::Math_obj::fround(( (Float)(icon->get_top()) )));
            		}
            	}


 ::haxe::ui::geom::Size CheckBoxLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_f436fda044ebfe43_272_calcAutoSize)
HXLINE( 273)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 274)		if ((this->_component->get_autoWidth() == false)) {
HXLINE( 275)			 ::haxe::ui::components::Label label = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 276)			if (::hx::IsNotNull( label )) {
HXLINE( 277)				label->set_percentWidth(100);
            			}
            		}
HXLINE( 280)		return size;
            	}



::hx::ObjectPtr< CheckBoxLayout_obj > CheckBoxLayout_obj::__new() {
	::hx::ObjectPtr< CheckBoxLayout_obj > __this = new CheckBoxLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CheckBoxLayout_obj > CheckBoxLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CheckBoxLayout_obj *__this = (CheckBoxLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxLayout_obj), true, "haxe.ui.components._CheckBox.CheckBoxLayout"));
	*(void **)__this = CheckBoxLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CheckBoxLayout_obj::CheckBoxLayout_obj()
{
}

::hx::Val CheckBoxLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CheckBoxLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CheckBoxLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcAutoSize",85,81,3f,fd),
	::String(null()) };

::hx::Class CheckBoxLayout_obj::__mClass;

void CheckBoxLayout_obj::__register()
{
	CheckBoxLayout_obj _hx_dummy;
	CheckBoxLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._CheckBox.CheckBoxLayout",1f,1d,d3,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckBoxLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckBoxLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _CheckBox
