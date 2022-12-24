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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ListViewSelectedIndex
#include <haxe/ui/backend/hxwidgets/behaviours/ListViewSelectedIndex.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListView
#include <hx/widgets/ListView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_23c08cec1dec9903_7_new,"haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex","new",0xfbef8a29,"haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex.new","haxe/ui/backend/hxwidgets/behaviours/ListViewSelectedIndex.hx",7,0x37822fc6)
HX_LOCAL_STACK_FRAME(_hx_pos_23c08cec1dec9903_8_validateData,"haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex","validateData",0x9a809af7,"haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex.validateData","haxe/ui/backend/hxwidgets/behaviours/ListViewSelectedIndex.hx",8,0x37822fc6)
HX_LOCAL_STACK_FRAME(_hx_pos_23c08cec1dec9903_18_get,"haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex","get",0xfbea3a5f,"haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex.get","haxe/ui/backend/hxwidgets/behaviours/ListViewSelectedIndex.hx",18,0x37822fc6)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ListViewSelectedIndex_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_23c08cec1dec9903_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ListViewSelectedIndex_obj::__CreateEmpty() { return new ListViewSelectedIndex_obj; }

void *ListViewSelectedIndex_obj::_hx_vtable = 0;

Dynamic ListViewSelectedIndex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListViewSelectedIndex_obj > _hx_result = new ListViewSelectedIndex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListViewSelectedIndex_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x594fab4d || inClassId==(int)0x7e17fa9f;
	}
}

void ListViewSelectedIndex_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_23c08cec1dec9903_8_validateData)
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		 ::hx::widgets::ListView view = ::hx::TCast<  ::hx::widgets::ListView >::cast(this->_component->get_window());
HXLINE(  14)		view->set_selectedIndex(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
HXLINE(  15)		view->ensureVisible(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            	}


 ::haxe::ui::util::VariantType ListViewSelectedIndex_obj::get(){
            	HX_STACKFRAME(&_hx_pos_23c08cec1dec9903_18_get)
HXLINE(  19)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  20)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1);
            		}
HXLINE(  23)		 ::hx::widgets::ListView view = ::hx::TCast<  ::hx::widgets::ListView >::cast(this->_component->get_window());
HXLINE(  24)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(view->get_selectedIndex());
            	}



::hx::ObjectPtr< ListViewSelectedIndex_obj > ListViewSelectedIndex_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ListViewSelectedIndex_obj > __this = new ListViewSelectedIndex_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ListViewSelectedIndex_obj > ListViewSelectedIndex_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ListViewSelectedIndex_obj *__this = (ListViewSelectedIndex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListViewSelectedIndex_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex"));
	*(void **)__this = ListViewSelectedIndex_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ListViewSelectedIndex_obj::ListViewSelectedIndex_obj()
{
}

::hx::Val ListViewSelectedIndex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ListViewSelectedIndex_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ListViewSelectedIndex_obj_sStaticStorageInfo = 0;
#endif

static ::String ListViewSelectedIndex_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ListViewSelectedIndex_obj::__mClass;

void ListViewSelectedIndex_obj::__register()
{
	ListViewSelectedIndex_obj _hx_dummy;
	ListViewSelectedIndex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex",b7,41,ab,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListViewSelectedIndex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListViewSelectedIndex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListViewSelectedIndex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListViewSelectedIndex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
