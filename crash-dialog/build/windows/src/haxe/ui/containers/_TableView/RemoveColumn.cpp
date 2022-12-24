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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
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
#ifndef INCLUDED_haxe_ui_containers__TableView_RemoveColumn
#include <haxe/ui/containers/_TableView/RemoveColumn.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3ac0b4693b34d312_832_new,"haxe.ui.containers._TableView.RemoveColumn","new",0x258122fc,"haxe.ui.containers._TableView.RemoveColumn.new","haxe/ui/containers/TableView.hx",832,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac0b4693b34d312_833_call,"haxe.ui.containers._TableView.RemoveColumn","call",0xa4350e82,"haxe.ui.containers._TableView.RemoveColumn.call","haxe/ui/containers/TableView.hx",833,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void RemoveColumn_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3ac0b4693b34d312_832_new)
HXDLIN( 832)		super::__construct(component);
            	}

Dynamic RemoveColumn_obj::__CreateEmpty() { return new RemoveColumn_obj; }

void *RemoveColumn_obj::_hx_vtable = 0;

Dynamic RemoveColumn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RemoveColumn_obj > _hx_result = new RemoveColumn_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemoveColumn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02c20a96) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02c20a96;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType RemoveColumn_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_3ac0b4693b34d312_833_call)
HXLINE( 834)		 ::haxe::ui::containers::Header header = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 835)		if (::hx::IsNull( header )) {
HXLINE( 836)			return null();
            		}
HXLINE( 838)		{
HXLINE( 838)			int _g = 0;
HXDLIN( 838)			::Array< ::Dynamic> _g1 = header->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Column >(),null());
HXDLIN( 838)			while((_g < _g1->length)){
HXLINE( 838)				 ::haxe::ui::components::Column c = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Column >();
HXDLIN( 838)				_g = (_g + 1);
HXLINE( 839)				if (::hx::IsNull( c->get_id() )) {
HXLINE( 840)					continue;
            				}
HXLINE( 842)				if (::hx::IsEq( c->get_text(),param )) {
HXLINE( 843)					header->removeComponent(c,null(),null());
HXLINE( 844)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 847)		return null();
            	}



::hx::ObjectPtr< RemoveColumn_obj > RemoveColumn_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RemoveColumn_obj > __this = new RemoveColumn_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RemoveColumn_obj > RemoveColumn_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RemoveColumn_obj *__this = (RemoveColumn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RemoveColumn_obj), true, "haxe.ui.containers._TableView.RemoveColumn"));
	*(void **)__this = RemoveColumn_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RemoveColumn_obj::RemoveColumn_obj()
{
}

::hx::Val RemoveColumn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RemoveColumn_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RemoveColumn_obj_sStaticStorageInfo = 0;
#endif

static ::String RemoveColumn_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class RemoveColumn_obj::__mClass;

void RemoveColumn_obj::__register()
{
	RemoveColumn_obj _hx_dummy;
	RemoveColumn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.RemoveColumn",0a,35,85,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RemoveColumn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RemoveColumn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemoveColumn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemoveColumn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
