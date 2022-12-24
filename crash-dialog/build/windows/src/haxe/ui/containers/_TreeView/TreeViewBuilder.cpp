#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_TreeViewBuilder
#include <haxe/ui/containers/_TreeView/TreeViewBuilder.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d4ba6b911092ab06_223_new,"haxe.ui.containers._TreeView.TreeViewBuilder","new",0xc4222ef4,"haxe.ui.containers._TreeView.TreeViewBuilder.new","haxe/ui/containers/TreeView.hx",223,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ba6b911092ab06_228_addComponent,"haxe.ui.containers._TreeView.TreeViewBuilder","addComponent",0xe42b4148,"haxe.ui.containers._TreeView.TreeViewBuilder.addComponent","haxe/ui/containers/TreeView.hx",228,0xc7a0e210)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeView{

void TreeViewBuilder_obj::__construct( ::haxe::ui::containers::TreeView treeview){
            	HX_STACKFRAME(&_hx_pos_d4ba6b911092ab06_223_new)
HXLINE( 224)		super::__construct(treeview);
HXLINE( 225)		this->_treeview = treeview;
            	}

Dynamic TreeViewBuilder_obj::__CreateEmpty() { return new TreeViewBuilder_obj; }

void *TreeViewBuilder_obj::_hx_vtable = 0;

Dynamic TreeViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewBuilder_obj > _hx_result = new TreeViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17e93bfd) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x17e93bfd;
		}
	} else {
		return inClassId==(int)0x26693082;
	}
}

 ::haxe::ui::core::Component TreeViewBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_d4ba6b911092ab06_228_addComponent)
HXLINE( 229)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 230)			if (::hx::IsNull( child->get_id() )) {
HXLINE( 231)				this->_treeview->_itemRenderer = ( ( ::haxe::ui::core::ItemRenderer)(child) );
            			}
            			else {
HXLINE( 232)				if ((child->get_id() == HX_("expandable",f4,90,fa,55))) {
HXLINE( 233)					this->_treeview->_expandableItemRenderer = ( ( ::haxe::ui::core::ItemRenderer)(child) );
            				}
            			}
HXLINE( 235)			return child;
            		}
HXLINE( 237)		return this->super::addComponent(child);
            	}



::hx::ObjectPtr< TreeViewBuilder_obj > TreeViewBuilder_obj::__new( ::haxe::ui::containers::TreeView treeview) {
	::hx::ObjectPtr< TreeViewBuilder_obj > __this = new TreeViewBuilder_obj();
	__this->__construct(treeview);
	return __this;
}

::hx::ObjectPtr< TreeViewBuilder_obj > TreeViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeView treeview) {
	TreeViewBuilder_obj *__this = (TreeViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewBuilder_obj), true, "haxe.ui.containers._TreeView.TreeViewBuilder"));
	*(void **)__this = TreeViewBuilder_obj::_hx_vtable;
	__this->__construct(treeview);
	return __this;
}

TreeViewBuilder_obj::TreeViewBuilder_obj()
{
}

void TreeViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewBuilder);
	HX_MARK_MEMBER_NAME(_treeview,"_treeview");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_treeview,"_treeview");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { return ::hx::Val( _treeview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { _treeview=inValue.Cast<  ::haxe::ui::containers::TreeView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_treeview",22,ca,d3,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeView */ ,(int)offsetof(TreeViewBuilder_obj,_treeview),HX_("_treeview",22,ca,d3,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewBuilder_obj_sMemberFields[] = {
	HX_("_treeview",22,ca,d3,8e),
	HX_("addComponent",5c,12,a8,0e),
	::String(null()) };

::hx::Class TreeViewBuilder_obj::__mClass;

void TreeViewBuilder_obj::__register()
{
	TreeViewBuilder_obj _hx_dummy;
	TreeViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeView.TreeViewBuilder",02,e5,c2,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeView
