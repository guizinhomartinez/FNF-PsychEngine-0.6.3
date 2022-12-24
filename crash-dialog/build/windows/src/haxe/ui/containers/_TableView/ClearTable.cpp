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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
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
#ifndef INCLUDED_haxe_ui_containers__TableView_ClearTable
#include <haxe/ui/containers/_TableView/ClearTable.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fe42cf05b4600f11_796_new,"haxe.ui.containers._TableView.ClearTable","new",0x4f0d6b83,"haxe.ui.containers._TableView.ClearTable.new","haxe/ui/containers/TableView.hx",796,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_fe42cf05b4600f11_797_call,"haxe.ui.containers._TableView.ClearTable","call",0xd5683c1b,"haxe.ui.containers._TableView.ClearTable.call","haxe/ui/containers/TableView.hx",797,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void ClearTable_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_fe42cf05b4600f11_796_new)
HXDLIN( 796)		super::__construct(component);
            	}

Dynamic ClearTable_obj::__CreateEmpty() { return new ClearTable_obj; }

void *ClearTable_obj::_hx_vtable = 0;

Dynamic ClearTable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClearTable_obj > _hx_result = new ClearTable_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ClearTable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x5e49c4e1;
	}
}

 ::haxe::ui::util::VariantType ClearTable_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_fe42cf05b4600f11_797_call)
HXLINE( 798)		if ((( (bool)(param) ) == true)) {
HXLINE( 799)			if (::hx::IsNotNull( ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component)->get_itemRenderer() )) {
HXLINE( 800)				::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component)->get_itemRenderer()->removeAllComponents(null());
            			}
HXLINE( 802)			 ::haxe::ui::containers::Header header = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 803)			if (::hx::IsNotNull( header )) {
HXLINE( 804)				header->removeAllComponents(null());
            			}
            		}
HXLINE( 807)		 ::haxe::ui::containers::Box contents = this->_component->findComponent(HX_("tableview-contents",74,2a,d3,78),::hx::ClassOf< ::haxe::ui::containers::Box >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE( 808)		if (::hx::IsNotNull( contents )) {
HXLINE( 809)			contents->removeAllComponents(null());
            		}
HXLINE( 811)		return null();
            	}



::hx::ObjectPtr< ClearTable_obj > ClearTable_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ClearTable_obj > __this = new ClearTable_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ClearTable_obj > ClearTable_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ClearTable_obj *__this = (ClearTable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClearTable_obj), true, "haxe.ui.containers._TableView.ClearTable"));
	*(void **)__this = ClearTable_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ClearTable_obj::ClearTable_obj()
{
}

::hx::Val ClearTable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClearTable_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ClearTable_obj_sStaticStorageInfo = 0;
#endif

static ::String ClearTable_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class ClearTable_obj::__mClass;

void ClearTable_obj::__register()
{
	ClearTable_obj _hx_dummy;
	ClearTable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.ClearTable",11,ee,72,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClearTable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClearTable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClearTable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClearTable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
