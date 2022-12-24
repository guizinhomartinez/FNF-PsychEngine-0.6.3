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
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15a47639f8c9edc4_10_new,"haxe.ui.core.CompositeBuilder","new",0xa3dc5703,"haxe.ui.core.CompositeBuilder.new","haxe/ui/core/CompositeBuilder.hx",10,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_13_create,"haxe.ui.core.CompositeBuilder","create",0xbbdc6839,"haxe.ui.core.CompositeBuilder.create","haxe/ui/core/CompositeBuilder.hx",13,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_16_destroy,"haxe.ui.core.CompositeBuilder","destroy",0xb81a411d,"haxe.ui.core.CompositeBuilder.destroy","haxe/ui/core/CompositeBuilder.hx",16,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_19_onInitialize,"haxe.ui.core.CompositeBuilder","onInitialize",0xda9fe04c,"haxe.ui.core.CompositeBuilder.onInitialize","haxe/ui/core/CompositeBuilder.hx",19,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_22_onReady,"haxe.ui.core.CompositeBuilder","onReady",0x108c52e7,"haxe.ui.core.CompositeBuilder.onReady","haxe/ui/core/CompositeBuilder.hx",22,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_26_show,"haxe.ui.core.CompositeBuilder","show",0xc0401cfa,"haxe.ui.core.CompositeBuilder.show","haxe/ui/core/CompositeBuilder.hx",26,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_30_hide,"haxe.ui.core.CompositeBuilder","hide",0xb8fb7cbf,"haxe.ui.core.CompositeBuilder.hide","haxe/ui/core/CompositeBuilder.hx",30,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_35_get_numComponents,"haxe.ui.core.CompositeBuilder","get_numComponents",0x8e843436,"haxe.ui.core.CompositeBuilder.get_numComponents","haxe/ui/core/CompositeBuilder.hx",35,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_40_get_cssName,"haxe.ui.core.CompositeBuilder","get_cssName",0x18f38168,"haxe.ui.core.CompositeBuilder.get_cssName","haxe/ui/core/CompositeBuilder.hx",40,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_44_addComponent,"haxe.ui.core.CompositeBuilder","addComponent",0x24491f59,"haxe.ui.core.CompositeBuilder.addComponent","haxe/ui/core/CompositeBuilder.hx",44,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_48_addComponentAt,"haxe.ui.core.CompositeBuilder","addComponentAt",0xa052a0ac,"haxe.ui.core.CompositeBuilder.addComponentAt","haxe/ui/core/CompositeBuilder.hx",48,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_52_removeComponent,"haxe.ui.core.CompositeBuilder","removeComponent",0x4b3bfafc,"haxe.ui.core.CompositeBuilder.removeComponent","haxe/ui/core/CompositeBuilder.hx",52,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_56_removeComponentAt,"haxe.ui.core.CompositeBuilder","removeComponentAt",0x8e6deb0f,"haxe.ui.core.CompositeBuilder.removeComponentAt","haxe/ui/core/CompositeBuilder.hx",56,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_60_removeAllComponents,"haxe.ui.core.CompositeBuilder","removeAllComponents",0x714a5b56,"haxe.ui.core.CompositeBuilder.removeAllComponents","haxe/ui/core/CompositeBuilder.hx",60,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_64_getComponentIndex,"haxe.ui.core.CompositeBuilder","getComponentIndex",0xd2ecba2e,"haxe.ui.core.CompositeBuilder.getComponentIndex","haxe/ui/core/CompositeBuilder.hx",64,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_68_setComponentIndex,"haxe.ui.core.CompositeBuilder","setComponentIndex",0xf65a923a,"haxe.ui.core.CompositeBuilder.setComponentIndex","haxe/ui/core/CompositeBuilder.hx",68,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_72_getComponentAt,"haxe.ui.core.CompositeBuilder","getComponentAt",0x9219ec57,"haxe.ui.core.CompositeBuilder.getComponentAt","haxe/ui/core/CompositeBuilder.hx",72,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_76_validateComponentLayout,"haxe.ui.core.CompositeBuilder","validateComponentLayout",0x4989d974,"haxe.ui.core.CompositeBuilder.validateComponentLayout","haxe/ui/core/CompositeBuilder.hx",76,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_79_validateComponentData,"haxe.ui.core.CompositeBuilder","validateComponentData",0xabf35a74,"haxe.ui.core.CompositeBuilder.validateComponentData","haxe/ui/core/CompositeBuilder.hx",79,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_83_applyStyle,"haxe.ui.core.CompositeBuilder","applyStyle",0x5fc204a0,"haxe.ui.core.CompositeBuilder.applyStyle","haxe/ui/core/CompositeBuilder.hx",83,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_86_onComponentAdded,"haxe.ui.core.CompositeBuilder","onComponentAdded",0xed1863bf,"haxe.ui.core.CompositeBuilder.onComponentAdded","haxe/ui/core/CompositeBuilder.hx",86,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_89_onComponentRemoved,"haxe.ui.core.CompositeBuilder","onComponentRemoved",0x0d55ac5f,"haxe.ui.core.CompositeBuilder.onComponentRemoved","haxe/ui/core/CompositeBuilder.hx",89,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_92_findComponent,"haxe.ui.core.CompositeBuilder","findComponent",0xc75001a7,"haxe.ui.core.CompositeBuilder.findComponent","haxe/ui/core/CompositeBuilder.hx",92,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_102_findComponents,"haxe.ui.core.CompositeBuilder","findComponents",0x9eb170ec,"haxe.ui.core.CompositeBuilder.findComponents","haxe/ui/core/CompositeBuilder.hx",102,0xba8f750c)
HX_LOCAL_STACK_FRAME(_hx_pos_15a47639f8c9edc4_107_get_isComponentClipped,"haxe.ui.core.CompositeBuilder","get_isComponentClipped",0x8a2d3152,"haxe.ui.core.CompositeBuilder.get_isComponentClipped","haxe/ui/core/CompositeBuilder.hx",107,0xba8f750c)
namespace haxe{
namespace ui{
namespace core{

void CompositeBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_10_new)
HXDLIN(  10)		this->_component = component;
            	}

Dynamic CompositeBuilder_obj::__CreateEmpty() { return new CompositeBuilder_obj; }

void *CompositeBuilder_obj::_hx_vtable = 0;

Dynamic CompositeBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompositeBuilder_obj > _hx_result = new CompositeBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CompositeBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
}

void CompositeBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_13_create)
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,create,(void))

void CompositeBuilder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_16_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,destroy,(void))

void CompositeBuilder_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_19_onInitialize)
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,onInitialize,(void))

void CompositeBuilder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_22_onReady)
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,onReady,(void))

bool CompositeBuilder_obj::show(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_26_show)
HXDLIN(  26)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,show,return )

bool CompositeBuilder_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_30_hide)
HXDLIN(  30)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,hide,return )

 ::Dynamic CompositeBuilder_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_35_get_numComponents)
HXDLIN(  35)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,get_numComponents,return )

::String CompositeBuilder_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_40_get_cssName)
HXDLIN(  40)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,get_cssName,return )

 ::haxe::ui::core::Component CompositeBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_44_addComponent)
HXDLIN(  44)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeBuilder_obj,addComponent,return )

 ::haxe::ui::core::Component CompositeBuilder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_48_addComponentAt)
HXDLIN(  48)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompositeBuilder_obj,addComponentAt,return )

 ::haxe::ui::core::Component CompositeBuilder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_52_removeComponent)
HXDLIN(  52)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(CompositeBuilder_obj,removeComponent,return )

 ::haxe::ui::core::Component CompositeBuilder_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_56_removeComponentAt)
HXDLIN(  56)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(CompositeBuilder_obj,removeComponentAt,return )

bool CompositeBuilder_obj::removeAllComponents(::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_60_removeAllComponents)
HXDLIN(  60)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeBuilder_obj,removeAllComponents,return )

int CompositeBuilder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_64_getComponentIndex)
HXDLIN(  64)		return (int)-2147483648;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeBuilder_obj,getComponentIndex,return )

 ::haxe::ui::core::Component CompositeBuilder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_68_setComponentIndex)
HXDLIN(  68)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompositeBuilder_obj,setComponentIndex,return )

 ::haxe::ui::core::Component CompositeBuilder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_72_getComponentAt)
HXDLIN(  72)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeBuilder_obj,getComponentAt,return )

bool CompositeBuilder_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_76_validateComponentLayout)
HXDLIN(  76)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,validateComponentLayout,return )

void CompositeBuilder_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_79_validateComponentData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,validateComponentData,(void))

void CompositeBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_83_applyStyle)
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeBuilder_obj,applyStyle,(void))

void CompositeBuilder_obj::onComponentAdded( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_86_onComponentAdded)
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeBuilder_obj,onComponentAdded,(void))

void CompositeBuilder_obj::onComponentRemoved( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_89_onComponentRemoved)
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeBuilder_obj,onComponentRemoved,(void))

 ::Dynamic CompositeBuilder_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_92_findComponent)
HXLINE(  93)		{
HXLINE(  93)			int _g = 0;
HXDLIN(  93)			 ::Dynamic _g1 = this->get_numComponents();
HXDLIN(  93)			while(::hx::IsLess( _g,_g1 )){
HXLINE(  93)				_g = (_g + 1);
HXDLIN(  93)				int i = (_g - 1);
HXLINE(  94)				 ::haxe::ui::core::Component c = this->getComponentAt(i);
HXLINE(  95)				 ::Dynamic match = c->findComponent(criteria,type,recursive,searchType);
HXLINE(  96)				if (::hx::IsNotNull( match )) {
HXLINE(  96)					return match;
            				}
            			}
            		}
HXLINE(  98)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(CompositeBuilder_obj,findComponent,return )

::cpp::VirtualArray CompositeBuilder_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_102_findComponents)
HXDLIN( 102)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(CompositeBuilder_obj,findComponents,return )

bool CompositeBuilder_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_15a47639f8c9edc4_107_get_isComponentClipped)
HXDLIN( 107)		return ::hx::IsNotNull( this->_component->get_componentClipRect() );
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeBuilder_obj,get_isComponentClipped,return )


::hx::ObjectPtr< CompositeBuilder_obj > CompositeBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< CompositeBuilder_obj > __this = new CompositeBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< CompositeBuilder_obj > CompositeBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	CompositeBuilder_obj *__this = (CompositeBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompositeBuilder_obj), true, "haxe.ui.core.CompositeBuilder"));
	*(void **)__this = CompositeBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

CompositeBuilder_obj::CompositeBuilder_obj()
{
}

void CompositeBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompositeBuilder);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(isComponentClipped,"isComponentClipped");
	HX_MARK_END_CLASS();
}

void CompositeBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(isComponentClipped,"isComponentClipped");
}

::hx::Val CompositeBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"cssName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cssName() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numComponents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numComponents() ); }
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentAdded") ) { return ::hx::Val( onComponentAdded_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onComponentRemoved") ) { return ::hx::Val( onComponentRemoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentClipped() : isComponentClipped ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeAllComponents") ) { return ::hx::Val( removeAllComponents_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompositeBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { isComponentClipped=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompositeBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_component",7e,6c,f6,6a));
	outFields->push(HX_("numComponents",fc,6a,b6,34));
	outFields->push(HX_("cssName",ae,bf,c4,7a));
	outFields->push(HX_("isComponentClipped",cc,ac,e0,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompositeBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(CompositeBuilder_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{::hx::fsBool,(int)offsetof(CompositeBuilder_obj,isComponentClipped),HX_("isComponentClipped",cc,ac,e0,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompositeBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String CompositeBuilder_obj_sMemberFields[] = {
	HX_("_component",7e,6c,f6,6a),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onReady",c4,3e,f8,7c),
	HX_("show",fd,d4,52,4c),
	HX_("hide",c2,34,0e,45),
	HX_("get_numComponents",53,76,26,3b),
	HX_("get_cssName",c5,1f,bf,00),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("removeAllComponents",b3,1e,97,3c),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("onComponentAdded",42,94,a0,77),
	HX_("onComponentRemoved",a2,43,ad,6e),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	HX_("isComponentClipped",cc,ac,e0,9e),
	HX_("get_isComponentClipped",15,26,75,f8),
	::String(null()) };

::hx::Class CompositeBuilder_obj::__mClass;

void CompositeBuilder_obj::__register()
{
	CompositeBuilder_obj _hx_dummy;
	CompositeBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.CompositeBuilder",91,19,86,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompositeBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompositeBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompositeBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompositeBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
