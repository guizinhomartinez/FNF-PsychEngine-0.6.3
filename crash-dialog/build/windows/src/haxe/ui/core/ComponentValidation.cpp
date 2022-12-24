#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_ValidationManager
#include <haxe/ui/validation/ValidationManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_6_new,"haxe.ui.core.ComponentValidation","new",0x7f494d2b,"haxe.ui.core.ComponentValidation.new","haxe/ui/core/ComponentValidation.hx",6,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_19_get_depth,"haxe.ui.core.ComponentValidation","get_depth",0x1e92f465,"haxe.ui.core.ComponentValidation.get_depth","haxe/ui/core/ComponentValidation.hx",19,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_21_set_depth,"haxe.ui.core.ComponentValidation","set_depth",0x01e3e071,"haxe.ui.core.ComponentValidation.set_depth","haxe/ui/core/ComponentValidation.hx",21,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_35_isComponentInvalid,"haxe.ui.core.ComponentValidation","isComponentInvalid",0xbb271f59,"haxe.ui.core.ComponentValidation.isComponentInvalid","haxe/ui/core/ComponentValidation.hx",35,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_55_invalidateComponent,"haxe.ui.core.ComponentValidation","invalidateComponent",0x083e328d,"haxe.ui.core.ComponentValidation.invalidateComponent","haxe/ui/core/ComponentValidation.hx",55,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_117_invalidateComponentData,"haxe.ui.core.ComponentValidation","invalidateComponentData",0x64fb7f57,"haxe.ui.core.ComponentValidation.invalidateComponentData","haxe/ui/core/ComponentValidation.hx",117,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_124_invalidateComponentLayout,"haxe.ui.core.ComponentValidation","invalidateComponentLayout",0x708f3d17,"haxe.ui.core.ComponentValidation.invalidateComponentLayout","haxe/ui/core/ComponentValidation.hx",124,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_136_invalidateComponentPosition,"haxe.ui.core.ComponentValidation","invalidateComponentPosition",0x70636456,"haxe.ui.core.ComponentValidation.invalidateComponentPosition","haxe/ui/core/ComponentValidation.hx",136,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_144_invalidateComponentDisplay,"haxe.ui.core.ComponentValidation","invalidateComponentDisplay",0x7f303b35,"haxe.ui.core.ComponentValidation.invalidateComponentDisplay","haxe/ui/core/ComponentValidation.hx",144,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_151_invalidateComponentStyle,"haxe.ui.core.ComponentValidation","invalidateComponentStyle",0xa6a98364,"haxe.ui.core.ComponentValidation.invalidateComponentStyle","haxe/ui/core/ComponentValidation.hx",151,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_162_validateComponent,"haxe.ui.core.ComponentValidation","validateComponent",0x8b896752,"haxe.ui.core.ComponentValidation.validateComponent","haxe/ui/core/ComponentValidation.hx",162,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_208_validateNow,"haxe.ui.core.ComponentValidation","validateNow",0xfaff81eb,"haxe.ui.core.ComponentValidation.validateNow","haxe/ui/core/ComponentValidation.hx",208,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_220_syncComponentValidation,"haxe.ui.core.ComponentValidation","syncComponentValidation",0x45397606,"haxe.ui.core.ComponentValidation.syncComponentValidation","haxe/ui/core/ComponentValidation.hx",220,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_245_validateComponentInternal,"haxe.ui.core.ComponentValidation","validateComponentInternal",0x71442caf,"haxe.ui.core.ComponentValidation.validateComponentInternal","haxe/ui/core/ComponentValidation.hx",245,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_288_initializeComponent,"haxe.ui.core.ComponentValidation","initializeComponent",0x9747f818,"haxe.ui.core.ComponentValidation.initializeComponent","haxe/ui/core/ComponentValidation.hx",288,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_292_validateInitialSize,"haxe.ui.core.ComponentValidation","validateInitialSize",0x35e8753a,"haxe.ui.core.ComponentValidation.validateInitialSize","haxe/ui/core/ComponentValidation.hx",292,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_296_validateComponentData,"haxe.ui.core.ComponentValidation","validateComponentData",0x2de0fa9c,"haxe.ui.core.ComponentValidation.validateComponentData","haxe/ui/core/ComponentValidation.hx",296,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_300_validateComponentLayout,"haxe.ui.core.ComponentValidation","validateComponentLayout",0x5a3dd39c,"haxe.ui.core.ComponentValidation.validateComponentLayout","haxe/ui/core/ComponentValidation.hx",300,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_303_validateComponentStyle,"haxe.ui.core.ComponentValidation","validateComponentStyle",0xa68fe47f,"haxe.ui.core.ComponentValidation.validateComponentStyle","haxe/ui/core/ComponentValidation.hx",303,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_cf4a4c69f5e67911_307_validateComponentPosition,"haxe.ui.core.ComponentValidation","validateComponentPosition",0x13c8661b,"haxe.ui.core.ComponentValidation.validateComponentPosition","haxe/ui/core/ComponentValidation.hx",307,0x3e0a56c6)
HX_LOCAL_STACK_FRAME(_hx_pos_a570c1d5e8bdaaf4_442_registerBehaviours,"haxe.ui.core.ComponentValidation","registerBehaviours",0x182e476e,"haxe.ui.core.ComponentValidation.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3f98b65a2d10830f_565_cloneComponent,"haxe.ui.core.ComponentValidation","cloneComponent",0x2d66dab5,"haxe.ui.core.ComponentValidation.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_a570c1d5e8bdaaf4_423_self,"haxe.ui.core.ComponentValidation","self",0xe4284061,"haxe.ui.core.ComponentValidation.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace core{

void ComponentValidation_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_6_new)
HXLINE(  15)		this->_depth = -1;
HXLINE(  13)		this->_invalidateCount = 0;
HXLINE(  12)		this->_isDisposed = false;
HXLINE(  11)		this->_isInitialized = false;
HXLINE(  10)		this->_isValidating = false;
HXLINE(   9)		this->_isAllInvalid = false;
HXLINE(   8)		this->_delayedInvalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(   7)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(   6)		super::__construct();
            	}

Dynamic ComponentValidation_obj::__CreateEmpty() { return new ComponentValidation_obj; }

void *ComponentValidation_obj::_hx_vtable = 0;

Dynamic ComponentValidation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentValidation_obj > _hx_result = new ComponentValidation_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentValidation_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x01557b4b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			return inClassId==(int)0x241b0321;
		}
	} else {
		return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
	}
}

int ComponentValidation_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_19_get_depth)
HXDLIN(  19)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentValidation_obj,get_depth,return )

int ComponentValidation_obj::set_depth(int value){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_21_set_depth)
HXLINE(  22)		if ((this->_depth == value)) {
HXLINE(  23)			return value;
            		}
HXLINE(  26)		this->_depth = value;
HXLINE(  28)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,set_depth,return )

bool ComponentValidation_obj::isComponentInvalid(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_35_isComponentInvalid)
HXLINE(  36)		if ((this->_isAllInvalid == true)) {
HXLINE(  37)			return true;
            		}
HXLINE(  40)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE(  41)			{
HXLINE(  41)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN(  41)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  41)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  42)					return true;
            				}
            			}
HXLINE(  45)			return false;
            		}
HXLINE(  48)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,isComponentInvalid,return )

void ComponentValidation_obj::invalidateComponent(::String __o_flag,::hx::Null< bool >  __o_recursive){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_55_invalidateComponent)
HXLINE(  56)		if ((this->_ready == false)) {
HXLINE(  57)			return;
            		}
HXLINE(  60)		bool isAlreadyInvalid = this->isComponentInvalid(flag);
HXLINE(  61)		bool isAlreadyDelayedInvalid = false;
HXLINE(  62)		if ((this->_isValidating == true)) {
HXLINE(  63)			 ::Dynamic value = this->_delayedInvalidationFlags->iterator();
HXDLIN(  63)			while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  63)				bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  64)				isAlreadyDelayedInvalid = true;
HXLINE(  65)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
HXLINE(  69)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE(  70)			if ((this->_isValidating == true)) {
HXLINE(  71)				this->_delayedInvalidationFlags->set(HX_("all",21,f9,49,00),true);
            			}
            			else {
HXLINE(  73)				this->_isAllInvalid = true;
            			}
            		}
            		else {
HXLINE(  76)			if ((this->_isValidating == true)) {
HXLINE(  77)				this->_delayedInvalidationFlags->set(flag,true);
            			}
            			else {
HXLINE(  78)				bool _hx_tmp;
HXDLIN(  78)				if ((flag != HX_("all",21,f9,49,00))) {
HXLINE(  78)					_hx_tmp = !(this->_invalidationFlags->exists(flag));
            				}
            				else {
HXLINE(  78)					_hx_tmp = false;
            				}
HXDLIN(  78)				if (_hx_tmp) {
HXLINE(  79)					this->_invalidationFlags->set(flag,true);
            				}
            			}
            		}
HXLINE(  83)		if ((this->_isValidating == true)) {
HXLINE(  85)			if ((isAlreadyDelayedInvalid == true)) {
HXLINE(  86)				return;
            			}
HXLINE(  89)			this->_invalidateCount++;
HXLINE(  92)			if ((this->_invalidateCount >= 10)) {
HXLINE(  93)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("The validation queue returned too many times during validation. This may be an infinite loop. Try to avoid doing anything that calls invalidate() during validation.",74,3c,c2,7e)));
            			}
HXLINE(  96)			::haxe::ui::validation::ValidationManager_obj::get_instance()->add( ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0x1e962029));
HXLINE(  97)			return;
            		}
            		else {
HXLINE(  98)			if ((isAlreadyInvalid == true)) {
HXLINE(  99)				return;
            			}
            		}
HXLINE( 102)		this->_invalidateCount = 0;
HXLINE( 103)		::haxe::ui::validation::ValidationManager_obj::get_instance()->add( ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0x1e962029));
HXLINE( 105)		if ((recursive == true)) {
HXLINE( 106)			int _g = 0;
HXDLIN( 106)			::Array< ::Dynamic> _g1;
HXDLIN( 106)			if (::hx::IsNull( this->_children )) {
HXLINE( 106)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 106)				_g1 = this->_children;
            			}
HXDLIN( 106)			while((_g < _g1->length)){
HXLINE( 106)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 106)				_g = (_g + 1);
HXLINE( 107)				child->invalidateComponent(flag,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentValidation_obj,invalidateComponent,(void))

void ComponentValidation_obj::invalidateComponentData(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_117_invalidateComponentData)
HXDLIN( 117)		this->invalidateComponent(HX_("data",2a,56,63,42),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,invalidateComponentData,(void))

void ComponentValidation_obj::invalidateComponentLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_124_invalidateComponentLayout)
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if (::hx::IsNotNull( this->_layout )) {
HXLINE( 125)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 126)			return;
            		}
HXLINE( 128)		this->invalidateComponent(HX_("layout",aa,ae,b8,58),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,invalidateComponentLayout,(void))

void ComponentValidation_obj::invalidateComponentPosition(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_136_invalidateComponentPosition)
HXDLIN( 136)		this->invalidateComponent(HX_("position",a9,a0,fa,ca),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,invalidateComponentPosition,(void))

void ComponentValidation_obj::invalidateComponentDisplay(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_144_invalidateComponentDisplay)
HXDLIN( 144)		this->invalidateComponent(HX_("display",42,2a,4a,bb),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,invalidateComponentDisplay,(void))

void ComponentValidation_obj::invalidateComponentStyle(::hx::Null< bool >  __o_force,::hx::Null< bool >  __o_recursive){
            		bool force = __o_force.Default(false);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_151_invalidateComponentStyle)
HXLINE( 152)		this->invalidateComponent(HX_("style",31,a5,1d,84),recursive);
HXLINE( 153)		if ((force == true)) {
HXLINE( 154)			this->_style = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentValidation_obj,invalidateComponentStyle,(void))

void ComponentValidation_obj::validateComponent(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_162_validateComponent)
HXLINE( 163)		bool _hx_tmp;
HXDLIN( 163)		bool _hx_tmp1;
HXDLIN( 163)		bool _hx_tmp2;
HXDLIN( 163)		if ((this->_ready != false)) {
HXLINE( 163)			_hx_tmp2 = (this->_isDisposed == true);
            		}
            		else {
HXLINE( 163)			_hx_tmp2 = true;
            		}
HXDLIN( 163)		if (!(_hx_tmp2)) {
HXLINE( 163)			_hx_tmp1 = (this->_isValidating == true);
            		}
            		else {
HXLINE( 163)			_hx_tmp1 = true;
            		}
HXDLIN( 163)		if (!(_hx_tmp1)) {
HXLINE( 163)			_hx_tmp = (this->isComponentInvalid(null()) == false);
            		}
            		else {
HXLINE( 163)			_hx_tmp = true;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 167)			return;
            		}
HXLINE( 170)		bool isInitialized = this->_isInitialized;
HXLINE( 171)		if ((isInitialized == false)) {
HXLINE( 172)			this->initializeComponent();
            		}
HXLINE( 175)		this->_isValidating = true;
HXLINE( 177)		this->validateComponentInternal(nextFrame);
HXLINE( 178)		this->validateInitialSize(isInitialized);
HXLINE( 183)		this->_invalidationFlags->clear();
HXLINE( 186)		this->_isAllInvalid = false;
HXLINE( 188)		{
HXLINE( 188)			 ::Dynamic flag = this->_delayedInvalidationFlags->keys();
HXDLIN( 188)			while(( (bool)(flag->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 188)				::String flag1 = ( (::String)(flag->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 189)				if ((flag1 == HX_("all",21,f9,49,00))) {
HXLINE( 190)					this->_isAllInvalid = true;
            				}
            				else {
HXLINE( 192)					this->_invalidationFlags->set(flag1,true);
            				}
            			}
            		}
HXLINE( 198)		this->_delayedInvalidationFlags->clear();
HXLINE( 201)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,validateComponent,(void))

void ComponentValidation_obj::validateNow(){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_208_validateNow)
HXLINE( 209)		{
HXLINE( 209)			int _g = 0;
HXDLIN( 209)			::Array< ::Dynamic> _g1;
HXDLIN( 209)			if (::hx::IsNull( this->_children )) {
HXLINE( 209)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 209)				_g1 = this->_children;
            			}
HXDLIN( 209)			while((_g < _g1->length)){
HXLINE( 209)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 209)				_g = (_g + 1);
HXLINE( 210)				child->validateNow();
            			}
            		}
HXLINE( 212)		this->invalidateComponent(null(),null());
HXLINE( 213)		this->syncComponentValidation(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentValidation_obj,validateNow,(void))

void ComponentValidation_obj::syncComponentValidation(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_220_syncComponentValidation)
HXLINE( 221)		int count = 0;
HXLINE( 222)		while(this->isComponentInvalid(null())){
HXLINE( 223)			this->validateComponent(nextFrame);
HXLINE( 225)			{
HXLINE( 225)				int _g = 0;
HXDLIN( 225)				::Array< ::Dynamic> _g1;
HXDLIN( 225)				if (::hx::IsNull( this->_children )) {
HXLINE( 225)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 225)					_g1 = this->_children;
            				}
HXDLIN( 225)				while((_g < _g1->length)){
HXLINE( 225)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 225)					_g = (_g + 1);
HXLINE( 226)					child->syncComponentValidation(nextFrame);
            				}
            			}
HXLINE( 229)			count = (count + 1);
HXDLIN( 229)			if ((count >= 10)) {
HXLINE( 230)				if (this->_isDisposed) {
HXLINE( 234)					::String _hx_tmp = ((HX_("There was a problem validating this component as it has already been destroyed (",8d,52,2e,9f) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_("#",23,00,00,00));
HXDLIN( 234)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + this->get_id()) + HX_(")",29,00,00,00))));
            				}
            				else {
HXLINE( 239)					::String _hx_tmp = ((HX_("The syncValidation returned too many times during validation. This may be an infinite loop. Try to avoid doing anything that calls invalidate() during validation (",78,cf,c5,85) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_("#",23,00,00,00));
HXDLIN( 239)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + this->get_id()) + HX_(").",e5,23,00,00))));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,syncComponentValidation,(void))

void ComponentValidation_obj::validateComponentInternal(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_245_validateComponentInternal)
HXLINE( 246)		bool dataInvalid = this->isComponentInvalid(HX_("data",2a,56,63,42));
HXLINE( 247)		bool styleInvalid = this->isComponentInvalid(HX_("style",31,a5,1d,84));
HXLINE( 248)		bool textDisplayInvalid;
HXDLIN( 248)		if (this->isComponentInvalid(HX_("textDisplay",15,25,ca,96))) {
HXLINE( 248)			textDisplayInvalid = this->hasTextDisplay();
            		}
            		else {
HXLINE( 248)			textDisplayInvalid = false;
            		}
HXLINE( 249)		bool textInputInvalid;
HXDLIN( 249)		if (this->isComponentInvalid(HX_("textInput",1d,54,0b,57))) {
HXLINE( 249)			textInputInvalid = this->hasTextInput();
            		}
            		else {
HXLINE( 249)			textInputInvalid = false;
            		}
HXLINE( 250)		bool imageDisplayInvalid;
HXDLIN( 250)		if (this->isComponentInvalid(HX_("imageDisplay",27,a4,12,ab))) {
HXLINE( 250)			imageDisplayInvalid = this->hasImageDisplay();
            		}
            		else {
HXLINE( 250)			imageDisplayInvalid = false;
            		}
HXLINE( 251)		bool positionInvalid = this->isComponentInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 252)		bool displayInvalid = this->isComponentInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 253)		bool layoutInvalid;
HXDLIN( 253)		if (this->isComponentInvalid(HX_("layout",aa,ae,b8,58))) {
HXLINE( 253)			layoutInvalid = (this->_layoutLocked == false);
            		}
            		else {
HXLINE( 253)			layoutInvalid = false;
            		}
HXLINE( 255)		if (dataInvalid) {
HXLINE( 256)			this->validateComponentData();
            		}
HXLINE( 259)		if (styleInvalid) {
HXLINE( 260)			this->validateComponentStyle();
            		}
HXLINE( 263)		if (textDisplayInvalid) {
HXLINE( 264)			this->getTextDisplay()->validateComponent(null());
            		}
HXLINE( 267)		if (textInputInvalid) {
HXLINE( 268)			this->getTextInput()->validateComponent(null());
            		}
HXLINE( 271)		if (imageDisplayInvalid) {
HXLINE( 272)			this->getImageDisplay()->validateComponent();
            		}
HXLINE( 275)		if (positionInvalid) {
HXLINE( 276)			this->validateComponentPosition();
            		}
HXLINE( 279)		if (layoutInvalid) {
HXLINE( 280)			if (this->validateComponentLayout()) {
HXLINE( 280)				displayInvalid = true;
            			}
            		}
HXLINE( 283)		bool _hx_tmp;
HXDLIN( 283)		if (!(displayInvalid)) {
HXLINE( 283)			_hx_tmp = styleInvalid;
            		}
            		else {
HXLINE( 283)			_hx_tmp = true;
            		}
HXDLIN( 283)		if (_hx_tmp) {
HXLINE( 284)			::haxe::ui::validation::ValidationManager_obj::get_instance()->addDisplay(::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this)),nextFrame);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,validateComponentInternal,(void))

void ComponentValidation_obj::initializeComponent(){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_288_initializeComponent)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentValidation_obj,initializeComponent,(void))

void ComponentValidation_obj::validateInitialSize(bool isInitialized){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_292_validateInitialSize)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentValidation_obj,validateInitialSize,(void))

void ComponentValidation_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_296_validateComponentData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentValidation_obj,validateComponentData,(void))

bool ComponentValidation_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_300_validateComponentLayout)
HXDLIN( 300)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentValidation_obj,validateComponentLayout,return )

void ComponentValidation_obj::validateComponentStyle(){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_303_validateComponentStyle)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentValidation_obj,validateComponentStyle,(void))

void ComponentValidation_obj::validateComponentPosition(){
            	HX_STACKFRAME(&_hx_pos_cf4a4c69f5e67911_307_validateComponentPosition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentValidation_obj,validateComponentPosition,(void))

void ComponentValidation_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_a570c1d5e8bdaaf4_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ComponentValidation_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_3f98b65a2d10830f_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::core::ComponentValidation c = ( ( ::haxe::ui::core::ComponentValidation)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer ComponentValidation_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_a570c1d5e8bdaaf4_423_self)
HXDLIN( 423)		return  ::haxe::ui::core::ComponentValidation_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ComponentValidation_obj > ComponentValidation_obj::__new() {
	::hx::ObjectPtr< ComponentValidation_obj > __this = new ComponentValidation_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentValidation_obj > ComponentValidation_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentValidation_obj *__this = (ComponentValidation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentValidation_obj), true, "haxe.ui.core.ComponentValidation"));
	*(void **)__this = ComponentValidation_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentValidation_obj::ComponentValidation_obj()
{
}

void ComponentValidation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentValidation);
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_delayedInvalidationFlags,"_delayedInvalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	HX_MARK_MEMBER_NAME(_isInitialized,"_isInitialized");
	HX_MARK_MEMBER_NAME(_isDisposed,"_isDisposed");
	HX_MARK_MEMBER_NAME(_invalidateCount,"_invalidateCount");
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::core::ComponentEvents_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentValidation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_delayedInvalidationFlags,"_delayedInvalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	HX_VISIT_MEMBER_NAME(_isInitialized,"_isInitialized");
	HX_VISIT_MEMBER_NAME(_isDisposed,"_isDisposed");
	HX_VISIT_MEMBER_NAME(_invalidateCount,"_invalidateCount");
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::core::ComponentEvents_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentValidation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return ::hx::Val( set_depth_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isDisposed") ) { return ::hx::Val( _isDisposed ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return ::hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return ::hx::Val( _isValidating ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_isInitialized") ) { return ::hx::Val( _isInitialized ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_invalidateCount") ) { return ::hx::Val( _invalidateCount ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"validateComponent") ) { return ::hx::Val( validateComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return ::hx::Val( _invalidationFlags ); }
		if (HX_FIELD_EQ(inName,"isComponentInvalid") ) { return ::hx::Val( isComponentInvalid_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"invalidateComponent") ) { return ::hx::Val( invalidateComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializeComponent") ) { return ::hx::Val( initializeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateInitialSize") ) { return ::hx::Val( validateInitialSize_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"validateComponentStyle") ) { return ::hx::Val( validateComponentStyle_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidateComponentData") ) { return ::hx::Val( invalidateComponentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncComponentValidation") ) { return ::hx::Val( syncComponentValidation_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidateComponentStyle") ) { return ::hx::Val( invalidateComponentStyle_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_delayedInvalidationFlags") ) { return ::hx::Val( _delayedInvalidationFlags ); }
		if (HX_FIELD_EQ(inName,"invalidateComponentLayout") ) { return ::hx::Val( invalidateComponentLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentInternal") ) { return ::hx::Val( validateComponentInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentPosition") ) { return ::hx::Val( validateComponentPosition_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"invalidateComponentDisplay") ) { return ::hx::Val( invalidateComponentDisplay_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"invalidateComponentPosition") ) { return ::hx::Val( invalidateComponentPosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentValidation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depth(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isDisposed") ) { _isDisposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_isInitialized") ) { _isInitialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_invalidateCount") ) { _invalidateCount=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_delayedInvalidationFlags") ) { _delayedInvalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentValidation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_invalidationFlags",ca,12,21,cb));
	outFields->push(HX_("_delayedInvalidationFlags",66,26,ce,04));
	outFields->push(HX_("_isAllInvalid",3f,9b,7e,b8));
	outFields->push(HX_("_isValidating",bc,c6,7a,96));
	outFields->push(HX_("_isInitialized",8b,35,86,7e));
	outFields->push(HX_("_isDisposed",0e,ea,dc,74));
	outFields->push(HX_("_invalidateCount",d5,9f,f0,22));
	outFields->push(HX_("_depth",44,38,11,d3));
	outFields->push(HX_("depth",03,f1,29,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentValidation_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentValidation_obj,_invalidationFlags),HX_("_invalidationFlags",ca,12,21,cb)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentValidation_obj,_delayedInvalidationFlags),HX_("_delayedInvalidationFlags",66,26,ce,04)},
	{::hx::fsBool,(int)offsetof(ComponentValidation_obj,_isAllInvalid),HX_("_isAllInvalid",3f,9b,7e,b8)},
	{::hx::fsBool,(int)offsetof(ComponentValidation_obj,_isValidating),HX_("_isValidating",bc,c6,7a,96)},
	{::hx::fsBool,(int)offsetof(ComponentValidation_obj,_isInitialized),HX_("_isInitialized",8b,35,86,7e)},
	{::hx::fsBool,(int)offsetof(ComponentValidation_obj,_isDisposed),HX_("_isDisposed",0e,ea,dc,74)},
	{::hx::fsInt,(int)offsetof(ComponentValidation_obj,_invalidateCount),HX_("_invalidateCount",d5,9f,f0,22)},
	{::hx::fsInt,(int)offsetof(ComponentValidation_obj,_depth),HX_("_depth",44,38,11,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentValidation_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentValidation_obj_sMemberFields[] = {
	HX_("_invalidationFlags",ca,12,21,cb),
	HX_("_delayedInvalidationFlags",66,26,ce,04),
	HX_("_isAllInvalid",3f,9b,7e,b8),
	HX_("_isValidating",bc,c6,7a,96),
	HX_("_isInitialized",8b,35,86,7e),
	HX_("_isDisposed",0e,ea,dc,74),
	HX_("_invalidateCount",d5,9f,f0,22),
	HX_("_depth",44,38,11,d3),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("isComponentInvalid",c4,7f,60,d7),
	HX_("invalidateComponent",c2,2f,39,9e),
	HX_("invalidateComponentData",0c,bb,f5,64),
	HX_("invalidateComponentLayout",0c,90,57,10),
	HX_("invalidateComponentPosition",8b,1e,1e,d1),
	HX_("invalidateComponentDisplay",a0,7e,b0,ae),
	HX_("invalidateComponentStyle",0f,86,a3,a1),
	HX_("validateComponent",47,3d,eb,a4),
	HX_("validateNow",20,c2,bf,ca),
	HX_("syncComponentValidation",bb,b1,33,45),
	HX_("validateComponentInternal",a4,7f,0c,11),
	HX_("initializeComponent",4d,f5,42,2d),
	HX_("validateInitialSize",6f,72,e3,cb),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("validateComponentStyle",6a,56,d9,e6),
	HX_("validateComponentPosition",10,b9,90,b3),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ComponentValidation_obj::__mClass;

void ComponentValidation_obj::__register()
{
	ComponentValidation_obj _hx_dummy;
	ComponentValidation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentValidation",b9,db,62,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentValidation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentValidation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentValidation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentValidation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
