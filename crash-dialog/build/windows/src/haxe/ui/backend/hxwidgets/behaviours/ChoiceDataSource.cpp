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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ChoiceDataSource
#include <haxe/ui/backend/hxwidgets/behaviours/ChoiceDataSource.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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
#ifndef INCLUDED_hx_widgets_Choice
#include <hx/widgets/Choice.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_75320134228a0427_11_new,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource","new",0x027767d5,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource.new","haxe/ui/backend/hxwidgets/behaviours/ChoiceDataSource.hx",11,0xc4c8c33c)
HX_LOCAL_STACK_FRAME(_hx_pos_75320134228a0427_12_get,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource","get",0x0272180b,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource.get","haxe/ui/backend/hxwidgets/behaviours/ChoiceDataSource.hx",12,0xc4c8c33c)
HX_LOCAL_STACK_FRAME(_hx_pos_75320134228a0427_20_validateData,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource","validateData",0x869da7cb,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource.validateData","haxe/ui/backend/hxwidgets/behaviours/ChoiceDataSource.hx",20,0xc4c8c33c)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ChoiceDataSource_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_75320134228a0427_11_new)
HXDLIN(  11)		super::__construct(component);
            	}

Dynamic ChoiceDataSource_obj::__CreateEmpty() { return new ChoiceDataSource_obj; }

void *ChoiceDataSource_obj::_hx_vtable = 0;

Dynamic ChoiceDataSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChoiceDataSource_obj > _hx_result = new ChoiceDataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChoiceDataSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x5cf0b929 || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType ChoiceDataSource_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_75320134228a0427_12_get)
HXLINE(  13)		bool _hx_tmp;
HXDLIN(  13)		if (::hx::IsNotNull( this->_value )) {
HXLINE(  13)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE(  13)			_hx_tmp = true;
            		}
HXDLIN(  13)		if (_hx_tmp) {
HXLINE(  14)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
HXLINE(  15)			this->set(this->_value);
            		}
HXLINE(  17)		return this->_value;
            	}


void ChoiceDataSource_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_75320134228a0427_20_validateData)
HXLINE(  21)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  22)			return;
            		}
HXLINE(  25)		 ::hx::widgets::Choice choice = ::hx::TCast<  ::hx::widgets::Choice >::cast(this->_component->get_window());
HXLINE(  26)		choice->clear();
HXLINE(  28)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value)) {
HXLINE(  29)			return;
            		}
HXLINE(  32)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			int _g1 = ds->get_size();
HXDLIN(  33)			while((_g < _g1)){
HXLINE(  33)				_g = (_g + 1);
HXDLIN(  33)				int n = (_g - 1);
HXLINE(  34)				 ::Dynamic item = ds->get(n);
HXLINE(  35)				if (::hx::IsNotNull( item->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) )) {
HXLINE(  36)					choice->append(( (::String)(item->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) ));
            				}
            				else {
HXLINE(  38)					choice->append(::Std_obj::string(item));
            				}
            			}
            		}
HXLINE(  42)		 ::haxe::ui::components::DropDown dropDown = ::hx::TCast<  ::haxe::ui::components::DropDown >::cast(this->_component);
HXLINE(  43)		choice->set_selection(dropDown->get_selectedIndex());
            	}



::hx::ObjectPtr< ChoiceDataSource_obj > ChoiceDataSource_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ChoiceDataSource_obj > __this = new ChoiceDataSource_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ChoiceDataSource_obj > ChoiceDataSource_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ChoiceDataSource_obj *__this = (ChoiceDataSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChoiceDataSource_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource"));
	*(void **)__this = ChoiceDataSource_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ChoiceDataSource_obj::ChoiceDataSource_obj()
{
}

::hx::Val ChoiceDataSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ChoiceDataSource_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChoiceDataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String ChoiceDataSource_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ChoiceDataSource_obj::__mClass;

void ChoiceDataSource_obj::__register()
{
	ChoiceDataSource_obj _hx_dummy;
	ChoiceDataSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource",63,d9,af,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChoiceDataSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChoiceDataSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChoiceDataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChoiceDataSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
