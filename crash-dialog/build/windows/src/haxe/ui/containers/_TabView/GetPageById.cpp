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
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_GetPageById
#include <haxe/ui/containers/_TabView/GetPageById.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2c295c255474b2f_241_new,"haxe.ui.containers._TabView.GetPageById","new",0x588194e0,"haxe.ui.containers._TabView.GetPageById.new","haxe/ui/containers/TabView.hx",241,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_d2c295c255474b2f_242_call,"haxe.ui.containers._TabView.GetPageById","call",0x1198441e,"haxe.ui.containers._TabView.GetPageById.call","haxe/ui/containers/TabView.hx",242,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void GetPageById_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d2c295c255474b2f_241_new)
HXDLIN( 241)		super::__construct(component);
            	}

Dynamic GetPageById_obj::__CreateEmpty() { return new GetPageById_obj; }

void *GetPageById_obj::_hx_vtable = 0;

Dynamic GetPageById_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GetPageById_obj > _hx_result = new GetPageById_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetPageById_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x369e70cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x369e70cc;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType GetPageById_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_d2c295c255474b2f_242_call)
HXLINE( 243)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 244)		::String id = ( (::String)(param) );
HXLINE( 245)		 ::haxe::ui::core::Component page = null();
HXLINE( 246)		{
HXLINE( 246)			int _g = 0;
HXDLIN( 246)			::Array< ::Dynamic> _g1 = builder->_views;
HXDLIN( 246)			while((_g < _g1->length)){
HXLINE( 246)				 ::haxe::ui::core::Component view = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 246)				_g = (_g + 1);
HXLINE( 247)				if ((view->get_id() == id)) {
HXLINE( 248)					page = view;
HXLINE( 249)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 252)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(page);
            	}



::hx::ObjectPtr< GetPageById_obj > GetPageById_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GetPageById_obj > __this = new GetPageById_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GetPageById_obj > GetPageById_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GetPageById_obj *__this = (GetPageById_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GetPageById_obj), true, "haxe.ui.containers._TabView.GetPageById"));
	*(void **)__this = GetPageById_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GetPageById_obj::GetPageById_obj()
{
}

::hx::Val GetPageById_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GetPageById_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GetPageById_obj_sStaticStorageInfo = 0;
#endif

static ::String GetPageById_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class GetPageById_obj::__mClass;

void GetPageById_obj::__register()
{
	GetPageById_obj _hx_dummy;
	GetPageById_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.GetPageById",ee,e4,a5,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GetPageById_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GetPageById_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetPageById_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetPageById_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
