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
#ifndef INCLUDED_haxe_ui_components_Spacer
#include <haxe/ui/components/Spacer.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_884963628546cdcb_10_new,"haxe.ui.components.Spacer","new",0x46b57004,"haxe.ui.components.Spacer.new","haxe/ui/components/Spacer.hx",10,0x878e3a6b)
HX_LOCAL_STACK_FRAME(_hx_pos_f5a54bb0734e13eb_442_registerBehaviours,"haxe.ui.components.Spacer","registerBehaviours",0xc78b40b5,"haxe.ui.components.Spacer.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8b59af7b867b8ccb_565_cloneComponent,"haxe.ui.components.Spacer","cloneComponent",0x2d4de47c,"haxe.ui.components.Spacer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_f5a54bb0734e13eb_423_self,"haxe.ui.components.Spacer","self",0x9b5a9b68,"haxe.ui.components.Spacer.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Spacer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_884963628546cdcb_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic Spacer_obj::__CreateEmpty() { return new Spacer_obj; }

void *Spacer_obj::_hx_vtable = 0;

Dynamic Spacer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Spacer_obj > _hx_result = new Spacer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Spacer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x72c347e4) {
			if (inClassId<=(int)0x715d6dae) {
				return inClassId==(int)0x4ba87886 || inClassId==(int)0x715d6dae;
			} else {
				return inClassId==(int)0x72c347e4;
			}
		} else {
			return inClassId==(int)0x7d8d899c || inClassId==(int)0x7ec24579;
		}
	}
}

void Spacer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_f5a54bb0734e13eb_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Spacer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8b59af7b867b8ccb_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Spacer c = ( ( ::haxe::ui::components::Spacer)(this->super::cloneComponent()) );
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer Spacer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_f5a54bb0734e13eb_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Spacer_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Spacer_obj > Spacer_obj::__new() {
	::hx::ObjectPtr< Spacer_obj > __this = new Spacer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Spacer_obj > Spacer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Spacer_obj *__this = (Spacer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Spacer_obj), true, "haxe.ui.components.Spacer"));
	*(void **)__this = Spacer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Spacer_obj::Spacer_obj()
{
}

::hx::Val Spacer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Spacer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Spacer_obj_sStaticStorageInfo = 0;
#endif

static ::String Spacer_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Spacer_obj::__mClass;

void Spacer_obj::__register()
{
	Spacer_obj _hx_dummy;
	Spacer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Spacer",12,5e,3c,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Spacer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Spacer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Spacer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Spacer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
