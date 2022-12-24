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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_NotebookPageIndex
#include <haxe/ui/backend/hxwidgets/behaviours/NotebookPageIndex.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9e5e0060bc42873d_7_new,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex","new",0xfedd9d7d,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex.new","haxe/ui/backend/hxwidgets/behaviours/NotebookPageIndex.hx",7,0x618a8772)
HX_LOCAL_STACK_FRAME(_hx_pos_9e5e0060bc42873d_8_validateData,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex","validateData",0x69277d23,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex.validateData","haxe/ui/backend/hxwidgets/behaviours/NotebookPageIndex.hx",8,0x618a8772)
HX_LOCAL_STACK_FRAME(_hx_pos_9e5e0060bc42873d_21_get,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex","get",0xfed84db3,"haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex.get","haxe/ui/backend/hxwidgets/behaviours/NotebookPageIndex.hx",21,0x618a8772)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void NotebookPageIndex_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_9e5e0060bc42873d_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic NotebookPageIndex_obj::__CreateEmpty() { return new NotebookPageIndex_obj; }

void *NotebookPageIndex_obj::_hx_vtable = 0;

Dynamic NotebookPageIndex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookPageIndex_obj > _hx_result = new NotebookPageIndex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotebookPageIndex_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x40dc164d || inClassId==(int)0x7e17fa9f;
	}
}

void NotebookPageIndex_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_9e5e0060bc42873d_8_validateData)
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN(  13)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0))) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::hx::widgets::Notebook notebook = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->get_window());
HXLINE(  18)		notebook->set_selection(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            	}


 ::haxe::ui::util::VariantType NotebookPageIndex_obj::get(){
            	HX_STACKFRAME(&_hx_pos_9e5e0060bc42873d_21_get)
HXLINE(  22)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  23)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1);
            		}
HXLINE(  26)		 ::hx::widgets::Notebook notebook = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->get_window());
HXLINE(  27)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(notebook->get_selection());
            	}



::hx::ObjectPtr< NotebookPageIndex_obj > NotebookPageIndex_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NotebookPageIndex_obj > __this = new NotebookPageIndex_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NotebookPageIndex_obj > NotebookPageIndex_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NotebookPageIndex_obj *__this = (NotebookPageIndex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookPageIndex_obj), true, "haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex"));
	*(void **)__this = NotebookPageIndex_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NotebookPageIndex_obj::NotebookPageIndex_obj()
{
}

::hx::Val NotebookPageIndex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookPageIndex_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotebookPageIndex_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookPageIndex_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class NotebookPageIndex_obj::__mClass;

void NotebookPageIndex_obj::__register()
{
	NotebookPageIndex_obj _hx_dummy;
	NotebookPageIndex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex",0b,1b,10,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotebookPageIndex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotebookPageIndex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookPageIndex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookPageIndex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
