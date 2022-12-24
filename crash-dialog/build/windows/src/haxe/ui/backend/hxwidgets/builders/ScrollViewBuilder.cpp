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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_ScrollViewBuilder
#include <haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_8_new,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","new",0xecf6b6a0,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.new","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",8,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_12_create,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","create",0xd20de8bc,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.create","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",12,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_15_addComponent,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","addComponent",0x7816641c,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.addComponent","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",15,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_22_addComponentAt,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","addComponentAt",0x758cdc2f,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.addComponentAt","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",22,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_29_removeComponent,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","removeComponent",0x08f5d219,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.removeComponent","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",29,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_37_getComponentIndex,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","getComponentIndex",0xd420528b,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.getComponentIndex","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",37,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_40_setComponentIndex,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","setComponentIndex",0xf78e2a97,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.setComponentIndex","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",40,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_48_getComponentAt,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","getComponentAt",0x675427da,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.getComponentAt","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",48,0xdac6b02f)
HX_LOCAL_STACK_FRAME(_hx_pos_1f9e7cb20887dbd5_53_createContentContainer,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder","createContentContainer",0x6cf0d5a4,"haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder.createContentContainer","haxe/ui/backend/hxwidgets/builders/ScrollViewBuilder.hx",53,0xdac6b02f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void ScrollViewBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic ScrollViewBuilder_obj::__CreateEmpty() { return new ScrollViewBuilder_obj; }

void *ScrollViewBuilder_obj::_hx_vtable = 0;

Dynamic ScrollViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewBuilder_obj > _hx_result = new ScrollViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x0fddd3ec;
	}
}

void ScrollViewBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_12_create)
HXDLIN(  12)		this->createContentContainer(HX_("vertical",76,bc,15,6a));
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_15_addComponent)
HXLINE(  16)		if (((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false)) {
HXLINE(  17)			return this->_contents->addComponent(child);
            		}
HXLINE(  19)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_22_addComponentAt)
HXLINE(  23)		if (((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false)) {
HXLINE(  24)			return this->_contents->addComponentAt(child,index);
            		}
HXLINE(  26)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_29_removeComponent)
HXLINE(  30)		if (((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false)) {
HXLINE(  31)			return this->_contents->removeComponent(child,dispose,invalidate);
            		}
HXLINE(  33)		return null();
            	}


int ScrollViewBuilder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_37_getComponentIndex)
HXDLIN(  37)		return this->_contents->getComponentIndex(child);
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_40_setComponentIndex)
HXLINE(  41)		if (((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false)) {
HXLINE(  42)			return this->_contents->setComponentIndex(child,index);
            		}
HXLINE(  44)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_48_getComponentAt)
HXDLIN(  48)		return this->_contents->getComponentAt(index);
            	}


void ScrollViewBuilder_obj::createContentContainer(::String layoutName){
            	HX_GC_STACKFRAME(&_hx_pos_1f9e7cb20887dbd5_53_createContentContainer)
HXDLIN(  53)		if (::hx::IsNull( this->_contents )) {
HXLINE(  54)			this->_contents =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE(  55)			this->_contents->addClass(HX_("scrollview-contents",15,b7,70,a7),null(),null());
HXLINE(  56)			this->_contents->set_id(HX_("scrollview-contents",15,b7,70,a7));
HXLINE(  57)			 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN(  57)			_hx_tmp->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(layoutName));
HXLINE(  58)			this->_component->addComponent(this->_contents);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewBuilder_obj,createContentContainer,(void))


::hx::ObjectPtr< ScrollViewBuilder_obj > ScrollViewBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ScrollViewBuilder_obj > __this = new ScrollViewBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ScrollViewBuilder_obj > ScrollViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ScrollViewBuilder_obj *__this = (ScrollViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder"));
	*(void **)__this = ScrollViewBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ScrollViewBuilder_obj::ScrollViewBuilder_obj()
{
}

void ScrollViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollViewBuilder);
	HX_MARK_MEMBER_NAME(_contents,"_contents");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_contents,"_contents");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { return ::hx::Val( _contents ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return ::hx::Val( createContentContainer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { _contents=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_contents",79,fc,b9,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(ScrollViewBuilder_obj,_contents),HX_("_contents",79,fc,b9,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollViewBuilder_obj_sMemberFields[] = {
	HX_("_contents",79,fc,b9,76),
	HX_("create",fc,66,0f,7c),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("createContentContainer",e4,d3,42,a7),
	::String(null()) };

::hx::Class ScrollViewBuilder_obj::__mClass;

void ScrollViewBuilder_obj::__register()
{
	ScrollViewBuilder_obj _hx_dummy;
	ScrollViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder",ae,26,f7,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
