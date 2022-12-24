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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_IconMap
#include <haxe/ui/backend/hxwidgets/IconMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TabViewIcons
#include <haxe/ui/backend/hxwidgets/TabViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_BookCtrlBase
#include <hx/widgets/BookCtrlBase.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_Notebook
#include <hx/widgets/Notebook.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_41b7dad0f5b39a7e_12_get,"haxe.ui.backend.hxwidgets.TabViewIcons","get",0xe7687a43,"haxe.ui.backend.hxwidgets.TabViewIcons.get","haxe/ui/backend/hxwidgets/TabViewIcons.hx",12,0x93829a61)
HX_LOCAL_STACK_FRAME(_hx_pos_41b7dad0f5b39a7e_9_boot,"haxe.ui.backend.hxwidgets.TabViewIcons","boot",0x90bc01e5,"haxe.ui.backend.hxwidgets.TabViewIcons.boot","haxe/ui/backend/hxwidgets/TabViewIcons.hx",9,0x93829a61)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void TabViewIcons_obj::__construct() { }

Dynamic TabViewIcons_obj::__CreateEmpty() { return new TabViewIcons_obj; }

void *TabViewIcons_obj::_hx_vtable = 0;

Dynamic TabViewIcons_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabViewIcons_obj > _hx_result = new TabViewIcons_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabViewIcons_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73420645;
}

 ::haxe::ui::backend::hxwidgets::IconMap TabViewIcons_obj::_map;

int TabViewIcons_obj::get( ::haxe::ui::containers::TabView tabView,::String icon){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::TabView,tabView) HXARGC(1)
            		void _hx_run( ::hx::widgets::ImageList imageList){
            			HX_STACKFRAME(&_hx_pos_41b7dad0f5b39a7e_12_get)
HXLINE(  13)			 ::hx::widgets::Notebook window = ( ( ::hx::widgets::Notebook)(tabView->get_window()) );
HXLINE(  14)			window->set_imageList(imageList);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_41b7dad0f5b39a7e_12_get)
HXDLIN(  12)		return ::haxe::ui::backend::hxwidgets::TabViewIcons_obj::_map->getImageIndex(tabView,icon, ::Dynamic(new _hx_Closure_0(tabView)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabViewIcons_obj,get,return )


TabViewIcons_obj::TabViewIcons_obj()
{
}

bool TabViewIcons_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = ( _map ); return true; }
	}
	return false;
}

bool TabViewIcons_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ui::backend::hxwidgets::IconMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabViewIcons_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TabViewIcons_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::backend::hxwidgets::IconMap */ ,(void *) &TabViewIcons_obj::_map,HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TabViewIcons_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabViewIcons_obj::_map,"_map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabViewIcons_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabViewIcons_obj::_map,"_map");
};

#endif

::hx::Class TabViewIcons_obj::__mClass;

static ::String TabViewIcons_obj_sStaticFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("get",96,80,4e,00),
	::String(null())
};

void TabViewIcons_obj::__register()
{
	TabViewIcons_obj _hx_dummy;
	TabViewIcons_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.TabViewIcons",9b,bf,ca,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabViewIcons_obj::__GetStatic;
	__mClass->mSetStaticField = &TabViewIcons_obj::__SetStatic;
	__mClass->mMarkFunc = TabViewIcons_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabViewIcons_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TabViewIcons_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabViewIcons_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabViewIcons_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabViewIcons_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabViewIcons_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_41b7dad0f5b39a7e_9_boot)
HXDLIN(   9)		_map =  ::haxe::ui::backend::hxwidgets::IconMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
