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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_NotebookRemovePage
#include <haxe/ui/backend/hxwidgets/behaviours/NotebookRemovePage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5634c72b8a7029be_7_new,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemovePage","new",0x2b9b0d5d,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemovePage.new","haxe/ui/backend/hxwidgets/behaviours/NotebookRemovePage.hx",7,0xa53768f4)
HX_LOCAL_STACK_FRAME(_hx_pos_5634c72b8a7029be_8_call,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemovePage","call",0xf4c83901,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemovePage.call","haxe/ui/backend/hxwidgets/behaviours/NotebookRemovePage.hx",8,0xa53768f4)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void NotebookRemovePage_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5634c72b8a7029be_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic NotebookRemovePage_obj::__CreateEmpty() { return new NotebookRemovePage_obj; }

void *NotebookRemovePage_obj::_hx_vtable = 0;

Dynamic NotebookRemovePage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookRemovePage_obj > _hx_result = new NotebookRemovePage_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotebookRemovePage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x054ff969) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x054ff969;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x71b1e25d;
	}
}

 ::haxe::ui::util::VariantType NotebookRemovePage_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_5634c72b8a7029be_8_call)
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return null();
            		}
HXLINE(  13)		int index = ( (int)(param) );
HXLINE(  14)		 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  14)		::Array< ::Dynamic> child;
HXDLIN(  14)		if (::hx::IsNull( _this->_children )) {
HXLINE(  14)			child = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  14)			child = _this->_children;
            		}
HXDLIN(  14)		 ::haxe::ui::core::Component child1 = child->__get(index).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  15)		this->_component->removeComponent(child1,null(),null());
HXLINE(  16)		 ::hx::widgets::Notebook notebook = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->get_window());
HXLINE(  17)		notebook->deletePage(index);
HXLINE(  19)		return null();
            	}



::hx::ObjectPtr< NotebookRemovePage_obj > NotebookRemovePage_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NotebookRemovePage_obj > __this = new NotebookRemovePage_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NotebookRemovePage_obj > NotebookRemovePage_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NotebookRemovePage_obj *__this = (NotebookRemovePage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookRemovePage_obj), true, "haxe.ui.backend.hxwidgets.behaviours.NotebookRemovePage"));
	*(void **)__this = NotebookRemovePage_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NotebookRemovePage_obj::NotebookRemovePage_obj()
{
}

::hx::Val NotebookRemovePage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookRemovePage_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotebookRemovePage_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookRemovePage_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class NotebookRemovePage_obj::__mClass;

void NotebookRemovePage_obj::__register()
{
	NotebookRemovePage_obj _hx_dummy;
	NotebookRemovePage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookRemovePage",eb,1a,a0,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotebookRemovePage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotebookRemovePage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookRemovePage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookRemovePage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
