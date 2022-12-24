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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_BestSize
#include <haxe/ui/backend/hxwidgets/size/BestSize.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_HardBreakWrapper
#include <hx/widgets/HardBreakWrapper.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticText
#include <hx/widgets/StaticText.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23d7e75437724d14_9_new,"haxe.ui.backend.hxwidgets.size.BestSize","new",0xb74f8329,"haxe.ui.backend.hxwidgets.size.BestSize.new","haxe/ui/backend/hxwidgets/size/BestSize.hx",9,0x9ac96fe8)
HX_LOCAL_STACK_FRAME(_hx_pos_23d7e75437724d14_10_get_width,"haxe.ui.backend.hxwidgets.size.BestSize","get_width",0x463381e6,"haxe.ui.backend.hxwidgets.size.BestSize.get_width","haxe/ui/backend/hxwidgets/size/BestSize.hx",10,0x9ac96fe8)
HX_LOCAL_STACK_FRAME(_hx_pos_23d7e75437724d14_17_get_height,"haxe.ui.backend.hxwidgets.size.BestSize","get_height",0xdd2da007,"haxe.ui.backend.hxwidgets.size.BestSize.get_height","haxe/ui/backend/hxwidgets/size/BestSize.hx",17,0x9ac96fe8)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void BestSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_23d7e75437724d14_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic BestSize_obj::__CreateEmpty() { return new BestSize_obj; }

void *BestSize_obj::_hx_vtable = 0;

Dynamic BestSize_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BestSize_obj > _hx_result = new BestSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BestSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x099a2e57) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x099a2e57;
	} else {
		return inClassId==(int)0x76eb1daf;
	}
}

Float BestSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_23d7e75437724d14_10_get_width)
HXLINE(  11)		if (::hx::IsNull( this->component->get_window() )) {
HXLINE(  12)			return ( (Float)(0) );
            		}
HXLINE(  14)		return ( (Float)(this->component->get_window()->get_bestSize()->width) );
            	}


Float BestSize_obj::get_height(){
            	HX_GC_STACKFRAME(&_hx_pos_23d7e75437724d14_17_get_height)
HXLINE(  18)		if (::hx::IsNull( this->component->get_window() )) {
HXLINE(  19)			return ( (Float)(0) );
            		}
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		bool _hx_tmp1;
HXDLIN(  22)		bool _hx_tmp2;
HXDLIN(  22)		if (::Std_obj::isOfType(this->component->get_window(),::hx::ClassOf< ::hx::widgets::StaticText >())) {
HXLINE(  22)			_hx_tmp2 = (this->component->get_autoWidth() == false);
            		}
            		else {
HXLINE(  22)			_hx_tmp2 = false;
            		}
HXDLIN(  22)		if (_hx_tmp2) {
HXLINE(  22)			_hx_tmp1 = ::hx::IsGreater( this->component->get_width(),0 );
            		}
            		else {
HXLINE(  22)			_hx_tmp1 = false;
            		}
HXDLIN(  22)		if (_hx_tmp1) {
HXLINE(  22)			_hx_tmp = (this->component->get_window()->_disposed == false);
            		}
            		else {
HXLINE(  22)			_hx_tmp = false;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  23)			::String label = ( (::String)(this->component->get(HX_("originalLabel",e3,03,a0,ca))) );
HXLINE(  24)			if (::hx::IsNotNull( label )) {
HXLINE(  25)				 ::hx::widgets::StaticText l = ( ( ::hx::widgets::StaticText)(this->component->get_window()) );
HXLINE(  26)				 ::hx::widgets::HardBreakWrapper h =  ::hx::widgets::HardBreakWrapper_obj::__alloc( HX_CTX ,l,label,::Std_obj::_hx_int(( (Float)(this->component->get_width()) )));
HXLINE(  27)				l->set_label(h->get_wrapped());
            			}
            		}
HXLINE(  31)		return ( (Float)(this->component->get_window()->get_bestSize()->height) );
            	}



::hx::ObjectPtr< BestSize_obj > BestSize_obj::__new() {
	::hx::ObjectPtr< BestSize_obj > __this = new BestSize_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BestSize_obj > BestSize_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BestSize_obj *__this = (BestSize_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BestSize_obj), true, "haxe.ui.backend.hxwidgets.size.BestSize"));
	*(void **)__this = BestSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BestSize_obj::BestSize_obj()
{
}

::hx::Val BestSize_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BestSize_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BestSize_obj_sStaticStorageInfo = 0;
#endif

static ::String BestSize_obj_sMemberFields[] = {
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	::String(null()) };

::hx::Class BestSize_obj::__mClass;

void BestSize_obj::__register()
{
	BestSize_obj _hx_dummy;
	BestSize_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BestSize_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BestSize_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BestSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BestSize_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
