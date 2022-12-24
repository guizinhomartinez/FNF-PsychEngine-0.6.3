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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_SwitchButtonLayout
#include <haxe/ui/components/_Switch/SwitchButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_SwitchButtonSub
#include <haxe/ui/components/_Switch/SwitchButtonSub.h>
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
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_117_new,"haxe.ui.components._Switch.SwitchButtonSub","new",0xc39f8ceb,"haxe.ui.components._Switch.SwitchButtonSub.new","haxe/ui/components/Switch.hx",117,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_121_createChildren,"haxe.ui.components._Switch.SwitchButtonSub","createChildren",0x44aae1b0,"haxe.ui.components._Switch.SwitchButtonSub.createChildren","haxe/ui/components/Switch.hx",121,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_137_createChildren,"haxe.ui.components._Switch.SwitchButtonSub","createChildren",0x44aae1b0,"haxe.ui.components._Switch.SwitchButtonSub.createChildren","haxe/ui/components/Switch.hx",137,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_152_get_selected,"haxe.ui.components._Switch.SwitchButtonSub","get_selected",0x7a52b879,"haxe.ui.components._Switch.SwitchButtonSub.get_selected","haxe/ui/components/Switch.hx",152,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_154_set_selected,"haxe.ui.components._Switch.SwitchButtonSub","set_selected",0x8f4bdbed,"haxe.ui.components._Switch.SwitchButtonSub.set_selected","haxe/ui/components/Switch.hx",154,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_184_get_selectedText,"haxe.ui.components._Switch.SwitchButtonSub","get_selectedText",0xa95de1c6,"haxe.ui.components._Switch.SwitchButtonSub.get_selectedText","haxe/ui/components/Switch.hx",184,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_186_set_selectedText,"haxe.ui.components._Switch.SwitchButtonSub","set_selectedText",0xff9fcf3a,"haxe.ui.components._Switch.SwitchButtonSub.set_selectedText","haxe/ui/components/Switch.hx",186,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_197_get_unselectedText,"haxe.ui.components._Switch.SwitchButtonSub","get_unselectedText",0x9988ed1f,"haxe.ui.components._Switch.SwitchButtonSub.get_unselectedText","haxe/ui/components/Switch.hx",197,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_199_set_unselectedText,"haxe.ui.components._Switch.SwitchButtonSub","set_unselectedText",0x76381f93,"haxe.ui.components._Switch.SwitchButtonSub.set_unselectedText","haxe/ui/components/Switch.hx",199,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_210_get_pos,"haxe.ui.components._Switch.SwitchButtonSub","get_pos",0x49568436,"haxe.ui.components._Switch.SwitchButtonSub.get_pos","haxe/ui/components/Switch.hx",210,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_51aa2c71bbb629f6_212_set_pos,"haxe.ui.components._Switch.SwitchButtonSub","set_pos",0x3c581542,"haxe.ui.components._Switch.SwitchButtonSub.set_pos","haxe/ui/components/Switch.hx",212,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c112e181ae1c65_442_registerBehaviours,"haxe.ui.components._Switch.SwitchButtonSub","registerBehaviours",0x62d5bfae,"haxe.ui.components._Switch.SwitchButtonSub.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_508e58cc2a7fb5a3_565_cloneComponent,"haxe.ui.components._Switch.SwitchButtonSub","cloneComponent",0xa85d32f5,"haxe.ui.components._Switch.SwitchButtonSub.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c112e181ae1c65_423_self,"haxe.ui.components._Switch.SwitchButtonSub","self",0x6b49c8a1,"haxe.ui.components._Switch.SwitchButtonSub.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c112e181ae1c65_138_registerComposite,"haxe.ui.components._Switch.SwitchButtonSub","registerComposite",0x7cfc5eef,"haxe.ui.components._Switch.SwitchButtonSub.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace components{
namespace _Switch{

void SwitchButtonSub_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_117_new)
HXLINE( 207)		this->_pos = ((Float)0);
HXLINE( 194)		this->_unselectedText = HX_("",00,00,00,00);
HXLINE( 181)		this->_selectedText = HX_("",00,00,00,00);
HXLINE( 149)		this->_selected = false;
HXLINE( 117)		super::__construct();
            	}

Dynamic SwitchButtonSub_obj::__CreateEmpty() { return new SwitchButtonSub_obj; }

void *SwitchButtonSub_obj::_hx_vtable = 0;

Dynamic SwitchButtonSub_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchButtonSub_obj > _hx_result = new SwitchButtonSub_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SwitchButtonSub_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x01c1cdbf) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x01c1cdbf;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x13d76ae7) {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void SwitchButtonSub_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_121_createChildren)
HXDLIN( 121)		 ::haxe::ui::components::_Switch::SwitchButtonSub _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 122)		this->super::createChildren();
HXLINE( 124)		if (::hx::IsNull( this->_button )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_Switch::SwitchButtonSub,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::MouseEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_137_createChildren)
HXLINE( 137)				 ::haxe::ui::components::_Switch::SwitchButtonSub _gthis1 = _gthis;
HXDLIN( 137)				_gthis1->set_selected(!(_gthis->get_selected()));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 125)			this->_label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 126)			this->_label->set_id(HX_("switch-label",9b,83,49,55));
HXLINE( 127)			this->_label->addClass(HX_("switch-label",9b,83,49,55),null(),null());
HXLINE( 128)			this->_label->set_text(this->_unselectedText);
HXLINE( 129)			this->addComponent(this->_label);
HXLINE( 131)			this->_button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 132)			this->_button->set_id(HX_("switch-button",6b,de,6c,db));
HXLINE( 133)			this->_button->addClass(HX_("switch-button",6b,de,6c,db),null(),null());
HXLINE( 134)			this->addComponent(this->_button);
HXLINE( 136)			this->set_onClick( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 140)			 ::haxe::ui::core::Component component =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 141)			component->addClass(HX_("switch-button-sub-extra",21,e5,65,ac),null(),null());
HXLINE( 142)			this->addComponentAt(component,0);
            		}
            	}


bool SwitchButtonSub_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_152_get_selected)
HXDLIN( 152)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SwitchButtonSub_obj,get_selected,return )

bool SwitchButtonSub_obj::set_selected(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_154_set_selected)
HXLINE( 155)		if ((value == this->_selected)) {
HXLINE( 156)			return value;
            		}
HXLINE( 159)		this->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE( 160)		{
HXLINE( 160)			bool _hx_tmp;
HXDLIN( 160)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 160)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 160)				_hx_tmp = true;
            			}
HXDLIN( 160)			if (!(_hx_tmp)) {
HXLINE( 160)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 161)		this->_selected = value;
HXLINE( 163)		if ((this->_selected == false)) {
HXLINE( 164)			this->_label->set_text(this->_unselectedText);
HXLINE( 165)			this->_label->removeClass(HX_(":selected",95,f4,1e,7c),null(),null());
HXLINE( 166)			this->removeClass(HX_(":selected",95,f4,1e,7c),true,true);
HXLINE( 167)			this->addClass(HX_(":unselected",6e,5e,95,69),true,true);
            		}
            		else {
HXLINE( 169)			this->_label->set_text(this->_selectedText);
HXLINE( 170)			this->_label->addClass(HX_(":selected",95,f4,1e,7c),null(),null());
HXLINE( 171)			this->removeClass(HX_(":unselected",6e,5e,95,69),true,true);
HXLINE( 172)			this->addClass(HX_(":selected",95,f4,1e,7c),true,true);
            		}
HXLINE( 175)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 176)		this->dispatch(event);
HXLINE( 178)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SwitchButtonSub_obj,set_selected,return )

::String SwitchButtonSub_obj::get_selectedText(){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_184_get_selectedText)
HXDLIN( 184)		return this->_selectedText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SwitchButtonSub_obj,get_selectedText,return )

::String SwitchButtonSub_obj::set_selectedText(::String value){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_186_set_selectedText)
HXLINE( 187)		this->_selectedText = value;
HXLINE( 188)		bool _hx_tmp;
HXDLIN( 188)		if (this->_ready) {
HXLINE( 188)			_hx_tmp = (this->_selected == true);
            		}
            		else {
HXLINE( 188)			_hx_tmp = false;
            		}
HXDLIN( 188)		if (_hx_tmp) {
HXLINE( 189)			this->_label->set_text(this->_selectedText);
            		}
HXLINE( 191)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SwitchButtonSub_obj,set_selectedText,return )

::String SwitchButtonSub_obj::get_unselectedText(){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_197_get_unselectedText)
HXDLIN( 197)		return this->_unselectedText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SwitchButtonSub_obj,get_unselectedText,return )

::String SwitchButtonSub_obj::set_unselectedText(::String value){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_199_set_unselectedText)
HXLINE( 200)		this->_unselectedText = value;
HXLINE( 201)		bool _hx_tmp;
HXDLIN( 201)		if (this->_ready) {
HXLINE( 201)			_hx_tmp = (this->_selected == false);
            		}
            		else {
HXLINE( 201)			_hx_tmp = false;
            		}
HXDLIN( 201)		if (_hx_tmp) {
HXLINE( 202)			this->_label->set_text(this->_unselectedText);
            		}
HXLINE( 204)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SwitchButtonSub_obj,set_unselectedText,return )

Float SwitchButtonSub_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_210_get_pos)
HXDLIN( 210)		return this->_pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SwitchButtonSub_obj,get_pos,return )

Float SwitchButtonSub_obj::set_pos(Float value){
            	HX_STACKFRAME(&_hx_pos_51aa2c71bbb629f6_212_set_pos)
HXLINE( 213)		if ((this->_pos == value)) {
HXLINE( 214)			return value;
            		}
HXLINE( 217)		this->_pos = value;
HXLINE( 218)		{
HXLINE( 218)			bool _hx_tmp;
HXDLIN( 218)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 218)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 218)				_hx_tmp = true;
            			}
HXDLIN( 218)			if (!(_hx_tmp)) {
HXLINE( 218)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 220)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SwitchButtonSub_obj,set_pos,return )

void SwitchButtonSub_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_b1c112e181ae1c65_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer SwitchButtonSub_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_508e58cc2a7fb5a3_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::_Switch::SwitchButtonSub c = ( ( ::haxe::ui::components::_Switch::SwitchButtonSub)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_selected(this->get_selected());
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


 ::haxe::ui::core::ComponentContainer SwitchButtonSub_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b1c112e181ae1c65_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::_Switch::SwitchButtonSub_obj::__alloc( HX_CTX );
            	}


void SwitchButtonSub_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_b1c112e181ae1c65_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_Switch::SwitchButtonLayout >();
            	}



::hx::ObjectPtr< SwitchButtonSub_obj > SwitchButtonSub_obj::__new() {
	::hx::ObjectPtr< SwitchButtonSub_obj > __this = new SwitchButtonSub_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SwitchButtonSub_obj > SwitchButtonSub_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SwitchButtonSub_obj *__this = (SwitchButtonSub_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchButtonSub_obj), true, "haxe.ui.components._Switch.SwitchButtonSub"));
	*(void **)__this = SwitchButtonSub_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SwitchButtonSub_obj::SwitchButtonSub_obj()
{
}

void SwitchButtonSub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SwitchButtonSub);
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_selectedText,"_selectedText");
	HX_MARK_MEMBER_NAME(_unselectedText,"_unselectedText");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SwitchButtonSub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_selectedText,"_selectedText");
	HX_VISIT_MEMBER_NAME(_unselectedText,"_unselectedText");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SwitchButtonSub_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pos() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { return ::hx::Val( _pos ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return ::hx::Val( _label ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return ::hx::Val( _button ); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return ::hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return ::hx::Val( set_pos_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { return ::hx::Val( _selected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedText() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedText") ) { return ::hx::Val( _selectedText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"unselectedText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_unselectedText() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_unselectedText") ) { return ::hx::Val( _unselectedText ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedText") ) { return ::hx::Val( get_selectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedText") ) { return ::hx::Val( set_selectedText_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_unselectedText") ) { return ::hx::Val( get_unselectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_unselectedText") ) { return ::hx::Val( set_unselectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SwitchButtonSub_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pos(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedText(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedText") ) { _selectedText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unselectedText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_unselectedText(inValue.Cast< ::String >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_unselectedText") ) { _unselectedText=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SwitchButtonSub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_button",91,73,57,48));
	outFields->push(HX_("_label",35,55,96,6b));
	outFields->push(HX_("_selected",ba,21,03,f9));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("_selectedText",87,7f,02,c0));
	outFields->push(HX_("selectedText",a8,ec,93,dd));
	outFields->push(HX_("_unselectedText",20,3d,e1,18));
	outFields->push(HX_("unselectedText",81,f4,80,cf));
	outFields->push(HX_("_pos",95,a2,20,3f));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SwitchButtonSub_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(SwitchButtonSub_obj,_button),HX_("_button",91,73,57,48)},
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(SwitchButtonSub_obj,_label),HX_("_label",35,55,96,6b)},
	{::hx::fsBool,(int)offsetof(SwitchButtonSub_obj,_selected),HX_("_selected",ba,21,03,f9)},
	{::hx::fsString,(int)offsetof(SwitchButtonSub_obj,_selectedText),HX_("_selectedText",87,7f,02,c0)},
	{::hx::fsString,(int)offsetof(SwitchButtonSub_obj,_unselectedText),HX_("_unselectedText",20,3d,e1,18)},
	{::hx::fsFloat,(int)offsetof(SwitchButtonSub_obj,_pos),HX_("_pos",95,a2,20,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SwitchButtonSub_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchButtonSub_obj_sMemberFields[] = {
	HX_("_button",91,73,57,48),
	HX_("_label",35,55,96,6b),
	HX_("createChildren",5b,98,a4,c2),
	HX_("_selected",ba,21,03,f9),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("_selectedText",87,7f,02,c0),
	HX_("get_selectedText",31,d9,32,e2),
	HX_("set_selectedText",a5,c6,74,38),
	HX_("_unselectedText",20,3d,e1,18),
	HX_("get_unselectedText",4a,d5,1a,6b),
	HX_("set_unselectedText",be,07,ca,47),
	HX_("_pos",95,a2,20,3f),
	HX_("get_pos",2b,26,ca,26),
	HX_("set_pos",37,b7,cb,19),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class SwitchButtonSub_obj::__mClass;

void SwitchButtonSub_obj::__register()
{
	SwitchButtonSub_obj _hx_dummy;
	SwitchButtonSub_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Switch.SwitchButtonSub",79,3b,2e,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchButtonSub_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchButtonSub_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchButtonSub_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchButtonSub_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Switch
