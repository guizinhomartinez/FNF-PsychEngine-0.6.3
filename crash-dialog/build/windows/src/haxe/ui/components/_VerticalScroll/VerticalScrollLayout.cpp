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
#ifndef INCLUDED_haxe_ui_components__VerticalScroll_VerticalScrollLayout
#include <haxe/ui/components/_VerticalScroll/VerticalScrollLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_96_new,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","new",0x1e4e5251,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.new","haxe/ui/components/VerticalScroll.hx",96,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_99_resizeChildren,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","resizeChildren",0x2ce99502,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.resizeChildren","haxe/ui/components/VerticalScroll.hx",99,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_119_repositionChildren,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","repositionChildren",0x111c55ea,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.repositionChildren","haxe/ui/components/VerticalScroll.hx",119,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_145_get_usableHeight,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","get_usableHeight",0x1bbca8f7,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.get_usableHeight","haxe/ui/components/VerticalScroll.hx",145,0x571b9394)
namespace haxe{
namespace ui{
namespace components{
namespace _VerticalScroll{

void VerticalScrollLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_96_new)
HXDLIN(  96)		super::__construct();
            	}

Dynamic VerticalScrollLayout_obj::__CreateEmpty() { return new VerticalScrollLayout_obj; }

void *VerticalScrollLayout_obj::_hx_vtable = 0;

Dynamic VerticalScrollLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalScrollLayout_obj > _hx_result = new VerticalScrollLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalScrollLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6e640bdf;
	}
}

void VerticalScrollLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_99_resizeChildren)
HXLINE( 100)		this->super::resizeChildren();
HXLINE( 102)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE( 103)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 104)		if (::hx::IsNotNull( thumb )) {
HXLINE( 105)			Float m = scroll->get_max();
HXDLIN( 105)			Float m1 = (m - scroll->get_min());
HXLINE( 106)			Float ucy = this->get_usableHeight();
HXLINE( 107)			Float thumbHeight = ((scroll->get_pageSize() / m1) * ucy);
HXLINE( 108)			if ((thumbHeight < this->get_innerWidth())) {
HXLINE( 109)				thumbHeight = this->get_innerWidth();
            			}
            			else {
HXLINE( 110)				if ((thumbHeight > ucy)) {
HXLINE( 111)					thumbHeight = ucy;
            				}
            			}
HXLINE( 113)			bool _hx_tmp;
HXDLIN( 113)			if ((thumbHeight > 0)) {
HXLINE( 113)				_hx_tmp = (::Math_obj::isNaN(thumbHeight) == false);
            			}
            			else {
HXLINE( 113)				_hx_tmp = false;
            			}
HXDLIN( 113)			if (_hx_tmp) {
HXLINE( 114)				thumb->set_height(thumbHeight);
            			}
            		}
            	}


void VerticalScrollLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_119_repositionChildren)
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
HXLINE( 125)			 ::Dynamic _hx_tmp = this->get_component()->get_height();
HXDLIN( 125)			Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(inc->get_height()) ));
HXDLIN( 125)			inc->set_top((_hx_tmp1 - this->get_paddingBottom()));
            		}
HXLINE( 128)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE( 129)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 130)		if (::hx::IsNotNull( thumb )) {
HXLINE( 131)			Float m = scroll->get_max();
HXDLIN( 131)			Float m1 = (m - scroll->get_min());
HXLINE( 132)			Float u = this->get_usableHeight();
HXLINE( 133)			u = (u - ( (Float)(thumb->get_height()) ));
HXLINE( 134)			Float y = scroll->get_pos();
HXDLIN( 134)			Float y1 = (((y - scroll->get_min()) / m1) * u);
HXLINE( 135)			y1 = (y1 + this->get_paddingTop());
HXLINE( 136)			bool _hx_tmp;
HXDLIN( 136)			if (::hx::IsNotNull( deinc )) {
HXLINE( 136)				_hx_tmp = (this->hidden(deinc) == false);
            			}
            			else {
HXLINE( 136)				_hx_tmp = false;
            			}
HXDLIN( 136)			if (_hx_tmp) {
HXLINE( 137)				 ::Dynamic y = deinc->get_height();
HXDLIN( 137)				y1 = (y1 + (y + this->get_verticalSpacing()));
            			}
HXLINE( 139)			thumb->set_left(::Math_obj::fround(( (Float)(thumb->get_left()) )));
HXLINE( 140)			thumb->set_top(y1);
            		}
            	}


Float VerticalScrollLayout_obj::get_usableHeight(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_145_get_usableHeight)
HXLINE( 146)		Float ucy = this->get_innerHeight();
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
HXLINE( 150)			 ::Dynamic ucy1 = deinc->get_height();
HXDLIN( 150)			ucy = (ucy - (ucy1 + this->get_verticalSpacing()));
            		}
HXLINE( 152)		bool _hx_tmp1;
HXDLIN( 152)		if (::hx::IsNotNull( inc )) {
HXLINE( 152)			_hx_tmp1 = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 152)			_hx_tmp1 = false;
            		}
HXDLIN( 152)		if (_hx_tmp1) {
HXLINE( 153)			 ::Dynamic ucy1 = inc->get_height();
HXDLIN( 153)			ucy = (ucy - (ucy1 + this->get_verticalSpacing()));
            		}
HXLINE( 155)		return ucy;
            	}



::hx::ObjectPtr< VerticalScrollLayout_obj > VerticalScrollLayout_obj::__new() {
	::hx::ObjectPtr< VerticalScrollLayout_obj > __this = new VerticalScrollLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalScrollLayout_obj > VerticalScrollLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalScrollLayout_obj *__this = (VerticalScrollLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalScrollLayout_obj), true, "haxe.ui.components._VerticalScroll.VerticalScrollLayout"));
	*(void **)__this = VerticalScrollLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalScrollLayout_obj::VerticalScrollLayout_obj()
{
}

::hx::Val VerticalScrollLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return ::hx::Val( get_usableHeight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VerticalScrollLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VerticalScrollLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalScrollLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableHeight",88,4d,c8,51),
	::String(null()) };

::hx::Class VerticalScrollLayout_obj::__mClass;

void VerticalScrollLayout_obj::__register()
{
	VerticalScrollLayout_obj _hx_dummy;
	VerticalScrollLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._VerticalScroll.VerticalScrollLayout",df,d5,a8,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalScrollLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalScrollLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalScrollLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalScrollLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _VerticalScroll
