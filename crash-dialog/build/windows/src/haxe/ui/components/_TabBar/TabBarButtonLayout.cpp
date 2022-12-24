#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabBarButtonLayout
#include <haxe/ui/components/_TabBar/TabBarButtonLayout.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6e39a4cf4b3da721_637_new,"haxe.ui.components._TabBar.TabBarButtonLayout","new",0x90b58103,"haxe.ui.components._TabBar.TabBarButtonLayout.new","haxe/ui/components/TabBar.hx",637,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_6e39a4cf4b3da721_638_repositionChildren,"haxe.ui.components._TabBar.TabBarButtonLayout","repositionChildren",0x91757f78,"haxe.ui.components._TabBar.TabBarButtonLayout.repositionChildren","haxe/ui/components/TabBar.hx",638,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_6e39a4cf4b3da721_648_calcAutoSize,"haxe.ui.components._TabBar.TabBarButtonLayout","calcAutoSize",0x7a922482,"haxe.ui.components._TabBar.TabBarButtonLayout.calcAutoSize","haxe/ui/components/TabBar.hx",648,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void TabBarButtonLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6e39a4cf4b3da721_637_new)
HXDLIN( 637)		super::__construct();
            	}

Dynamic TabBarButtonLayout_obj::__CreateEmpty() { return new TabBarButtonLayout_obj; }

void *TabBarButtonLayout_obj::_hx_vtable = 0;

Dynamic TabBarButtonLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBarButtonLayout_obj > _hx_result = new TabBarButtonLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBarButtonLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x02db37b4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02db37b4;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835 || inClassId==(int)0x6b409503;
	}
}

void TabBarButtonLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_6e39a4cf4b3da721_638_repositionChildren)
HXLINE( 639)		this->super::repositionChildren();
HXLINE( 641)		 ::haxe::ui::components::Image image = this->_component->findComponent(HX_("tab-close-button",5f,35,00,26),::hx::ClassOf< ::haxe::ui::components::Image >(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 642)		bool _hx_tmp;
HXDLIN( 642)		if (::hx::IsNotNull( image )) {
HXLINE( 642)			_hx_tmp = ::hx::IsGreater( this->get_component()->get_componentWidth(),0 );
            		}
            		else {
HXLINE( 642)			_hx_tmp = false;
            		}
HXDLIN( 642)		if (_hx_tmp) {
HXLINE( 643)			Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 643)			int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(image->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 643)			Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(image));
HXDLIN( 643)			image->set_top((_hx_tmp2 - this->marginBottom(image)));
HXLINE( 644)			 ::Dynamic _hx_tmp3 = this->get_component()->get_componentWidth();
HXDLIN( 644)			Float _hx_tmp4 = (( (Float)(_hx_tmp3) ) - ( (Float)(image->get_componentWidth()) ));
HXDLIN( 644)			Float _hx_tmp5 = (_hx_tmp4 - this->get_paddingRight());
HXDLIN( 644)			Float _hx_tmp6 = (_hx_tmp5 + this->marginLeft(image));
HXDLIN( 644)			image->set_left((_hx_tmp6 - this->marginRight(image)));
            		}
            	}


 ::haxe::ui::geom::Size TabBarButtonLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_6e39a4cf4b3da721_648_calcAutoSize)
HXLINE( 649)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 651)		 ::haxe::ui::components::Image image = this->_component->findComponent(HX_("tab-close-button",5f,35,00,26),::hx::ClassOf< ::haxe::ui::components::Image >(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 652)		if (::hx::IsNotNull( image )) {
HXLINE( 653)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 653)			Float size2 = size1->width;
HXDLIN( 653)			 ::Dynamic _hx_tmp = image->get_width();
HXDLIN( 653)			size1->width = (size2 + (_hx_tmp + this->get_horizontalSpacing()));
            		}
HXLINE( 656)		return size;
            	}



::hx::ObjectPtr< TabBarButtonLayout_obj > TabBarButtonLayout_obj::__new() {
	::hx::ObjectPtr< TabBarButtonLayout_obj > __this = new TabBarButtonLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabBarButtonLayout_obj > TabBarButtonLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabBarButtonLayout_obj *__this = (TabBarButtonLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBarButtonLayout_obj), true, "haxe.ui.components._TabBar.TabBarButtonLayout"));
	*(void **)__this = TabBarButtonLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBarButtonLayout_obj::TabBarButtonLayout_obj()
{
}

::hx::Val TabBarButtonLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *TabBarButtonLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabBarButtonLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBarButtonLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcAutoSize",85,81,3f,fd),
	::String(null()) };

::hx::Class TabBarButtonLayout_obj::__mClass;

void TabBarButtonLayout_obj::__register()
{
	TabBarButtonLayout_obj _hx_dummy;
	TabBarButtonLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.TabBarButtonLayout",91,43,02,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBarButtonLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBarButtonLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBarButtonLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBarButtonLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
