#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_Builder
#include <haxe/ui/components/_Label/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_HtmlTextBehaviour
#include <haxe/ui/components/_Label/HtmlTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_LabelLayout
#include <haxe/ui/components/_Label/LabelLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_TextBehaviour
#include <haxe/ui/components/_Label/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
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
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_164a75306b06a4aa_15_new,"haxe.ui.components.Label","new",0x9c253780,"haxe.ui.components.Label.new","haxe/ui/components/Label.hx",15,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_138_registerComposite,"haxe.ui.components.Label","registerComposite",0x22cb8444,"haxe.ui.components.Label.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_441_registerBehaviours,"haxe.ui.components.Label","registerBehaviours",0xd24744b9,"haxe.ui.components.Label.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_475_get_htmlText,"haxe.ui.components.Label","get_htmlText",0xa6ea88a1,"haxe.ui.components.Label.get_htmlText","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_506_set_htmlText,"haxe.ui.components.Label","set_htmlText",0xbbe3ac15,"haxe.ui.components.Label.set_htmlText","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_602_get_value,"haxe.ui.components.Label","get_value",0x99695ae8,"haxe.ui.components.Label.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_605_set_value,"haxe.ui.components.Label","set_value",0x7cba46f4,"haxe.ui.components.Label.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_193_get_textAlign,"haxe.ui.components.Label","get_textAlign",0xffe849cf,"haxe.ui.components.Label.get_textAlign","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_206_set_textAlign,"haxe.ui.components.Label","set_textAlign",0x44ee2bdb,"haxe.ui.components.Label.set_textAlign","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_193_get_wordWrap,"haxe.ui.components.Label","get_wordWrap",0x978d7d9d,"haxe.ui.components.Label.get_wordWrap","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_206_set_wordWrap,"haxe.ui.components.Label","set_wordWrap",0xac86a111,"haxe.ui.components.Label.set_wordWrap","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_4cad304492000fff_565_cloneComponent,"haxe.ui.components.Label","cloneComponent",0x272e9680,"haxe.ui.components.Label.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_423_self,"haxe.ui.components.Label","self",0x07b9606c,"haxe.ui.components.Label.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Label_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_164a75306b06a4aa_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic Label_obj::__CreateEmpty() { return new Label_obj; }

void *Label_obj::_hx_vtable = 0;

Dynamic Label_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Label_obj > _hx_result = new Label_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Label_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x599bcb44) {
				return inClassId==(int)0x4ba87886 || inClassId==(int)0x599bcb44;
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void Label_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_Label::Builder >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_Label::LabelLayout >();
            	}


void Label_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::components::_Label::TextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("htmlText",b8,1f,38,10),::hx::ClassOf< ::haxe::ui::components::_Label::HtmlTextBehaviour >(),null());
            	}


::String Label_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_475_get_htmlText)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("htmlText",b8,1f,38,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_htmlText,return )

::String Label_obj::set_htmlText(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_506_set_htmlText)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("htmlText",b8,1f,38,10),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("htmlText",b8,1f,38,10),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("htmlText",b8,1f,38,10)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_htmlText,return )

 ::Dynamic Label_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_602_get_value)
HXDLIN( 602)		return this->get_text();
            	}


 ::Dynamic Label_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_605_set_value)
HXLINE( 606)		this->set_text(( (::String)(value) ));
HXLINE( 607)		return value;
            	}


::String Label_obj::get_textAlign(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_193_get_textAlign)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->textAlign )) {
HXLINE( 195)			return this->get_customStyle()->textAlign;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->textAlign );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_textAlign,return )

::String Label_obj::set_textAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_206_set_textAlign)
HXLINE( 207)		if ((this->get_customStyle()->textAlign == value)) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->textAlign = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->textAlign = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_textAlign,return )

 ::Dynamic Label_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_193_get_wordWrap)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->wordWrap )) {
HXLINE( 195)			return this->get_customStyle()->wordWrap;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->wordWrap );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_wordWrap,return )

 ::Dynamic Label_obj::set_wordWrap( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_206_set_wordWrap)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->wordWrap,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->wordWrap = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->wordWrap = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_wordWrap,return )

 ::haxe::ui::core::ComponentContainer Label_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_4cad304492000fff_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Label c = ( ( ::haxe::ui::components::Label)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_htmlText() )) {
HXLINE( 380)			c->set_htmlText(this->get_htmlText());
            		}
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


 ::haxe::ui::core::ComponentContainer Label_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Label_obj > Label_obj::__new() {
	::hx::ObjectPtr< Label_obj > __this = new Label_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Label_obj > Label_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Label_obj *__this = (Label_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Label_obj), true, "haxe.ui.components.Label"));
	*(void **)__this = Label_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Label_obj::Label_obj()
{
}

::hx::Val Label_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textAlign() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return ::hx::Val( get_textAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return ::hx::Val( set_textAlign_dyn() ); }
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

::hx::Val Label_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textAlign(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("textAlign",d8,e6,7e,ba));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Label_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Label_obj_sStaticStorageInfo = 0;
#endif

static ::String Label_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_textAlign",af,ba,e2,7b),
	HX_("set_textAlign",bb,9c,e8,c0),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Label_obj::__mClass;

void Label_obj::__register()
{
	Label_obj _hx_dummy;
	Label_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Label",8e,b7,db,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Label_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Label_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Label_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Label_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
