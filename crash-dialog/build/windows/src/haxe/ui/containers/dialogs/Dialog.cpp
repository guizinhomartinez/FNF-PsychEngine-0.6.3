#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_actions_ActionManager
#include <haxe/ui/actions/ActionManager.h>
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
#ifndef INCLUDED_haxe_ui_backend_DialogBase
#include <haxe/ui/backend/DialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogEvent
#include <haxe/ui/containers/dialogs/DialogEvent.h>
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
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f22ce9c60b952717_75_new,"haxe.ui.containers.dialogs.Dialog","new",0x34905b47,"haxe.ui.containers.dialogs.Dialog.new","haxe/ui/containers/dialogs/Dialog.hx",75,0x366f3767)
HX_DEFINE_STACK_FRAME(_hx_pos_f22ce9c60b952717_72_new,"haxe.ui.containers.dialogs.Dialog","new",0x34905b47,"haxe.ui.containers.dialogs.Dialog.new","haxe/ui/containers/dialogs/Dialog.hx",72,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_83_set_onDialogClosed,"haxe.ui.containers.dialogs.Dialog","set_onDialogClosed",0x73152c89,"haxe.ui.containers.dialogs.Dialog.set_onDialogClosed","haxe/ui/containers/dialogs/Dialog.hx",83,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_3b5960fab4234575_442_registerBehaviours,"haxe.ui.containers.dialogs.Dialog","registerBehaviours",0xd64b78d2,"haxe.ui.containers.dialogs.Dialog.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8282b85acad398e5_565_cloneComponent,"haxe.ui.containers.dialogs.Dialog","cloneComponent",0xa86e8a19,"haxe.ui.containers.dialogs.Dialog.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3b5960fab4234575_423_self,"haxe.ui.containers.dialogs.Dialog","self",0xcd0d8ac5,"haxe.ui.containers.dialogs.Dialog.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void Dialog_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::dialogs::Dialog,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::ActionEvent event){
            			HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_75_new)
HXLINE(  75)			bool _hx_tmp;
HXDLIN(  75)			if ((event->action != HX_("actionCancel",d0,49,2f,fe))) {
HXLINE(  75)				_hx_tmp = (event->action == HX_("actionBack",fd,54,57,4c));
            			}
            			else {
HXLINE(  75)				_hx_tmp = true;
            			}
HXDLIN(  75)			if (_hx_tmp) {
HXLINE(  76)				_gthis->hideDialog(HX_("{{cancel}}",fa,38,eb,dc));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_72_new)
HXDLIN(  72)		 ::haxe::ui::containers::dialogs::Dialog _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  73)		super::__construct();
HXLINE(  74)		::haxe::ui::actions::ActionManager_obj::get_instance()->registerEvent(HX_("actionstart",ec,04,43,c3), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}

Dynamic Dialog_obj::__CreateEmpty() { return new Dialog_obj; }

void *Dialog_obj::_hx_vtable = 0;

Dynamic Dialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Dialog_obj > _hx_result = new Dialog_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Dialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
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
			if (inClassId<=(int)0x1e1df847) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1e1df847;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x72c347e4) {
			if (inClassId<=(int)0x715d6dae) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x715d6dae;
				}
			} else {
				return inClassId==(int)0x72c347e4;
			}
		} else {
			return inClassId==(int)0x7ec24579 || inClassId==(int)0x7f2ed947;
		}
	}
}

 ::Dynamic Dialog_obj::set_onDialogClosed( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_83_set_onDialogClosed)
HXLINE(  84)		if (::hx::IsNotNull( this->_hx___onDialogClosed )) {
HXLINE(  85)			this->unregisterEvent(HX_("dialogClosed",94,e8,f8,2e),this->_hx___onDialogClosed);
HXLINE(  86)			this->_hx___onDialogClosed = null();
            		}
HXLINE(  88)		this->registerEvent(HX_("dialogClosed",94,e8,f8,2e),value,null());
HXLINE(  89)		this->_hx___onDialogClosed = value;
HXLINE(  90)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,set_onDialogClosed,return )

void Dialog_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_3b5960fab4234575_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Dialog_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8282b85acad398e5_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::dialogs::Dialog c = ( ( ::haxe::ui::containers::dialogs::Dialog)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Dialog_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3b5960fab4234575_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::dialogs::Dialog_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Dialog_obj > Dialog_obj::__new() {
	::hx::ObjectPtr< Dialog_obj > __this = new Dialog_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Dialog_obj > Dialog_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Dialog_obj *__this = (Dialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Dialog_obj), true, "haxe.ui.containers.dialogs.Dialog"));
	*(void **)__this = Dialog_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Dialog_obj::Dialog_obj()
{
}

void Dialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dialog);
	HX_MARK_MEMBER_NAME(_hx___onDialogClosed,"__onDialogClosed");
	HX_MARK_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	 ::haxe::ui::backend::DialogBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___onDialogClosed,"__onDialogClosed");
	HX_VISIT_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	 ::haxe::ui::backend::DialogBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Dialog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDialogClosed") ) { return ::hx::Val( onDialogClosed ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onDialogClosed") ) { return ::hx::Val( _hx___onDialogClosed ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_onDialogClosed") ) { return ::hx::Val( set_onDialogClosed_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Dialog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"onDialogClosed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDialogClosed(inValue.Cast<  ::Dynamic >()) );onDialogClosed=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onDialogClosed") ) { _hx___onDialogClosed=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Dialog_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Dialog_obj,_hx___onDialogClosed),HX_("__onDialogClosed",73,d3,27,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Dialog_obj,onDialogClosed),HX_("onDialogClosed",53,48,e8,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Dialog_obj_sStaticStorageInfo = 0;
#endif

static ::String Dialog_obj_sMemberFields[] = {
	HX_("__onDialogClosed",73,d3,27,8d),
	HX_("onDialogClosed",53,48,e8,58),
	HX_("set_onDialogClosed",90,5b,31,d1),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Dialog_obj::__mClass;

void Dialog_obj::__register()
{
	Dialog_obj _hx_dummy;
	Dialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.dialogs.Dialog",d5,ab,c9,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Dialog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Dialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
