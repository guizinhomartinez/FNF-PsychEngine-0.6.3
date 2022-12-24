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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_containers__TableView_GetHeader
#include <haxe/ui/containers/_TableView/GetHeader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_08127a74ba1a8009_788_new,"haxe.ui.containers._TableView.GetHeader","new",0xe9db7c65,"haxe.ui.containers._TableView.GetHeader.new","haxe/ui/containers/TableView.hx",788,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_08127a74ba1a8009_789_get,"haxe.ui.containers._TableView.GetHeader","get",0xe9d62c9b,"haxe.ui.containers._TableView.GetHeader.get","haxe/ui/containers/TableView.hx",789,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void GetHeader_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_08127a74ba1a8009_788_new)
HXDLIN( 788)		super::__construct(component);
            	}

Dynamic GetHeader_obj::__CreateEmpty() { return new GetHeader_obj; }

void *GetHeader_obj::_hx_vtable = 0;

Dynamic GetHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GetHeader_obj > _hx_result = new GetHeader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetHeader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x47455b5b) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x47455b5b;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType GetHeader_obj::get(){
            	HX_STACKFRAME(&_hx_pos_08127a74ba1a8009_789_get)
HXLINE( 790)		 ::haxe::ui::containers::Header header = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 791)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(header);
            	}



::hx::ObjectPtr< GetHeader_obj > GetHeader_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GetHeader_obj > __this = new GetHeader_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GetHeader_obj > GetHeader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GetHeader_obj *__this = (GetHeader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GetHeader_obj), true, "haxe.ui.containers._TableView.GetHeader"));
	*(void **)__this = GetHeader_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GetHeader_obj::GetHeader_obj()
{
}

::hx::Val GetHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GetHeader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GetHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String GetHeader_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class GetHeader_obj::__mClass;

void GetHeader_obj::__register()
{
	GetHeader_obj _hx_dummy;
	GetHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.GetHeader",f3,65,2a,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GetHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GetHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
