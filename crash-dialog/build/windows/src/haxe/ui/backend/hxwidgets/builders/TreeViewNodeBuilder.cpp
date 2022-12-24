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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewNodeBuilder
#include <haxe/ui/backend/hxwidgets/builders/TreeViewNodeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode
#include <haxe/ui/backend/hxwidgets/custom/TreeViewNode.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4496632dccc01a61_8_new,"haxe.ui.backend.hxwidgets.builders.TreeViewNodeBuilder","new",0x66e57f4d,"haxe.ui.backend.hxwidgets.builders.TreeViewNodeBuilder.new","haxe/ui/backend/hxwidgets/builders/TreeViewNodeBuilder.hx",8,0x146931e2)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void TreeViewNodeBuilder_obj::__construct( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_4496632dccc01a61_8_new)
HXLINE(   9)		super::__construct(node);
HXLINE(  10)		this->_node = node;
            	}

Dynamic TreeViewNodeBuilder_obj::__CreateEmpty() { return new TreeViewNodeBuilder_obj; }

void *TreeViewNodeBuilder_obj::_hx_vtable = 0;

Dynamic TreeViewNodeBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewNodeBuilder_obj > _hx_result = new TreeViewNodeBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewNodeBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x6949cd99;
	}
}


::hx::ObjectPtr< TreeViewNodeBuilder_obj > TreeViewNodeBuilder_obj::__new( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node) {
	::hx::ObjectPtr< TreeViewNodeBuilder_obj > __this = new TreeViewNodeBuilder_obj();
	__this->__construct(node);
	return __this;
}

::hx::ObjectPtr< TreeViewNodeBuilder_obj > TreeViewNodeBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node) {
	TreeViewNodeBuilder_obj *__this = (TreeViewNodeBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewNodeBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.TreeViewNodeBuilder"));
	*(void **)__this = TreeViewNodeBuilder_obj::_hx_vtable;
	__this->__construct(node);
	return __this;
}

TreeViewNodeBuilder_obj::TreeViewNodeBuilder_obj()
{
}

void TreeViewNodeBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewNodeBuilder);
	HX_MARK_MEMBER_NAME(_node,"_node");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewNodeBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_node,"_node");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewNodeBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_node") ) { return ::hx::Val( _node ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewNodeBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_node") ) { _node=inValue.Cast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewNodeBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_node",e1,25,1b,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewNodeBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode */ ,(int)offsetof(TreeViewNodeBuilder_obj,_node),HX_("_node",e1,25,1b,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewNodeBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewNodeBuilder_obj_sMemberFields[] = {
	HX_("_node",e1,25,1b,fc),
	::String(null()) };

::hx::Class TreeViewNodeBuilder_obj::__mClass;

void TreeViewNodeBuilder_obj::__register()
{
	TreeViewNodeBuilder_obj _hx_dummy;
	TreeViewNodeBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.TreeViewNodeBuilder",db,d4,6e,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewNodeBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewNodeBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewNodeBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewNodeBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
