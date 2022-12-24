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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_NotebookSize
#include <haxe/ui/backend/hxwidgets/size/NotebookSize.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
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
#ifndef INCLUDED_hx_widgets_Notebook
#include <hx/widgets/Notebook.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0b21bf54338821c1_7_new,"haxe.ui.backend.hxwidgets.size.NotebookSize","new",0x21fd1f20,"haxe.ui.backend.hxwidgets.size.NotebookSize.new","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",7,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_9_get_width,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_width",0x0ebcf11d,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_width","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",9,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_13_get_height,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_height",0x8ce580f0,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_height","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",13,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_16_get_usableWidthModifier,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_usableWidthModifier",0xae9c12bc,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_usableWidthModifier","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",16,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_24_get_usableHeightModifier,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_usableHeightModifier",0x642e663f,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_usableHeightModifier","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",24,0x6cfc1451)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void NotebookSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic NotebookSize_obj::__CreateEmpty() { return new NotebookSize_obj; }

void *NotebookSize_obj::_hx_vtable = 0;

Dynamic NotebookSize_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookSize_obj > _hx_result = new NotebookSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotebookSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x099a2e57) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x099a2e57;
	} else {
		return inClassId==(int)0x4b7cc9a2;
	}
}

Float NotebookSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_9_get_width)
HXDLIN(   9)		return ( (Float)(this->component->get_window()->get_bestSize()->width) );
            	}


Float NotebookSize_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_13_get_height)
HXDLIN(  13)		return ( (Float)(this->component->get_window()->get_bestSize()->height) );
            	}


Float NotebookSize_obj::get_usableWidthModifier(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_16_get_usableWidthModifier)
HXLINE(  17)		bool _hx_tmp;
HXDLIN(  17)		if (::hx::IsNotNull( this->component )) {
HXLINE(  17)			_hx_tmp = ::hx::IsNull( this->component->get_window() );
            		}
            		else {
HXLINE(  17)			_hx_tmp = true;
            		}
HXDLIN(  17)		if (_hx_tmp) {
HXLINE(  18)			return ( (Float)(0) );
            		}
HXLINE(  20)		int m = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->component->get_window())->calcSizeFromPage()->width;
HXLINE(  21)		return ( (Float)(m) );
            	}


Float NotebookSize_obj::get_usableHeightModifier(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_24_get_usableHeightModifier)
HXLINE(  25)		bool _hx_tmp;
HXDLIN(  25)		if (::hx::IsNotNull( this->component )) {
HXLINE(  25)			_hx_tmp = ::hx::IsNull( this->component->get_window() );
            		}
            		else {
HXLINE(  25)			_hx_tmp = true;
            		}
HXDLIN(  25)		if (_hx_tmp) {
HXLINE(  26)			return ( (Float)(0) );
            		}
HXLINE(  28)		int m = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->component->get_window())->calcSizeFromPage()->height;
HXLINE(  29)		return ( (Float)(m) );
            	}



::hx::ObjectPtr< NotebookSize_obj > NotebookSize_obj::__new() {
	::hx::ObjectPtr< NotebookSize_obj > __this = new NotebookSize_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NotebookSize_obj > NotebookSize_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NotebookSize_obj *__this = (NotebookSize_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookSize_obj), true, "haxe.ui.backend.hxwidgets.size.NotebookSize"));
	*(void **)__this = NotebookSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotebookSize_obj::NotebookSize_obj()
{
}

::hx::Val NotebookSize_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_usableWidthModifier") ) { return ::hx::Val( get_usableWidthModifier_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_usableHeightModifier") ) { return ::hx::Val( get_usableHeightModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookSize_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotebookSize_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookSize_obj_sMemberFields[] = {
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_usableWidthModifier",fc,e3,aa,e8),
	HX_("get_usableHeightModifier",ff,ac,16,f7),
	::String(null()) };

::hx::Class NotebookSize_obj::__mClass;

void NotebookSize_obj::__register()
{
	NotebookSize_obj _hx_dummy;
	NotebookSize_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.size.NotebookSize",2e,4f,7f,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotebookSize_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotebookSize_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookSize_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
