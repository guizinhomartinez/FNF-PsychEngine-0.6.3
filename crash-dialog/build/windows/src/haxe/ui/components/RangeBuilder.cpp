#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_haxe_ui_components_RangeBuilder
#include <haxe/ui/components/RangeBuilder.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_030edafd208e7fa8_255_new,"haxe.ui.components.RangeBuilder","new",0xe99a8f76,"haxe.ui.components.RangeBuilder.new","haxe/ui/components/Range.hx",255,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_030edafd208e7fa8_260_create,"haxe.ui.components.RangeBuilder","create",0x70d4b9a6,"haxe.ui.components.RangeBuilder.create","haxe/ui/components/Range.hx",260,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_030edafd208e7fa8_270_showWarning,"haxe.ui.components.RangeBuilder","showWarning",0xc3c43bf5,"haxe.ui.components.RangeBuilder.showWarning","haxe/ui/components/Range.hx",270,0x313cba28)
namespace haxe{
namespace ui{
namespace components{

void RangeBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_030edafd208e7fa8_255_new)
HXLINE( 256)		super::__construct(component);
HXLINE( 257)		this->showWarning();
            	}

Dynamic RangeBuilder_obj::__CreateEmpty() { return new RangeBuilder_obj; }

void *RangeBuilder_obj::_hx_vtable = 0;

Dynamic RangeBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RangeBuilder_obj > _hx_result = new RangeBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x2e97ddf2;
	}
}

void RangeBuilder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_030edafd208e7fa8_260_create)
HXLINE( 261)		this->super::create();
HXLINE( 262)		if (::hx::IsNull( this->_component->findComponent(HX_("${_component.cssName}-value",ac,ff,7a,bc),null(),null(),null()) )) {
HXLINE( 263)			 ::haxe::ui::core::Component v =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 264)			v->set_id(((HX_("",00,00,00,00) + this->_component->get_cssName()) + HX_("-value",24,bc,c7,2f)));
HXLINE( 265)			v->addClass(((HX_("",00,00,00,00) + this->_component->get_cssName()) + HX_("-value",24,bc,c7,2f)),false,null());
HXLINE( 266)			this->_component->addComponent(v);
            		}
            	}


void RangeBuilder_obj::showWarning(){
            	HX_STACKFRAME(&_hx_pos_030edafd208e7fa8_270_showWarning)
HXLINE( 271)		::String name = ( (::String)(this->_component->get_className().split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 272)		::haxe::Log_obj::trace(((((((HX_("WARNING: trying to create an instance of '",ac,bf,13,06) + name) + HX_("' directly, use either 'Horizontal",4c,3c,5e,4a)) + name) + HX_("' or 'Vertical",19,22,61,b5)) + name) + HX_("'",27,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/components/Range.hx",28,ba,3c,31),272,HX_("haxe.ui.components.RangeBuilder",84,5c,9c,6e),HX_("showWarning",df,76,67,e6)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(RangeBuilder_obj,showWarning,(void))


::hx::ObjectPtr< RangeBuilder_obj > RangeBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RangeBuilder_obj > __this = new RangeBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RangeBuilder_obj > RangeBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RangeBuilder_obj *__this = (RangeBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RangeBuilder_obj), true, "haxe.ui.components.RangeBuilder"));
	*(void **)__this = RangeBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RangeBuilder_obj::RangeBuilder_obj()
{
}

::hx::Val RangeBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showWarning") ) { return ::hx::Val( showWarning_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RangeBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RangeBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String RangeBuilder_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("showWarning",df,76,67,e6),
	::String(null()) };

::hx::Class RangeBuilder_obj::__mClass;

void RangeBuilder_obj::__register()
{
	RangeBuilder_obj _hx_dummy;
	RangeBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.RangeBuilder",84,5c,9c,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RangeBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RangeBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
