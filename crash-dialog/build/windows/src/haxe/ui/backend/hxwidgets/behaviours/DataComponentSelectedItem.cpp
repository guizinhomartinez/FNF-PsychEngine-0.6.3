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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_DataComponentSelectedItem
#include <haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ffe597081a33de9c_8_new,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem","new",0x17628636,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem.new","haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.hx",8,0xb7ed4fd9)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe597081a33de9c_9_getDynamic,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem","getDynamic",0x07047673,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem.getDynamic","haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.hx",9,0xb7ed4fd9)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void DataComponentSelectedItem_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ffe597081a33de9c_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic DataComponentSelectedItem_obj::__CreateEmpty() { return new DataComponentSelectedItem_obj; }

void *DataComponentSelectedItem_obj::_hx_vtable = 0;

Dynamic DataComponentSelectedItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataComponentSelectedItem_obj > _hx_result = new DataComponentSelectedItem_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataComponentSelectedItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x78d1f5a2 || inClassId==(int)0x7e17fa9f;
	}
}

 ::Dynamic DataComponentSelectedItem_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_ffe597081a33de9c_9_getDynamic)
HXLINE(  10)		if ((::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::core::IDataComponent >()) == false)) {
HXLINE(  11)			return false;
            		}
HXLINE(  14)		::Dynamic dataComponent =  ::hx::interface_check(this->_component,0xfafb3fc3);
HXLINE(  15)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::core::IDataComponent_obj::get_dataSource(dataComponent);
HXLINE(  16)		 ::Dynamic selectedItem = null();
HXLINE(  17)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::components::DropDown >())) {
HXLINE(  18)			 ::haxe::ui::components::DropDown dropDown = ::hx::TCast<  ::haxe::ui::components::DropDown >::cast(this->_component);
HXLINE(  19)			if ((dropDown->get_selectedIndex() > -1)) {
HXLINE(  20)				selectedItem = ds->get(dropDown->get_selectedIndex());
            			}
            		}
            		else {
HXLINE(  22)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::ListView >())) {
HXLINE(  23)				 ::haxe::ui::containers::ListView listview = ::hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE(  24)				if ((listview->get_selectedIndex() > -1)) {
HXLINE(  25)					selectedItem = ds->get(listview->get_selectedIndex());
            				}
            			}
            		}
HXLINE(  29)		return selectedItem;
            	}



::hx::ObjectPtr< DataComponentSelectedItem_obj > DataComponentSelectedItem_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DataComponentSelectedItem_obj > __this = new DataComponentSelectedItem_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DataComponentSelectedItem_obj > DataComponentSelectedItem_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DataComponentSelectedItem_obj *__this = (DataComponentSelectedItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataComponentSelectedItem_obj), true, "haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem"));
	*(void **)__this = DataComponentSelectedItem_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DataComponentSelectedItem_obj::DataComponentSelectedItem_obj()
{
}

::hx::Val DataComponentSelectedItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DataComponentSelectedItem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DataComponentSelectedItem_obj_sStaticStorageInfo = 0;
#endif

static ::String DataComponentSelectedItem_obj_sMemberFields[] = {
	HX_("getDynamic",89,25,77,85),
	::String(null()) };

::hx::Class DataComponentSelectedItem_obj::__mClass;

void DataComponentSelectedItem_obj::__register()
{
	DataComponentSelectedItem_obj _hx_dummy;
	DataComponentSelectedItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem",44,f3,f1,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataComponentSelectedItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataComponentSelectedItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataComponentSelectedItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataComponentSelectedItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
