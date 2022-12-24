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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <haxe/ui/components/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
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
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06d8b660a0799600_47_new,"haxe.ui.components.CheckBoxValue","new",0xe85b4eda,"haxe.ui.components.CheckBoxValue.new","haxe/ui/components/CheckBox.hx",47,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_55_onReady,"haxe.ui.components.CheckBoxValue","onReady",0x3079823e,"haxe.ui.components.CheckBoxValue.onReady","haxe/ui/components/CheckBox.hx",55,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_61_applyStyle,"haxe.ui.components.CheckBoxValue","applyStyle",0x7c7dc5a9,"haxe.ui.components.CheckBoxValue.applyStyle","haxe/ui/components/CheckBox.hx",61,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_69_createIcon,"haxe.ui.components.CheckBoxValue","createIcon",0xa54f4d5b,"haxe.ui.components.CheckBoxValue.createIcon","haxe/ui/components/CheckBox.hx",69,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_84_onActionStart,"haxe.ui.components.CheckBoxValue","onActionStart",0x72eaace7,"haxe.ui.components.CheckBoxValue.onActionStart","haxe/ui/components/CheckBox.hx",84,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_92_onActionEnd,"haxe.ui.components.CheckBoxValue","onActionEnd",0x5396a120,"haxe.ui.components.CheckBoxValue.onActionEnd","haxe/ui/components/CheckBox.hx",92,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_4bd59a09dfe70b4f_442_registerBehaviours,"haxe.ui.components.CheckBoxValue","registerBehaviours",0x0d71829f,"haxe.ui.components.CheckBoxValue.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3c92488a26823be7_565_cloneComponent,"haxe.ui.components.CheckBoxValue","cloneComponent",0xcade6966,"haxe.ui.components.CheckBoxValue.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_4bd59a09dfe70b4f_423_self,"haxe.ui.components.CheckBoxValue","self",0x6ad7b7d2,"haxe.ui.components.CheckBoxValue.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void CheckBoxValue_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_47_new)
HXLINE(  82)		this->_down = true;
HXLINE(  49)		super::__construct();
            	}

Dynamic CheckBoxValue_obj::__CreateEmpty() { return new CheckBoxValue_obj; }

void *CheckBoxValue_obj::_hx_vtable = 0;

Dynamic CheckBoxValue_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckBoxValue_obj > _hx_result = new CheckBoxValue_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CheckBoxValue_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x7114539e) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x395782b4 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x7114539e;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void CheckBoxValue_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_55_onReady)
HXLINE(  56)		this->createIcon();
HXLINE(  57)		this->registerEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn(),null());
HXLINE(  58)		this->registerEvent(HX_("actionend",e5,7d,aa,11),this->onActionEnd_dyn(),null());
            	}


void CheckBoxValue_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_61_applyStyle)
HXLINE(  62)		this->super::applyStyle(style);
HXLINE(  63)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE(  64)		if (::hx::IsNotNull( icon )) {
HXLINE(  65)			icon->set_resource(style->icon);
            		}
            	}


void CheckBoxValue_obj::createIcon(){
            	HX_GC_STACKFRAME(&_hx_pos_06d8b660a0799600_69_createIcon)
HXLINE(  70)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE(  71)		bool _hx_tmp;
HXDLIN(  71)		if (::hx::IsNull( icon )) {
HXLINE(  71)			_hx_tmp = ::hx::IsNotNull( this->parentComponent );
            		}
            		else {
HXLINE(  71)			_hx_tmp = false;
            		}
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  72)			icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE(  73)			icon->set_id(((HX_("",00,00,00,00) + this->parentComponent->get_cssName()) + HX_("-icon",26,02,bb,2e)));
HXLINE(  74)			icon->addClass(((HX_("",00,00,00,00) + this->parentComponent->get_cssName()) + HX_("-icon",26,02,bb,2e)),null(),null());
HXLINE(  75)			bool _hx_tmp;
HXDLIN(  75)			if (::hx::IsNotNull( this->get_style() )) {
HXLINE(  75)				_hx_tmp = ::hx::IsNotNull( this->get_style()->icon );
            			}
            			else {
HXLINE(  75)				_hx_tmp = false;
            			}
HXDLIN(  75)			if (_hx_tmp) {
HXLINE(  76)				icon->set_resource(this->get_style()->icon);
            			}
HXLINE(  78)			this->addComponent(icon);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CheckBoxValue_obj,createIcon,(void))

void CheckBoxValue_obj::onActionStart( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_84_onActionStart)
HXDLIN(  84)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionConfirm",ea,0b,2f,06)) ||  (_hx_switch_0==HX_("actionPress",ed,53,ed,9a)) ){
HXLINE(  86)			this->_down = true;
HXDLIN(  86)			goto _hx_goto_4;
            		}
            		/* default */{
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBoxValue_obj,onActionStart,(void))

void CheckBoxValue_obj::onActionEnd( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_92_onActionEnd)
HXDLIN(  92)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionConfirm",ea,0b,2f,06)) ||  (_hx_switch_0==HX_("actionPress",ed,53,ed,9a)) ){
HXLINE(  94)			if ((this->_down == true)) {
HXLINE(  95)				this->_down = false;
HXLINE(  96)				if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(  97)					 ::haxe::ui::components::CheckBox checkbox = ::hx::TCast<  ::haxe::ui::components::CheckBox >::cast(this->parentComponent);
HXLINE(  98)					checkbox->set_selected(!(checkbox->get_selected()));
            				}
            			}
HXLINE(  94)			goto _hx_goto_6;
            		}
            		/* default */{
            		}
            		_hx_goto_6:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBoxValue_obj,onActionEnd,(void))

void CheckBoxValue_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_4bd59a09dfe70b4f_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer CheckBoxValue_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_3c92488a26823be7_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::CheckBoxValue c = ( ( ::haxe::ui::components::CheckBoxValue)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer CheckBoxValue_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_4bd59a09dfe70b4f_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::CheckBoxValue_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< CheckBoxValue_obj > CheckBoxValue_obj::__new() {
	::hx::ObjectPtr< CheckBoxValue_obj > __this = new CheckBoxValue_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CheckBoxValue_obj > CheckBoxValue_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CheckBoxValue_obj *__this = (CheckBoxValue_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxValue_obj), true, "haxe.ui.components.CheckBoxValue"));
	*(void **)__this = CheckBoxValue_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CheckBoxValue_obj::CheckBoxValue_obj()
{
}

::hx::Val CheckBoxValue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"createIcon") ) { return ::hx::Val( createIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onActionEnd") ) { return ::hx::Val( onActionEnd_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onActionStart") ) { return ::hx::Val( onActionStart_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CheckBoxValue_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBoxValue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_down",41,14,7f,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CheckBoxValue_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(CheckBoxValue_obj,_down),HX_("_down",41,14,7f,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CheckBoxValue_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxValue_obj_sMemberFields[] = {
	HX_("onReady",c4,3e,f8,7c),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("createIcon",95,a8,40,58),
	HX_("_down",41,14,7f,f5),
	HX_("onActionStart",ed,91,5a,b9),
	HX_("onActionEnd",a6,18,d5,33),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class CheckBoxValue_obj::__mClass;

void CheckBoxValue_obj::__register()
{
	CheckBoxValue_obj _hx_dummy;
	CheckBoxValue_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.CheckBoxValue",e8,99,e8,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckBoxValue_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckBoxValue_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxValue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxValue_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
