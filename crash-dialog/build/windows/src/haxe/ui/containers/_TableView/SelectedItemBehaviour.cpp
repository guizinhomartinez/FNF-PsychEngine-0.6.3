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
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_SelectedItemBehaviour
#include <haxe/ui/containers/_TableView/SelectedItemBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92446cbdf73105b9_665_new,"haxe.ui.containers._TableView.SelectedItemBehaviour","new",0x286102f1,"haxe.ui.containers._TableView.SelectedItemBehaviour.new","haxe/ui/containers/TableView.hx",665,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_92446cbdf73105b9_666_getDynamic,"haxe.ui.containers._TableView.SelectedItemBehaviour","getDynamic",0x68e6d718,"haxe.ui.containers._TableView.SelectedItemBehaviour.getDynamic","haxe/ui/containers/TableView.hx",666,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_92446cbdf73105b9_672_set,"haxe.ui.containers._TableView.SelectedItemBehaviour","set",0x2864ce33,"haxe.ui.containers._TableView.SelectedItemBehaviour.set","haxe/ui/containers/TableView.hx",672,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void SelectedItemBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_92446cbdf73105b9_665_new)
HXDLIN( 665)		super::__construct(component);
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
	if (inClassId<=(int)0x01eb9e1f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01eb9e1f;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::Dynamic SelectedItemBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_92446cbdf73105b9_666_getDynamic)
HXLINE( 667)		 ::haxe::ui::containers::TableView tableView = ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 668)		::Array< int > selectedIndices = tableView->get_selectedIndices();
HXLINE( 669)		if ((selectedIndices->length > 0)) {
HXLINE( 669)			 ::haxe::ui::data::DataSource _hx_tmp = tableView->get_dataSource();
HXDLIN( 669)			return _hx_tmp->get(selectedIndices->__get((selectedIndices->length - 1)));
            		}
            		else {
HXLINE( 669)			return null();
            		}
HXDLIN( 669)		return null();
            	}


void SelectedItemBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_92446cbdf73105b9_672_set)
HXLINE( 673)		 ::haxe::ui::containers::TableView tableView = ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 674)		int index = tableView->get_dataSource()->indexOf(value);
HXLINE( 675)		bool _hx_tmp;
HXDLIN( 675)		if ((index != -1)) {
HXLINE( 675)			_hx_tmp = (tableView->get_selectedIndices()->indexOf(index,null()) == -1);
            		}
            		else {
HXLINE( 675)			_hx_tmp = false;
            		}
HXDLIN( 675)		if (_hx_tmp) {
HXLINE( 676)			tableView->set_selectedIndices(::Array_obj< int >::__new(1)->init(0,index));
            		}
            	}



::hx::ObjectPtr< SelectedItemBehaviour_obj > SelectedItemBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedItemBehaviour_obj > __this = new SelectedItemBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedItemBehaviour_obj > SelectedItemBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedItemBehaviour_obj *__this = (SelectedItemBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedItemBehaviour_obj), true, "haxe.ui.containers._TableView.SelectedItemBehaviour"));
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
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedItemBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedItemBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedItemBehaviour_obj_sMemberFields[] = {
	HX_("getDynamic",89,25,77,85),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectedItemBehaviour_obj::__mClass;

void SelectedItemBehaviour_obj::__register()
{
	SelectedItemBehaviour_obj _hx_dummy;
	SelectedItemBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.SelectedItemBehaviour",7f,b6,2e,cd);
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
} // end namespace containers
} // end namespace _TableView
