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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeEvents
#include <haxe/ui/containers/_TreeViewNode/TreeViewNodeEvents.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5c034a44b24c866b_222_new,"haxe.ui.containers._TreeViewNode.TreeViewNodeEvents","new",0xc5e9c844,"haxe.ui.containers._TreeViewNode.TreeViewNodeEvents.new","haxe/ui/containers/TreeViewNode.hx",222,0x9b33be2e)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeViewNode{

void TreeViewNodeEvents_obj::__construct( ::haxe::ui::containers::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_5c034a44b24c866b_222_new)
HXLINE( 223)		super::__construct(node);
HXLINE( 224)		this->_node = node;
            	}

Dynamic TreeViewNodeEvents_obj::__CreateEmpty() { return new TreeViewNodeEvents_obj; }

void *TreeViewNodeEvents_obj::_hx_vtable = 0;

Dynamic TreeViewNodeEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewNodeEvents_obj > _hx_result = new TreeViewNodeEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewNodeEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x157e672a;
	}
}


::hx::ObjectPtr< TreeViewNodeEvents_obj > TreeViewNodeEvents_obj::__new( ::haxe::ui::containers::TreeViewNode node) {
	::hx::ObjectPtr< TreeViewNodeEvents_obj > __this = new TreeViewNodeEvents_obj();
	__this->__construct(node);
	return __this;
}

::hx::ObjectPtr< TreeViewNodeEvents_obj > TreeViewNodeEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeViewNode node) {
	TreeViewNodeEvents_obj *__this = (TreeViewNodeEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewNodeEvents_obj), true, "haxe.ui.containers._TreeViewNode.TreeViewNodeEvents"));
	*(void **)__this = TreeViewNodeEvents_obj::_hx_vtable;
	__this->__construct(node);
	return __this;
}

TreeViewNodeEvents_obj::TreeViewNodeEvents_obj()
{
}

void TreeViewNodeEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewNodeEvents);
	HX_MARK_MEMBER_NAME(_node,"_node");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewNodeEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_node,"_node");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewNodeEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_node") ) { return ::hx::Val( _node ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewNodeEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_node") ) { _node=inValue.Cast<  ::haxe::ui::containers::TreeViewNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewNodeEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_node",e1,25,1b,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewNodeEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeViewNode */ ,(int)offsetof(TreeViewNodeEvents_obj,_node),HX_("_node",e1,25,1b,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewNodeEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewNodeEvents_obj_sMemberFields[] = {
	HX_("_node",e1,25,1b,fc),
	::String(null()) };

::hx::Class TreeViewNodeEvents_obj::__mClass;

void TreeViewNodeEvents_obj::__register()
{
	TreeViewNodeEvents_obj _hx_dummy;
	TreeViewNodeEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeViewNode.TreeViewNodeEvents",52,96,cf,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewNodeEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewNodeEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewNodeEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewNodeEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeViewNode
