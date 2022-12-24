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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_NotebookPageCount
#include <haxe/ui/backend/hxwidgets/behaviours/NotebookPageCount.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c82152b8b5c7b5e7_6_new,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageCount","new",0x54f069ba,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageCount.new","haxe/ui/backend/hxwidgets/behaviours/NotebookPageCount.hx",6,0x2bf8d1d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c82152b8b5c7b5e7_7_get,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageCount","get",0x54eb19f0,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageCount.get","haxe/ui/backend/hxwidgets/behaviours/NotebookPageCount.hx",7,0x2bf8d1d5)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void NotebookPageCount_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c82152b8b5c7b5e7_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic NotebookPageCount_obj::__CreateEmpty() { return new NotebookPageCount_obj; }

void *NotebookPageCount_obj::_hx_vtable = 0;

Dynamic NotebookPageCount_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookPageCount_obj > _hx_result = new NotebookPageCount_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotebookPageCount_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x71b1e25d) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x71b1e25d;
		}
	} else {
		return inClassId==(int)0x79063926;
	}
}

 ::haxe::ui::util::VariantType NotebookPageCount_obj::get(){
            	HX_STACKFRAME(&_hx_pos_c82152b8b5c7b5e7_7_get)
HXLINE(   8)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(   9)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1);
            		}
HXLINE(  12)		 ::hx::widgets::Notebook view = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->get_window());
HXLINE(  13)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(view->get_pageCount());
            	}



::hx::ObjectPtr< NotebookPageCount_obj > NotebookPageCount_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NotebookPageCount_obj > __this = new NotebookPageCount_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NotebookPageCount_obj > NotebookPageCount_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NotebookPageCount_obj *__this = (NotebookPageCount_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookPageCount_obj), true, "haxe.ui.backend.hxwidgets.behaviours.NotebookPageCount"));
	*(void **)__this = NotebookPageCount_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NotebookPageCount_obj::NotebookPageCount_obj()
{
}

::hx::Val NotebookPageCount_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookPageCount_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotebookPageCount_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookPageCount_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class NotebookPageCount_obj::__mClass;

void NotebookPageCount_obj::__register()
{
	NotebookPageCount_obj _hx_dummy;
	NotebookPageCount_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookPageCount",c8,c4,5e,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotebookPageCount_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotebookPageCount_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookPageCount_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookPageCount_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
