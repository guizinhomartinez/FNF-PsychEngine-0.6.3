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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_DataViewListCtrlSelectedRow
#include <haxe/ui/backend/hxwidgets/behaviours/DataViewListCtrlSelectedRow.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewListCtrl
#include <hx/widgets/DataViewListCtrl.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7932c3d43d280277_6_new,"haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow","new",0x8870a17c,"haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow.new","haxe/ui/backend/hxwidgets/behaviours/DataViewListCtrlSelectedRow.hx",6,0x656b3513)
HX_LOCAL_STACK_FRAME(_hx_pos_7932c3d43d280277_7_set,"haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow","set",0x88746cbe,"haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow.set","haxe/ui/backend/hxwidgets/behaviours/DataViewListCtrlSelectedRow.hx",7,0x656b3513)
HX_LOCAL_STACK_FRAME(_hx_pos_7932c3d43d280277_21_get,"haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow","get",0x886b51b2,"haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow.get","haxe/ui/backend/hxwidgets/behaviours/DataViewListCtrlSelectedRow.hx",21,0x656b3513)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void DataViewListCtrlSelectedRow_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7932c3d43d280277_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic DataViewListCtrlSelectedRow_obj::__CreateEmpty() { return new DataViewListCtrlSelectedRow_obj; }

void *DataViewListCtrlSelectedRow_obj::_hx_vtable = 0;

Dynamic DataViewListCtrlSelectedRow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewListCtrlSelectedRow_obj > _hx_result = new DataViewListCtrlSelectedRow_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataViewListCtrlSelectedRow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x16df4968) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x16df4968;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x71b1e25d;
	}
}

void DataViewListCtrlSelectedRow_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_7932c3d43d280277_7_set)
HXLINE(   8)		this->super::set(value);
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::hx::widgets::DataViewListCtrl dataList = ::hx::TCast<  ::hx::widgets::DataViewListCtrl >::cast(this->_component->get_window());
HXLINE(  18)		dataList->set_selectedRow(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value)) ));
            	}


 ::haxe::ui::util::VariantType DataViewListCtrlSelectedRow_obj::get(){
            	HX_STACKFRAME(&_hx_pos_7932c3d43d280277_21_get)
HXLINE(  22)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  23)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            		}
HXLINE(  26)		 ::hx::widgets::DataViewListCtrl dataList = ::hx::TCast<  ::hx::widgets::DataViewListCtrl >::cast(this->_component->get_window());
HXLINE(  27)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(dataList->get_selectedRow());
            	}



::hx::ObjectPtr< DataViewListCtrlSelectedRow_obj > DataViewListCtrlSelectedRow_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DataViewListCtrlSelectedRow_obj > __this = new DataViewListCtrlSelectedRow_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DataViewListCtrlSelectedRow_obj > DataViewListCtrlSelectedRow_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DataViewListCtrlSelectedRow_obj *__this = (DataViewListCtrlSelectedRow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewListCtrlSelectedRow_obj), true, "haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow"));
	*(void **)__this = DataViewListCtrlSelectedRow_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DataViewListCtrlSelectedRow_obj::DataViewListCtrlSelectedRow_obj()
{
}

::hx::Val DataViewListCtrlSelectedRow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DataViewListCtrlSelectedRow_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DataViewListCtrlSelectedRow_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewListCtrlSelectedRow_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class DataViewListCtrlSelectedRow_obj::__mClass;

void DataViewListCtrlSelectedRow_obj::__register()
{
	DataViewListCtrlSelectedRow_obj _hx_dummy;
	DataViewListCtrlSelectedRow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow",8a,73,33,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewListCtrlSelectedRow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewListCtrlSelectedRow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewListCtrlSelectedRow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewListCtrlSelectedRow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
