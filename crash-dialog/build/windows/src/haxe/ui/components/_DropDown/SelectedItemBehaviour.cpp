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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DynamicBehaviour
#include <haxe/ui/behaviours/DynamicBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DynamicDataBehaviour
#include <haxe/ui/behaviours/DynamicDataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#include <haxe/ui/components/DropDownBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SelectedItemBehaviour
#include <haxe/ui/components/_DropDown/SelectedItemBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a3e1f2e5546618e_156_new,"haxe.ui.components._DropDown.SelectedItemBehaviour","new",0x59e78c9d,"haxe.ui.components._DropDown.SelectedItemBehaviour.new","haxe/ui/components/DropDown.hx",156,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_9a3e1f2e5546618e_157_validateData,"haxe.ui.components._DropDown.SelectedItemBehaviour","validateData",0x7436aa03,"haxe.ui.components._DropDown.SelectedItemBehaviour.validateData","haxe/ui/components/DropDown.hx",157,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_9a3e1f2e5546618e_162_getDynamic,"haxe.ui.components._DropDown.SelectedItemBehaviour","getDynamic",0x81181aec,"haxe.ui.components._DropDown.SelectedItemBehaviour.getDynamic","haxe/ui/components/DropDown.hx",162,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_9a3e1f2e5546618e_167_setDynamic,"haxe.ui.components._DropDown.SelectedItemBehaviour","setDynamic",0x8495b960,"haxe.ui.components._DropDown.SelectedItemBehaviour.setDynamic","haxe/ui/components/DropDown.hx",167,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{

void SelectedItemBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_9a3e1f2e5546618e_156_new)
HXDLIN( 156)		super::__construct(component);
            	}

Dynamic SelectedItemBehaviour_obj::__CreateEmpty() { return new SelectedItemBehaviour_obj; }

void *SelectedItemBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedItemBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedItemBehaviour_obj > _hx_result = new SelectedItemBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedItemBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2cf486b6) {
		if (inClassId<=(int)0x03c21548) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03c21548;
		} else {
			return inClassId==(int)0x2cf486b6;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x58e86b4f;
	}
}

void SelectedItemBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_9a3e1f2e5546618e_157_validateData)
HXLINE( 158)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_component->_compositeBuilder)->get_handler();
HXLINE( 159)		::haxe::ui::components::IDropDownHandler_obj::set_selectedItem(handler,this->_value);
            	}


 ::Dynamic SelectedItemBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_9a3e1f2e5546618e_162_getDynamic)
HXLINE( 163)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_component->_compositeBuilder)->get_handler();
HXLINE( 164)		return ::haxe::ui::components::IDropDownHandler_obj::get_selectedItem(handler);
            	}


void SelectedItemBehaviour_obj::setDynamic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_9a3e1f2e5546618e_167_setDynamic)
HXLINE( 168)		if ((this->_component->get_isReady() == false)) {
HXLINE( 169)			this->super::setDynamic(value);
HXLINE( 170)			return;
            		}
HXLINE( 173)		this->_value = value;
HXLINE( 174)		this->invalidateData();
HXLINE( 175)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_component->_compositeBuilder)->get_handler();
HXLINE( 176)		::haxe::ui::components::IDropDownHandler_obj::set_selectedItem(handler,value);
            	}



::hx::ObjectPtr< SelectedItemBehaviour_obj > SelectedItemBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedItemBehaviour_obj > __this = new SelectedItemBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedItemBehaviour_obj > SelectedItemBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedItemBehaviour_obj *__this = (SelectedItemBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedItemBehaviour_obj), true, "haxe.ui.components._DropDown.SelectedItemBehaviour"));
	*(void **)__this = SelectedItemBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedItemBehaviour_obj::SelectedItemBehaviour_obj()
{
}

::hx::Val SelectedItemBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedItemBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedItemBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedItemBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("getDynamic",89,25,77,85),
	HX_("setDynamic",fd,c3,f4,88),
	::String(null()) };

::hx::Class SelectedItemBehaviour_obj::__mClass;

void SelectedItemBehaviour_obj::__register()
{
	SelectedItemBehaviour_obj _hx_dummy;
	SelectedItemBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._DropDown.SelectedItemBehaviour",2b,fa,6b,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedItemBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedItemBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedItemBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedItemBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown
