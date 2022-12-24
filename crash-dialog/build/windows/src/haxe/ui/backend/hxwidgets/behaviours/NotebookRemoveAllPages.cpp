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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_NotebookRemoveAllPages
#include <haxe/ui/backend/hxwidgets/behaviours/NotebookRemoveAllPages.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4dc4bcc82e80bd54_7_new,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllPages","new",0x8cff3571,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllPages.new","haxe/ui/backend/hxwidgets/behaviours/NotebookRemoveAllPages.hx",7,0x988493e0)
HX_LOCAL_STACK_FRAME(_hx_pos_4dc4bcc82e80bd54_8_call,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllPages","call",0xcb07226d,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllPages.call","haxe/ui/backend/hxwidgets/behaviours/NotebookRemoveAllPages.hx",8,0x988493e0)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void NotebookRemoveAllPages_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4dc4bcc82e80bd54_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic NotebookRemoveAllPages_obj::__CreateEmpty() { return new NotebookRemoveAllPages_obj; }

void *NotebookRemoveAllPages_obj::_hx_vtable = 0;

Dynamic NotebookRemoveAllPages_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookRemoveAllPages_obj > _hx_result = new NotebookRemoveAllPages_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotebookRemoveAllPages_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x2c959e7d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c959e7d;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x71b1e25d;
	}
}

 ::haxe::ui::util::VariantType NotebookRemoveAllPages_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_4dc4bcc82e80bd54_8_call)
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return null();
            		}
HXLINE(  13)		this->_component->removeAllComponents(null());
HXLINE(  14)		 ::hx::widgets::Notebook notebook = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->get_window());
HXLINE(  15)		notebook->deleteAllPages();
HXLINE(  17)		return null();
            	}



::hx::ObjectPtr< NotebookRemoveAllPages_obj > NotebookRemoveAllPages_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NotebookRemoveAllPages_obj > __this = new NotebookRemoveAllPages_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NotebookRemoveAllPages_obj > NotebookRemoveAllPages_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NotebookRemoveAllPages_obj *__this = (NotebookRemoveAllPages_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookRemoveAllPages_obj), true, "haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllPages"));
	*(void **)__this = NotebookRemoveAllPages_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NotebookRemoveAllPages_obj::NotebookRemoveAllPages_obj()
{
}

::hx::Val NotebookRemoveAllPages_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookRemoveAllPages_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotebookRemoveAllPages_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookRemoveAllPages_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class NotebookRemoveAllPages_obj::__mClass;

void NotebookRemoveAllPages_obj::__register()
{
	NotebookRemoveAllPages_obj _hx_dummy;
	NotebookRemoveAllPages_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllPages",ff,a8,21,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotebookRemoveAllPages_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotebookRemoveAllPages_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookRemoveAllPages_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookRemoveAllPages_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
