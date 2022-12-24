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
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectedItemsBehaviour
#include <haxe/ui/containers/_ListView/SelectedItemsBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b43f169593eea1e_524_new,"haxe.ui.containers._ListView.SelectedItemsBehaviour","new",0xdf94e180,"haxe.ui.containers._ListView.SelectedItemsBehaviour.new","haxe/ui/containers/ListView.hx",524,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_3b43f169593eea1e_525_get,"haxe.ui.containers._ListView.SelectedItemsBehaviour","get",0xdf8f91b6,"haxe.ui.containers._ListView.SelectedItemsBehaviour.get","haxe/ui/containers/ListView.hx",525,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_3b43f169593eea1e_544_set,"haxe.ui.containers._ListView.SelectedItemsBehaviour","set",0xdf98acc2,"haxe.ui.containers._ListView.SelectedItemsBehaviour.set","haxe/ui/containers/ListView.hx",544,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{
namespace _ListView{

void SelectedItemsBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3b43f169593eea1e_524_new)
HXDLIN( 524)		super::__construct(component);
            	}

Dynamic SelectedItemsBehaviour_obj::__CreateEmpty() { return new SelectedItemsBehaviour_obj; }

void *SelectedItemsBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedItemsBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedItemsBehaviour_obj > _hx_result = new SelectedItemsBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedItemsBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x10385d62) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x10385d62;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType SelectedItemsBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_3b43f169593eea1e_525_get)
HXLINE( 526)		 ::haxe::ui::containers::ListView listView = ::hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 527)		::Array< int > selectedIndices = listView->get_selectedIndices();
HXLINE( 528)		bool _hx_tmp;
HXDLIN( 528)		if (::hx::IsNotNull( selectedIndices )) {
HXLINE( 528)			_hx_tmp = (selectedIndices->length > 0);
            		}
            		else {
HXLINE( 528)			_hx_tmp = false;
            		}
HXDLIN( 528)		if (_hx_tmp) {
HXLINE( 529)			::cpp::VirtualArray selectedItems = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 530)			{
HXLINE( 530)				int _g = 0;
HXDLIN( 530)				while((_g < selectedIndices->length)){
HXLINE( 530)					int i = selectedIndices->__get(_g);
HXDLIN( 530)					_g = (_g + 1);
HXLINE( 531)					bool _hx_tmp;
HXDLIN( 531)					if ((i >= 0)) {
HXLINE( 531)						_hx_tmp = (i >= listView->get_dataSource()->get_size());
            					}
            					else {
HXLINE( 531)						_hx_tmp = true;
            					}
HXDLIN( 531)					if (_hx_tmp) {
HXLINE( 532)						continue;
            					}
HXLINE( 534)					 ::Dynamic data = listView->get_dataSource()->get(i);
HXLINE( 535)					selectedItems->push(data);
            				}
            			}
HXLINE( 538)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(selectedItems);
            		}
            		else {
HXLINE( 540)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(::cpp::VirtualArray_obj::__new(0));
            		}
HXLINE( 528)		return null();
            	}


void SelectedItemsBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_3b43f169593eea1e_544_set)
HXLINE( 545)		 ::haxe::ui::containers::ListView listView = ::hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 546)		::cpp::VirtualArray selectedItems = ::haxe::ui::util::_Variant::Variant_Impl__obj::toArray(value);
HXLINE( 547)		bool _hx_tmp;
HXDLIN( 547)		if (::hx::IsNotNull( selectedItems )) {
HXLINE( 547)			_hx_tmp = (selectedItems->get_length() > 0);
            		}
            		else {
HXLINE( 547)			_hx_tmp = false;
            		}
HXDLIN( 547)		if (_hx_tmp) {
HXLINE( 548)			::Array< int > selectedIndices = ::Array_obj< int >::__new(0);
HXLINE( 549)			int index;
HXLINE( 550)			{
HXLINE( 550)				int _g = 0;
HXDLIN( 550)				while((_g < selectedItems->get_length())){
HXLINE( 550)					 ::Dynamic item = selectedItems->__get(_g);
HXDLIN( 550)					_g = (_g + 1);
HXLINE( 551)					index = listView->get_dataSource()->indexOf(item);
HXDLIN( 551)					if ((index != -1)) {
HXLINE( 552)						selectedIndices->push(index);
            					}
            				}
            			}
HXLINE( 556)			listView->set_selectedIndices(selectedIndices);
            		}
            		else {
HXLINE( 558)			listView->set_selectedIndices(::Array_obj< int >::__new(0));
            		}
            	}



::hx::ObjectPtr< SelectedItemsBehaviour_obj > SelectedItemsBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedItemsBehaviour_obj > __this = new SelectedItemsBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedItemsBehaviour_obj > SelectedItemsBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedItemsBehaviour_obj *__this = (SelectedItemsBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedItemsBehaviour_obj), true, "haxe.ui.containers._ListView.SelectedItemsBehaviour"));
	*(void **)__this = SelectedItemsBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedItemsBehaviour_obj::SelectedItemsBehaviour_obj()
{
}

::hx::Val SelectedItemsBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedItemsBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedItemsBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedItemsBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectedItemsBehaviour_obj::__mClass;

void SelectedItemsBehaviour_obj::__register()
{
	SelectedItemsBehaviour_obj _hx_dummy;
	SelectedItemsBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ListView.SelectedItemsBehaviour",8e,61,ae,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedItemsBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedItemsBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedItemsBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedItemsBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ListView
