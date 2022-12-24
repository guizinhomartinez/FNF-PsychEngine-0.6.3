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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyGroup
#include <haxe/ui/containers/properties/PropertyGroup.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGroup_Builder
#include <haxe/ui/containers/properties/_PropertyGroup/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGroup_Events
#include <haxe/ui/containers/properties/_PropertyGroup/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGroup_TextBehaviour
#include <haxe/ui/containers/properties/_PropertyGroup/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_58db070f8cda55a9_18_new,"haxe.ui.containers.properties.PropertyGroup","new",0x478c4e4b,"haxe.ui.containers.properties.PropertyGroup.new","haxe/ui/containers/properties/PropertyGroup.hx",18,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c729f952cb4a8f3f_138_registerComposite,"haxe.ui.containers.properties.PropertyGroup","registerComposite",0x17b4c84f,"haxe.ui.containers.properties.PropertyGroup.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_c729f952cb4a8f3f_441_registerBehaviours,"haxe.ui.containers.properties.PropertyGroup","registerBehaviours",0x29798a4e,"haxe.ui.containers.properties.PropertyGroup.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_397938b558432c5e_565_cloneComponent,"haxe.ui.containers.properties.PropertyGroup","cloneComponent",0x0d5f2d95,"haxe.ui.containers.properties.PropertyGroup.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_c729f952cb4a8f3f_423_self,"haxe.ui.containers.properties.PropertyGroup","self",0x56863b41,"haxe.ui.containers.properties.PropertyGroup.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{

void PropertyGroup_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_58db070f8cda55a9_18_new)
HXDLIN(  18)		super::__construct();
            	}

Dynamic PropertyGroup_obj::__CreateEmpty() { return new PropertyGroup_obj; }

void *PropertyGroup_obj::_hx_vtable = 0;

Dynamic PropertyGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyGroup_obj > _hx_result = new PropertyGroup_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertyGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x551f812b) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x2eb1d3e1 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x551f812b;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void PropertyGroup_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_c729f952cb4a8f3f_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGroup::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGroup::Builder >();
            	}


void PropertyGroup_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_c729f952cb4a8f3f_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGroup::TextBehaviour >(),null());
            	}


 ::haxe::ui::core::ComponentContainer PropertyGroup_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_397938b558432c5e_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::properties::PropertyGroup c = ( ( ::haxe::ui::containers::properties::PropertyGroup)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer PropertyGroup_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_c729f952cb4a8f3f_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::properties::PropertyGroup_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< PropertyGroup_obj > PropertyGroup_obj::__new() {
	::hx::ObjectPtr< PropertyGroup_obj > __this = new PropertyGroup_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PropertyGroup_obj > PropertyGroup_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PropertyGroup_obj *__this = (PropertyGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGroup_obj), true, "haxe.ui.containers.properties.PropertyGroup"));
	*(void **)__this = PropertyGroup_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PropertyGroup_obj::PropertyGroup_obj()
{
}

::hx::Val PropertyGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PropertyGroup_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PropertyGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyGroup_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class PropertyGroup_obj::__mClass;

void PropertyGroup_obj::__register()
{
	PropertyGroup_obj _hx_dummy;
	PropertyGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties.PropertyGroup",d9,cc,86,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
