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
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_ClearNodes
#include <haxe/ui/containers/_TreeView/ClearNodes.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccfccb9150134ce8_143_new,"haxe.ui.containers._TreeView.ClearNodes","new",0x9001cb0c,"haxe.ui.containers._TreeView.ClearNodes.new","haxe/ui/containers/TreeView.hx",143,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_ccfccb9150134ce8_144_call,"haxe.ui.containers._TreeView.ClearNodes","call",0x6a477472,"haxe.ui.containers._TreeView.ClearNodes.call","haxe/ui/containers/TreeView.hx",144,0xc7a0e210)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeView{

void ClearNodes_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ccfccb9150134ce8_143_new)
HXDLIN( 143)		super::__construct(component);
            	}

Dynamic ClearNodes_obj::__CreateEmpty() { return new ClearNodes_obj; }

void *ClearNodes_obj::_hx_vtable = 0;

Dynamic ClearNodes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClearNodes_obj > _hx_result = new ClearNodes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ClearNodes_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33c87ab6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x33c87ab6;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType ClearNodes_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_ccfccb9150134ce8_144_call)
HXLINE( 145)		 ::haxe::ui::containers::TreeView treeview = ::hx::TCast<  ::haxe::ui::containers::TreeView >::cast(this->_component);
HXLINE( 146)		treeview->set_selectedNode(null());
HXLINE( 147)		::Array< ::Dynamic> nodes = treeview->findComponents(null(),::hx::ClassOf< ::haxe::ui::containers::TreeViewNode >(),3);
HXLINE( 148)		{
HXLINE( 148)			int _g = 0;
HXDLIN( 148)			while((_g < nodes->length)){
HXLINE( 148)				 ::haxe::ui::containers::TreeViewNode n = nodes->__get(_g).StaticCast<  ::haxe::ui::containers::TreeViewNode >();
HXDLIN( 148)				_g = (_g + 1);
HXLINE( 149)				treeview->removeComponent(n,null(),null());
            			}
            		}
HXLINE( 151)		return null();
            	}



::hx::ObjectPtr< ClearNodes_obj > ClearNodes_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ClearNodes_obj > __this = new ClearNodes_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ClearNodes_obj > ClearNodes_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ClearNodes_obj *__this = (ClearNodes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClearNodes_obj), true, "haxe.ui.containers._TreeView.ClearNodes"));
	*(void **)__this = ClearNodes_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ClearNodes_obj::ClearNodes_obj()
{
}

::hx::Val ClearNodes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClearNodes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ClearNodes_obj_sStaticStorageInfo = 0;
#endif

static ::String ClearNodes_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class ClearNodes_obj::__mClass;

void ClearNodes_obj::__register()
{
	ClearNodes_obj _hx_dummy;
	ClearNodes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeView.ClearNodes",1a,95,6c,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClearNodes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClearNodes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClearNodes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClearNodes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeView
