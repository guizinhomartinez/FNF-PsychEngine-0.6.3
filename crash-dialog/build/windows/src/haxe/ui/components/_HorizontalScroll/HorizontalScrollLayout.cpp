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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_HorizontalScrollLayout
#include <haxe/ui/components/_HorizontalScroll/HorizontalScrollLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_98_new,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","new",0x5ba67ed1,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.new","haxe/ui/components/HorizontalScroll.hx",98,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_99_resizeChildren,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","resizeChildren",0x851fb882,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.resizeChildren","haxe/ui/components/HorizontalScroll.hx",99,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_119_repositionChildren,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","repositionChildren",0x75ea396a,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.repositionChildren","haxe/ui/components/HorizontalScroll.hx",119,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_145_get_usableWidth,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","get_usableWidth",0xd305d376,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.get_usableWidth","haxe/ui/components/HorizontalScroll.hx",145,0xfa934da6)
namespace haxe{
namespace ui{
namespace components{
namespace _HorizontalScroll{

void HorizontalScrollLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_98_new)
HXDLIN(  98)		super::__construct();
            	}

Dynamic HorizontalScrollLayout_obj::__CreateEmpty() { return new HorizontalScrollLayout_obj; }

void *HorizontalScrollLayout_obj::_hx_vtable = 0;

Dynamic HorizontalScrollLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalScrollLayout_obj > _hx_result = new HorizontalScrollLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalScrollLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c3d947b) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x2c3d947b;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void HorizontalScrollLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_99_resizeChildren)
HXLINE( 100)		this->super::resizeChildren();
HXLINE( 102)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE( 103)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 104)		if (::hx::IsNotNull( thumb )) {
HXLINE( 105)			Float m = scroll->get_max();
HXDLIN( 105)			Float m1 = (m - scroll->get_min());
HXLINE( 106)			Float ucx = this->get_usableWidth();
HXLINE( 107)			Float thumbWidth = ((scroll->get_pageSize() / m1) * ucx);
HXLINE( 108)			if ((thumbWidth < this->get_innerHeight())) {
HXLINE( 109)				thumbWidth = this->get_innerHeight();
            			}
            			else {
HXLINE( 110)				if ((thumbWidth > ucx)) {
HXLINE( 111)					thumbWidth = ucx;
            				}
            			}
HXLINE( 113)			bool _hx_tmp;
HXDLIN( 113)			if ((thumbWidth > 0)) {
HXLINE( 113)				_hx_tmp = (::Math_obj::isNaN(thumbWidth) == false);
            			}
            			else {
HXLINE( 113)				_hx_tmp = false;
            			}
HXDLIN( 113)			if (_hx_tmp) {
HXLINE( 114)				thumb->set_width(thumbWidth);
            			}
            		}
            	}


void HorizontalScrollLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_119_repositionChildren)
HXLINE( 120)		this->super::repositionChildren();
HXLINE( 122)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 123)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 124)		bool _hx_tmp;
HXDLIN( 124)		if (::hx::IsNotNull( inc )) {
HXLINE( 124)			_hx_tmp = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 124)			_hx_tmp = false;
            		}
HXDLIN( 124)		if (_hx_tmp) {
HXLINE( 125)			 ::Dynamic _hx_tmp = this->get_component()->get_width();
HXDLIN( 125)			Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(inc->get_width()) ));
HXDLIN( 125)			inc->set_left((_hx_tmp1 - this->get_paddingRight()));
            		}
HXLINE( 128)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE( 129)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 130)		if (::hx::IsNotNull( thumb )) {
HXLINE( 131)			Float m = scroll->get_max();
HXDLIN( 131)			Float m1 = (m - scroll->get_min());
HXLINE( 132)			Float u = this->get_usableWidth();
HXLINE( 133)			u = (u - ( (Float)(thumb->get_componentWidth()) ));
HXLINE( 134)			Float x = scroll->get_pos();
HXDLIN( 134)			Float x1 = (((x - scroll->get_min()) / m1) * u);
HXLINE( 135)			x1 = (x1 + this->get_paddingLeft());
HXLINE( 136)			bool _hx_tmp;
HXDLIN( 136)			if (::hx::IsNotNull( deinc )) {
HXLINE( 136)				_hx_tmp = (this->hidden(deinc) == false);
            			}
            			else {
HXLINE( 136)				_hx_tmp = false;
            			}
HXDLIN( 136)			if (_hx_tmp) {
HXLINE( 137)				 ::Dynamic x = deinc->get_width();
HXDLIN( 137)				x1 = (x1 + (x + this->get_horizontalSpacing()));
            			}
HXLINE( 139)			thumb->set_left(x1);
HXLINE( 140)			thumb->set_top(::Math_obj::fround(( (Float)(thumb->get_top()) )));
            		}
            	}


Float HorizontalScrollLayout_obj::get_usableWidth(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_145_get_usableWidth)
HXLINE( 146)		Float ucx = this->get_innerWidth();
HXLINE( 147)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 148)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if (::hx::IsNotNull( deinc )) {
HXLINE( 149)			_hx_tmp = (this->hidden(deinc) == false);
            		}
            		else {
HXLINE( 149)			_hx_tmp = false;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 150)			 ::Dynamic ucx1 = deinc->get_width();
HXDLIN( 150)			ucx = (ucx - (ucx1 + this->get_horizontalSpacing()));
            		}
HXLINE( 152)		bool _hx_tmp1;
HXDLIN( 152)		if (::hx::IsNotNull( inc )) {
HXLINE( 152)			_hx_tmp1 = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 152)			_hx_tmp1 = false;
            		}
HXDLIN( 152)		if (_hx_tmp1) {
HXLINE( 153)			 ::Dynamic ucx1 = inc->get_width();
HXDLIN( 153)			ucx = (ucx - (ucx1 + this->get_horizontalSpacing()));
            		}
HXLINE( 155)		return ucx;
            	}



::hx::ObjectPtr< HorizontalScrollLayout_obj > HorizontalScrollLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalScrollLayout_obj > __this = new HorizontalScrollLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalScrollLayout_obj > HorizontalScrollLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalScrollLayout_obj *__this = (HorizontalScrollLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalScrollLayout_obj), true, "haxe.ui.components._HorizontalScroll.HorizontalScrollLayout"));
	*(void **)__this = HorizontalScrollLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalScrollLayout_obj::HorizontalScrollLayout_obj()
{
}

::hx::Val HorizontalScrollLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return ::hx::Val( get_usableWidth_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HorizontalScrollLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalScrollLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalScrollLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableWidth",85,bf,6e,25),
	::String(null()) };

::hx::Class HorizontalScrollLayout_obj::__mClass;

void HorizontalScrollLayout_obj::__register()
{
	HorizontalScrollLayout_obj _hx_dummy;
	HorizontalScrollLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._HorizontalScroll.HorizontalScrollLayout",5f,c2,50,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalScrollLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalScrollLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalScrollLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalScrollLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _HorizontalScroll
