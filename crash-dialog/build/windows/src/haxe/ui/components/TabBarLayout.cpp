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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBarLayout
#include <haxe/ui/components/TabBarLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8e53d89dc518a20b_40_new,"haxe.ui.components.TabBarLayout","new",0x3fc59560,"haxe.ui.components.TabBarLayout.new","haxe/ui/components/TabBar.hx",40,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8e53d89dc518a20b_45_repositionChildren,"haxe.ui.components.TabBarLayout","repositionChildren",0x741adbbb,"haxe.ui.components.TabBarLayout.repositionChildren","haxe/ui/components/TabBar.hx",45,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{

void TabBarLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8e53d89dc518a20b_40_new)
HXLINE(  41)		super::__construct();
HXLINE(  42)		this->_roundFullWidths = true;
            	}

Dynamic TabBarLayout_obj::__CreateEmpty() { return new TabBarLayout_obj; }

void *TabBarLayout_obj::_hx_vtable = 0;

Dynamic TabBarLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBarLayout_obj > _hx_result = new TabBarLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBarLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x21bb26dc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x21bb26dc;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void TabBarLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_8e53d89dc518a20b_45_repositionChildren)
HXLINE(  46)		this->super::repositionChildren();
HXLINE(  48)		 ::haxe::ui::containers::Box filler = this->_component->findComponent(HX_("tabbar-filler",bf,e2,cc,b0),null(),false,null()).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE(  49)		if (::hx::IsNotNull( filler )) {
HXLINE(  50)			 ::haxe::ui::containers::Box container = this->_component->findComponent(HX_("tabbar-contents",e9,7b,ac,dd),null(),false,null()).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE(  51)			 ::Dynamic _hx_tmp = this->_component->get_width();
HXDLIN(  51)			filler->set_width((( (Float)(_hx_tmp) ) - ( (Float)(container->get_width()) )));
HXLINE(  52)			filler->set_height(this->_component->get_height());
HXLINE(  53)			filler->set_left(container->get_width());
            		}
HXLINE(  56)		 ::haxe::ui::components::Button left = this->_component->findComponent(HX_("tabbar-scroll-left",18,70,e0,85),null(),false,null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  57)		 ::haxe::ui::components::Button right = this->_component->findComponent(HX_("tabbar-scroll-right",ab,b2,8e,15),null(),false,null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  58)		bool _hx_tmp;
HXDLIN(  58)		if (::hx::IsNotNull( left )) {
HXLINE(  58)			_hx_tmp = (this->hidden(left) == false);
            		}
            		else {
HXLINE(  58)			_hx_tmp = false;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  59)			 ::Dynamic x = this->_component->get_width();
HXDLIN(  59)			Float x1 = (( (Float)(x) ) - ( (Float)(left->get_width()) ));
HXLINE(  60)			if (::hx::IsNotNull( right )) {
HXLINE(  61)				x1 = (x1 - ( (Float)(right->get_width()) ));
            			}
HXLINE(  63)			left->set_left((x1 + 1));
HXLINE(  64)			Float _hx_tmp = (( (Float)(this->_component->get_height()) ) / ( (Float)(2) ));
HXDLIN(  64)			left->set_top((_hx_tmp - (( (Float)(left->get_height()) ) / ( (Float)(2) ))));
            		}
HXLINE(  67)		bool _hx_tmp1;
HXDLIN(  67)		if (::hx::IsNotNull( right )) {
HXLINE(  67)			_hx_tmp1 = (this->hidden(right) == false);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = false;
            		}
HXDLIN(  67)		if (_hx_tmp1) {
HXLINE(  68)			 ::Dynamic _hx_tmp = this->_component->get_width();
HXDLIN(  68)			right->set_left((( (Float)(_hx_tmp) ) - ( (Float)(right->get_width()) )));
HXLINE(  69)			Float _hx_tmp1 = (( (Float)(this->_component->get_height()) ) / ( (Float)(2) ));
HXDLIN(  69)			right->set_top((_hx_tmp1 - (( (Float)(right->get_height()) ) / ( (Float)(2) ))));
            		}
            	}



::hx::ObjectPtr< TabBarLayout_obj > TabBarLayout_obj::__new() {
	::hx::ObjectPtr< TabBarLayout_obj > __this = new TabBarLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabBarLayout_obj > TabBarLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabBarLayout_obj *__this = (TabBarLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBarLayout_obj), true, "haxe.ui.components.TabBarLayout"));
	*(void **)__this = TabBarLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBarLayout_obj::TabBarLayout_obj()
{
}

::hx::Val TabBarLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabBarLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabBarLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBarLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	::String(null()) };

::hx::Class TabBarLayout_obj::__mClass;

void TabBarLayout_obj::__register()
{
	TabBarLayout_obj _hx_dummy;
	TabBarLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.TabBarLayout",6e,a5,bf,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBarLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBarLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBarLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBarLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
