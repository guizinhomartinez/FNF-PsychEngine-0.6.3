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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxBuilder
#include <haxe/ui/components/CheckBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <haxe/ui/components/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxBuilder
#include <haxe/ui/components/OptionBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxGroups
#include <haxe/ui/components/OptionBoxGroups.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bce5fa2e00c9db93_75_new,"haxe.ui.components.OptionBoxBuilder","new",0xd07dd33d,"haxe.ui.components.OptionBoxBuilder.new","haxe/ui/components/OptionBox.hx",75,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_bce5fa2e00c9db93_77_get_cssName,"haxe.ui.components.OptionBoxBuilder","get_cssName",0x0822c7a2,"haxe.ui.components.OptionBoxBuilder.get_cssName","haxe/ui/components/OptionBox.hx",77,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_bce5fa2e00c9db93_80_setSelection,"haxe.ui.components.OptionBoxBuilder","setSelection",0x2239f1cd,"haxe.ui.components.OptionBoxBuilder.setSelection","haxe/ui/components/OptionBox.hx",80,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_bce5fa2e00c9db93_126_destroy,"haxe.ui.components.OptionBoxBuilder","destroy",0x5e676257,"haxe.ui.components.OptionBoxBuilder.destroy","haxe/ui/components/OptionBox.hx",126,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{

void OptionBoxBuilder_obj::__construct( ::haxe::ui::components::CheckBox checkbox){
            	HX_STACKFRAME(&_hx_pos_bce5fa2e00c9db93_75_new)
HXDLIN(  75)		super::__construct(checkbox);
            	}

Dynamic OptionBoxBuilder_obj::__CreateEmpty() { return new OptionBoxBuilder_obj; }

void *OptionBoxBuilder_obj::_hx_vtable = 0;

Dynamic OptionBoxBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionBoxBuilder_obj > _hx_result = new OptionBoxBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OptionBoxBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1cd5d488) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x1cd5d488;
		}
	} else {
		return inClassId==(int)0x2dd64139;
	}
}

::String OptionBoxBuilder_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_bce5fa2e00c9db93_77_get_cssName)
HXDLIN(  77)		return HX_("optionbox",b6,c1,6b,82);
            	}


void OptionBoxBuilder_obj::setSelection( ::haxe::ui::components::OptionBox optionbox,bool value,::hx::Null< bool >  __o_allowDeselection){
            		bool allowDeselection = __o_allowDeselection.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_bce5fa2e00c9db93_80_setSelection)
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		bool _hx_tmp1;
HXDLIN(  81)		if (::hx::IsNotNull( optionbox->get_componentGroup() )) {
HXLINE(  81)			_hx_tmp1 = (value == false);
            		}
            		else {
HXLINE(  81)			_hx_tmp1 = false;
            		}
HXDLIN(  81)		if (_hx_tmp1) {
HXLINE(  81)			_hx_tmp = (allowDeselection == false);
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			 ::haxe::ui::components::OptionBoxGroups arr = ::haxe::ui::components::OptionBoxGroups_obj::get_instance();
HXDLIN(  82)			::Array< ::Dynamic> arr1 = arr->get(optionbox->get_componentGroup());
HXLINE(  83)			bool hasSelection = false;
HXLINE(  84)			if (::hx::IsNotNull( arr1 )) {
HXLINE(  85)				int _g = 0;
HXDLIN(  85)				while((_g < arr1->length)){
HXLINE(  85)					 ::haxe::ui::components::OptionBox option = arr1->__get(_g).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN(  85)					_g = (_g + 1);
HXLINE(  86)					bool _hx_tmp;
HXDLIN(  86)					if (::hx::IsInstanceNotEq( option,optionbox )) {
HXLINE(  86)						_hx_tmp = (option->get_selected() == true);
            					}
            					else {
HXLINE(  86)						_hx_tmp = false;
            					}
HXDLIN(  86)					if (_hx_tmp) {
HXLINE(  87)						hasSelection = true;
HXLINE(  88)						goto _hx_goto_2;
            					}
            				}
            				_hx_goto_2:;
            			}
HXLINE(  92)			bool _hx_tmp;
HXDLIN(  92)			if ((hasSelection == false)) {
HXLINE(  92)				_hx_tmp = (allowDeselection == false);
            			}
            			else {
HXLINE(  92)				_hx_tmp = false;
            			}
HXDLIN(  92)			if (_hx_tmp) {
HXLINE(  93)				 ::haxe::ui::behaviours::Behaviours optionbox1 = optionbox->behaviours;
HXDLIN(  93)				optionbox1->softSet(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
HXLINE(  94)				return;
            			}
            		}
HXLINE(  98)		bool _hx_tmp2;
HXDLIN(  98)		if (::hx::IsNotNull( optionbox->get_componentGroup() )) {
HXLINE(  98)			_hx_tmp2 = (value == true);
            		}
            		else {
HXLINE(  98)			_hx_tmp2 = false;
            		}
HXDLIN(  98)		if (_hx_tmp2) {
HXLINE(  99)			 ::haxe::ui::components::OptionBoxGroups arr = ::haxe::ui::components::OptionBoxGroups_obj::get_instance();
HXDLIN(  99)			::Array< ::Dynamic> arr1 = arr->get(optionbox->get_componentGroup());
HXLINE( 100)			if (::hx::IsNotNull( arr1 )) {
HXLINE( 101)				int _g = 0;
HXDLIN( 101)				while((_g < arr1->length)){
HXLINE( 101)					 ::haxe::ui::components::OptionBox option = arr1->__get(_g).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN( 101)					_g = (_g + 1);
HXLINE( 102)					if (::hx::IsInstanceNotEq( option,optionbox )) {
HXLINE( 103)						option->set_selected(false);
            					}
            				}
            			}
            		}
HXLINE( 109)		bool _hx_tmp3;
HXDLIN( 109)		if ((allowDeselection == true)) {
HXLINE( 109)			_hx_tmp3 = (value == false);
            		}
            		else {
HXLINE( 109)			_hx_tmp3 = false;
            		}
HXDLIN( 109)		if (_hx_tmp3) {
HXLINE( 110)			 ::haxe::ui::behaviours::Behaviours optionbox1 = optionbox->behaviours;
HXDLIN( 110)			optionbox1->softSet(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
            		}
HXLINE( 113)		 ::haxe::ui::components::CheckBoxValue valueComponent = optionbox->findComponent(HX_("optionbox-value",5a,aa,3c,13),::hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBoxValue >();
HXLINE( 114)		if (::hx::IsNull( valueComponent )) {
HXLINE( 115)			return;
            		}
HXLINE( 117)		valueComponent->createIcon();
HXLINE( 118)		if ((value == true)) {
HXLINE( 119)			valueComponent->addClass(HX_(":selected",95,f4,1e,7c),null(),null());
HXLINE( 120)			optionbox->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            		else {
HXLINE( 122)			valueComponent->removeClass(HX_(":selected",95,f4,1e,7c),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(OptionBoxBuilder_obj,setSelection,(void))

void OptionBoxBuilder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bce5fa2e00c9db93_126_destroy)
HXLINE( 127)		this->super::destroy();
HXLINE( 128)		 ::haxe::ui::components::OptionBox optionbox = ::hx::TCast<  ::haxe::ui::components::OptionBox >::cast(this->_component);
HXLINE( 129)		 ::haxe::ui::components::OptionBoxGroups _hx_tmp = ::haxe::ui::components::OptionBoxGroups_obj::get_instance();
HXDLIN( 129)		_hx_tmp->remove(optionbox->get_componentGroup(),optionbox);
            	}



::hx::ObjectPtr< OptionBoxBuilder_obj > OptionBoxBuilder_obj::__new( ::haxe::ui::components::CheckBox checkbox) {
	::hx::ObjectPtr< OptionBoxBuilder_obj > __this = new OptionBoxBuilder_obj();
	__this->__construct(checkbox);
	return __this;
}

::hx::ObjectPtr< OptionBoxBuilder_obj > OptionBoxBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::CheckBox checkbox) {
	OptionBoxBuilder_obj *__this = (OptionBoxBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionBoxBuilder_obj), true, "haxe.ui.components.OptionBoxBuilder"));
	*(void **)__this = OptionBoxBuilder_obj::_hx_vtable;
	__this->__construct(checkbox);
	return __this;
}

OptionBoxBuilder_obj::OptionBoxBuilder_obj()
{
}

::hx::Val OptionBoxBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setSelection") ) { return ::hx::Val( setSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OptionBoxBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OptionBoxBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionBoxBuilder_obj_sMemberFields[] = {
	HX_("get_cssName",c5,1f,bf,00),
	HX_("setSelection",4a,b8,6a,b2),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class OptionBoxBuilder_obj::__mClass;

void OptionBoxBuilder_obj::__register()
{
	OptionBoxBuilder_obj _hx_dummy;
	OptionBoxBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.OptionBoxBuilder",cb,70,72,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionBoxBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionBoxBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBoxBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBoxBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
