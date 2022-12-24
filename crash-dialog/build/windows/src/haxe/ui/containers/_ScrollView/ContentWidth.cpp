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
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentWidth
#include <haxe/ui/containers/_ScrollView/ContentWidth.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_82f5e257b580f199_214_new,"haxe.ui.containers._ScrollView.ContentWidth","new",0xf5d87966,"haxe.ui.containers._ScrollView.ContentWidth.new","haxe/ui/containers/ScrollView.hx",214,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_82f5e257b580f199_215_get,"haxe.ui.containers._ScrollView.ContentWidth","get",0xf5d3299c,"haxe.ui.containers._ScrollView.ContentWidth.get","haxe/ui/containers/ScrollView.hx",215,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_82f5e257b580f199_223_set,"haxe.ui.containers._ScrollView.ContentWidth","set",0xf5dc44a8,"haxe.ui.containers._ScrollView.ContentWidth.set","haxe/ui/containers/ScrollView.hx",223,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void ContentWidth_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_82f5e257b580f199_214_new)
HXDLIN( 214)		super::__construct(component);
            	}

Dynamic ContentWidth_obj::__CreateEmpty() { return new ContentWidth_obj; }

void *ContentWidth_obj::_hx_vtable = 0;

Dynamic ContentWidth_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ContentWidth_obj > _hx_result = new ContentWidth_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ContentWidth_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c9a6ef2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2c9a6ef2;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType ContentWidth_obj::get(){
            	HX_STACKFRAME(&_hx_pos_82f5e257b580f199_215_get)
HXLINE( 216)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 217)		if (::hx::IsNull( contents )) {
HXLINE( 218)			return null();
            		}
HXLINE( 220)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(contents->get_width()) ));
            	}


void ContentWidth_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_82f5e257b580f199_223_set)
HXLINE( 224)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 225)		if (::hx::IsNotNull( contents )) {
HXLINE( 226)			contents->set_percentWidth(null());
HXLINE( 227)			contents->set_width(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value));
            		}
            	}



::hx::ObjectPtr< ContentWidth_obj > ContentWidth_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ContentWidth_obj > __this = new ContentWidth_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ContentWidth_obj > ContentWidth_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ContentWidth_obj *__this = (ContentWidth_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ContentWidth_obj), true, "haxe.ui.containers._ScrollView.ContentWidth"));
	*(void **)__this = ContentWidth_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ContentWidth_obj::ContentWidth_obj()
{
}

::hx::Val ContentWidth_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ContentWidth_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ContentWidth_obj_sStaticStorageInfo = 0;
#endif

static ::String ContentWidth_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class ContentWidth_obj::__mClass;

void ContentWidth_obj::__register()
{
	ContentWidth_obj _hx_dummy;
	ContentWidth_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.ContentWidth",74,8e,42,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ContentWidth_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ContentWidth_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContentWidth_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContentWidth_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
