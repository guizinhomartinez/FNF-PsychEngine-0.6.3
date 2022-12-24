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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_NotebookGetPage
#include <haxe/ui/backend/hxwidgets/behaviours/NotebookGetPage.h>
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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_20917bc6d544e7d2_6_new,"haxe.ui.backend.hxwidgets.behaviours.NotebookGetPage","new",0x70947c3f,"haxe.ui.backend.hxwidgets.behaviours.NotebookGetPage.new","haxe/ui/backend/hxwidgets/behaviours/NotebookGetPage.hx",6,0x9b3b7130)
HX_LOCAL_STACK_FRAME(_hx_pos_20917bc6d544e7d2_7_call,"haxe.ui.backend.hxwidgets.behaviours.NotebookGetPage","call",0x0a0fcfdf,"haxe.ui.backend.hxwidgets.behaviours.NotebookGetPage.call","haxe/ui/backend/hxwidgets/behaviours/NotebookGetPage.hx",7,0x9b3b7130)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void NotebookGetPage_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_20917bc6d544e7d2_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic NotebookGetPage_obj::__CreateEmpty() { return new NotebookGetPage_obj; }

void *NotebookGetPage_obj::_hx_vtable = 0;

Dynamic NotebookGetPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookGetPage_obj > _hx_result = new NotebookGetPage_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotebookGetPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x111eabc7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x111eabc7;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType NotebookGetPage_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_20917bc6d544e7d2_7_call)
HXLINE(   8)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(   9)			return null();
            		}
HXLINE(  12)		int index = ( (int)(param) );
HXLINE(  13)		 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  13)		::Array< ::Dynamic> page;
HXDLIN(  13)		if (::hx::IsNull( _this->_children )) {
HXLINE(  13)			page = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  13)			page = _this->_children;
            		}
HXDLIN(  13)		 ::haxe::ui::core::Component page1 = page->__get(index).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  15)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(page1);
            	}



::hx::ObjectPtr< NotebookGetPage_obj > NotebookGetPage_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NotebookGetPage_obj > __this = new NotebookGetPage_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NotebookGetPage_obj > NotebookGetPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NotebookGetPage_obj *__this = (NotebookGetPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookGetPage_obj), true, "haxe.ui.backend.hxwidgets.behaviours.NotebookGetPage"));
	*(void **)__this = NotebookGetPage_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NotebookGetPage_obj::NotebookGetPage_obj()
{
}

::hx::Val NotebookGetPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookGetPage_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotebookGetPage_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookGetPage_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class NotebookGetPage_obj::__mClass;

void NotebookGetPage_obj::__register()
{
	NotebookGetPage_obj _hx_dummy;
	NotebookGetPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookGetPage",cd,f0,fb,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotebookGetPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotebookGetPage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookGetPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookGetPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
