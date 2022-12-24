#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_6_new,"haxe.ui.core.ComponentBounds","new",0x466bd567,"haxe.ui.core.ComponentBounds.new","haxe/ui/core/ComponentBounds.hx",6,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_15_get_autoWidth,"haxe.ui.core.ComponentBounds","get_autoWidth",0x1c16fbb5,"haxe.ui.core.ComponentBounds.get_autoWidth","haxe/ui/core/ComponentBounds.hx",15,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_35_get_autoHeight,"haxe.ui.core.ComponentBounds","get_autoHeight",0x2e54bb58,"haxe.ui.core.ComponentBounds.get_autoHeight","haxe/ui/core/ComponentBounds.hx",35,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_46_resizeComponent,"haxe.ui.core.ComponentBounds","resizeComponent",0x20c18bb0,"haxe.ui.core.ComponentBounds.resizeComponent","haxe/ui/core/ComponentBounds.hx",46,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_66_get_actualComponentWidth,"haxe.ui.core.ComponentBounds","get_actualComponentWidth",0xa12a6459,"haxe.ui.core.ComponentBounds.get_actualComponentWidth","haxe/ui/core/ComponentBounds.hx",66,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_71_get_actualComponentHeight,"haxe.ui.core.ComponentBounds","get_actualComponentHeight",0x1a3ce234,"haxe.ui.core.ComponentBounds.get_actualComponentHeight","haxe/ui/core/ComponentBounds.hx",71,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_82_get_componentWidth,"haxe.ui.core.ComponentBounds","get_componentWidth",0x6d0a03ab,"haxe.ui.core.ComponentBounds.get_componentWidth","haxe/ui/core/ComponentBounds.hx",82,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_88_set_componentWidth,"haxe.ui.core.ComponentBounds","set_componentWidth",0x49b9361f,"haxe.ui.core.ComponentBounds.set_componentWidth","haxe/ui/core/ComponentBounds.hx",88,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_101_get_componentHeight,"haxe.ui.core.ComponentBounds","get_componentHeight",0xb208aaa2,"haxe.ui.core.ComponentBounds.get_componentHeight","haxe/ui/core/ComponentBounds.hx",101,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_107_set_componentHeight,"haxe.ui.core.ComponentBounds","set_componentHeight",0xeea59dae,"haxe.ui.core.ComponentBounds.set_componentHeight","haxe/ui/core/ComponentBounds.hx",107,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_119_get_percentWidth,"haxe.ui.core.ComponentBounds","get_percentWidth",0x83006023,"haxe.ui.core.ComponentBounds.get_percentWidth","haxe/ui/core/ComponentBounds.hx",119,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_121_set_percentWidth,"haxe.ui.core.ComponentBounds","set_percentWidth",0xd9424d97,"haxe.ui.core.ComponentBounds.set_percentWidth","haxe/ui/core/ComponentBounds.hx",121,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_143_get_percentHeight,"haxe.ui.core.ComponentBounds","get_percentHeight",0xd3a3372a,"haxe.ui.core.ComponentBounds.get_percentHeight","haxe/ui/core/ComponentBounds.hx",143,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_145_set_percentHeight,"haxe.ui.core.ComponentBounds","set_percentHeight",0xf7110f36,"haxe.ui.core.ComponentBounds.set_percentHeight","haxe/ui/core/ComponentBounds.hx",145,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_161_cachePercentSizes,"haxe.ui.core.ComponentBounds","cachePercentSizes",0x8bf00836,"haxe.ui.core.ComponentBounds.cachePercentSizes","haxe/ui/core/ComponentBounds.hx",161,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_176_restorePercentSizes,"haxe.ui.core.ComponentBounds","restorePercentSizes",0x2c55d702,"haxe.ui.core.ComponentBounds.restorePercentSizes","haxe/ui/core/ComponentBounds.hx",176,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_299_set_width,"haxe.ui.core.ComponentBounds","set_width",0xe7dd02b0,"haxe.ui.core.ComponentBounds.set_width","haxe/ui/core/ComponentBounds.hx",299,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_308_get_width,"haxe.ui.core.ComponentBounds","get_width",0x048c16a4,"haxe.ui.core.ComponentBounds.get_width","haxe/ui/core/ComponentBounds.hx",308,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_319_set_height,"haxe.ui.core.ComponentBounds","set_height",0xafd4cffd,"haxe.ui.core.ComponentBounds.set_height","haxe/ui/core/ComponentBounds.hx",319,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_328_get_height,"haxe.ui.core.ComponentBounds","get_height",0xac573189,"haxe.ui.core.ComponentBounds.get_height","haxe/ui/core/ComponentBounds.hx",328,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_340_get_hasScreen,"haxe.ui.core.ComponentBounds","get_hasScreen",0xfbeef604,"haxe.ui.core.ComponentBounds.get_hasScreen","haxe/ui/core/ComponentBounds.hx",340,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_357_hitTest,"haxe.ui.core.ComponentBounds","hitTest",0x1d4bf4cc,"haxe.ui.core.ComponentBounds.hitTest","haxe/ui/core/ComponentBounds.hx",357,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_405_autoSize,"haxe.ui.core.ComponentBounds","autoSize",0x67aef169,"haxe.ui.core.ComponentBounds.autoSize","haxe/ui/core/ComponentBounds.hx",405,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_419_moveComponent,"haxe.ui.core.ComponentBounds","moveComponent",0xdc48b733,"haxe.ui.core.ComponentBounds.moveComponent","haxe/ui/core/ComponentBounds.hx",419,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_442_get_left,"haxe.ui.core.ComponentBounds","get_left",0xffa02529,"haxe.ui.core.ComponentBounds.get_left","haxe/ui/core/ComponentBounds.hx",442,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_444_set_left,"haxe.ui.core.ComponentBounds","set_left",0xadfd7e9d,"haxe.ui.core.ComponentBounds.set_left","haxe/ui/core/ComponentBounds.hx",444,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_456_get_top,"haxe.ui.core.ComponentBounds","get_top",0x6199c3b3,"haxe.ui.core.ComponentBounds.get_top","haxe/ui/core/ComponentBounds.hx",456,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_458_set_top,"haxe.ui.core.ComponentBounds","set_top",0x549b54bf,"haxe.ui.core.ComponentBounds.set_top","haxe/ui/core/ComponentBounds.hx",458,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_468_get_screenLeft,"haxe.ui.core.ComponentBounds","get_screenLeft",0x80243835,"haxe.ui.core.ComponentBounds.get_screenLeft","haxe/ui/core/ComponentBounds.hx",468,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_492_get_screenTop,"haxe.ui.core.ComponentBounds","get_screenTop",0xaba5d627,"haxe.ui.core.ComponentBounds.get_screenTop","haxe/ui/core/ComponentBounds.hx",492,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_519_get_componentClipRect,"haxe.ui.core.ComponentBounds","get_componentClipRect",0xeaa1978f,"haxe.ui.core.ComponentBounds.get_componentClipRect","haxe/ui/core/ComponentBounds.hx",519,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_525_set_componentClipRect,"haxe.ui.core.ComponentBounds","set_componentClipRect",0x3eaa659b,"haxe.ui.core.ComponentBounds.set_componentClipRect","haxe/ui/core/ComponentBounds.hx",525,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_533_get_isComponentClipped,"haxe.ui.core.ComponentBounds","get_isComponentClipped",0xa554c16e,"haxe.ui.core.ComponentBounds.get_isComponentClipped","haxe/ui/core/ComponentBounds.hx",533,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_537_get_isComponentOffscreen,"haxe.ui.core.ComponentBounds","get_isComponentOffscreen",0x03f1bf4a,"haxe.ui.core.ComponentBounds.get_isComponentOffscreen","haxe/ui/core/ComponentBounds.hx",537,0xcd40c58a)
HX_LOCAL_STACK_FRAME(_hx_pos_2051edeb640839da_442_registerBehaviours,"haxe.ui.core.ComponentBounds","registerBehaviours",0xec6e62b2,"haxe.ui.core.ComponentBounds.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_eca886cf6a046070_565_cloneComponent,"haxe.ui.core.ComponentBounds","cloneComponent",0x709f03f9,"haxe.ui.core.ComponentBounds.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_2051edeb640839da_423_self,"haxe.ui.core.ComponentBounds","self",0x5b3ceca5,"haxe.ui.core.ComponentBounds.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c6648d67aeb5a0_6_boot,"haxe.ui.core.ComponentBounds","boot",0x5007e54b,"haxe.ui.core.ComponentBounds.boot","haxe/ui/core/ComponentBounds.hx",6,0xcd40c58a)
namespace haxe{
namespace ui{
namespace core{

void ComponentBounds_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_6_new)
HXLINE( 514)		this->_componentClipRect = null();
HXLINE( 449)		this->_top = ((Float)0);
HXLINE( 435)		this->_left = ((Float)0);
HXLINE( 338)		this->_hasScreen = null();
HXLINE( 160)		this->_cachedPercentHeight = null();
HXLINE( 159)		this->_cachedPercentWidth = null();
HXLINE(   6)		super::__construct();
            	}

Dynamic ComponentBounds_obj::__CreateEmpty() { return new ComponentBounds_obj; }

void *ComponentBounds_obj::_hx_vtable = 0;

Dynamic ComponentBounds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentBounds_obj > _hx_result = new ComponentBounds_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentBounds_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x01557b4b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			return inClassId==(int)0x4ba87886 || inClassId==(int)0x715d6dae;
		} else {
			return inClassId==(int)0x7ec24579;
		}
	}
}

bool ComponentBounds_obj::get_autoWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_15_get_autoWidth)
HXLINE(  16)		bool _hx_tmp;
HXDLIN(  16)		if (::hx::IsNull( this->_percentWidth )) {
HXLINE(  16)			_hx_tmp = ::hx::IsNotNull( this->_width );
            		}
            		else {
HXLINE(  16)			_hx_tmp = true;
            		}
HXDLIN(  16)		if (_hx_tmp) {
HXLINE(  17)			return false;
            		}
HXLINE(  20)		if (::hx::IsNull( this->get_style() )) {
HXLINE(  21)			return true;
            		}
HXLINE(  24)		if (::hx::IsNull( this->get_style()->autoWidth )) {
HXLINE(  25)			return false;
            		}
HXLINE(  27)		return ( (bool)(this->get_style()->autoWidth) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_autoWidth,return )

bool ComponentBounds_obj::get_autoHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_35_get_autoHeight)
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		bool _hx_tmp1;
HXDLIN(  36)		if (::hx::IsNull( this->_percentHeight )) {
HXLINE(  36)			_hx_tmp1 = ::hx::IsNotNull( this->_height );
            		}
            		else {
HXLINE(  36)			_hx_tmp1 = true;
            		}
HXDLIN(  36)		if (!(_hx_tmp1)) {
HXLINE(  36)			_hx_tmp = ::hx::IsNull( this->get_style() );
            		}
            		else {
HXLINE(  36)			_hx_tmp = true;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  37)			return false;
            		}
HXLINE(  39)		if (::hx::IsNull( this->get_style()->autoHeight )) {
HXLINE(  40)			return false;
            		}
HXLINE(  42)		return ( (bool)(this->get_style()->autoHeight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_autoHeight,return )

void ComponentBounds_obj::resizeComponent( ::Dynamic w, ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_46_resizeComponent)
HXLINE(  47)		bool invalidate = false;
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (::hx::IsNotNull( w )) {
HXLINE(  49)			_hx_tmp = ::hx::IsNotEq( this->_componentWidth,w );
            		}
            		else {
HXLINE(  49)			_hx_tmp = false;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			this->_componentWidth = w;
HXLINE(  51)			invalidate = true;
            		}
HXLINE(  54)		bool _hx_tmp1;
HXDLIN(  54)		if (::hx::IsNotNull( h )) {
HXLINE(  54)			_hx_tmp1 = ::hx::IsNotEq( this->_componentHeight,h );
            		}
            		else {
HXLINE(  54)			_hx_tmp1 = false;
            		}
HXDLIN(  54)		if (_hx_tmp1) {
HXLINE(  55)			this->_componentHeight = h;
HXLINE(  56)			invalidate = true;
            		}
HXLINE(  59)		bool _hx_tmp2;
HXDLIN(  59)		if ((invalidate == true)) {
HXLINE(  59)			_hx_tmp2 = (this->isComponentInvalid(HX_("layout",aa,ae,b8,58)) == false);
            		}
            		else {
HXLINE(  59)			_hx_tmp2 = false;
            		}
HXDLIN(  59)		if (_hx_tmp2) {
HXLINE(  60)			bool _hx_tmp;
HXDLIN(  60)			if (::hx::IsNotNull( this->_layout )) {
HXLINE(  60)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE(  60)				_hx_tmp = true;
            			}
HXDLIN(  60)			if (!(_hx_tmp)) {
HXLINE(  60)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBounds_obj,resizeComponent,(void))

Float ComponentBounds_obj::get_actualComponentWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_66_get_actualComponentWidth)
HXDLIN(  66)		 ::Dynamic _hx_tmp = this->get_componentWidth();
HXDLIN(  66)		return (( (Float)(_hx_tmp) ) * ::haxe::ui::Toolkit_obj::get_scaleX());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_actualComponentWidth,return )

Float ComponentBounds_obj::get_actualComponentHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_71_get_actualComponentHeight)
HXDLIN(  71)		 ::Dynamic _hx_tmp = this->get_componentHeight();
HXDLIN(  71)		return (( (Float)(_hx_tmp) ) * ::haxe::ui::Toolkit_obj::get_scaleY());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_actualComponentHeight,return )

 ::Dynamic ComponentBounds_obj::get_componentWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_82_get_componentWidth)
HXLINE(  83)		if (::hx::IsNull( this->_componentWidth )) {
HXLINE(  84)			return 0;
            		}
HXLINE(  86)		return this->_componentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_componentWidth,return )

 ::Dynamic ComponentBounds_obj::set_componentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_88_set_componentWidth)
HXLINE(  89)		this->resizeComponent(value,null());
HXLINE(  90)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_componentWidth,return )

 ::Dynamic ComponentBounds_obj::get_componentHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_101_get_componentHeight)
HXLINE( 102)		if (::hx::IsNull( this->_componentHeight )) {
HXLINE( 103)			return 0;
            		}
HXLINE( 105)		return this->_componentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_componentHeight,return )

 ::Dynamic ComponentBounds_obj::set_componentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_107_set_componentHeight)
HXLINE( 108)		this->resizeComponent(null(),value);
HXLINE( 109)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_componentHeight,return )

 ::Dynamic ComponentBounds_obj::get_percentWidth(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_119_get_percentWidth)
HXDLIN( 119)		return this->_percentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_percentWidth,return )

 ::Dynamic ComponentBounds_obj::set_percentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_121_set_percentWidth)
HXLINE( 122)		if (::hx::IsEq( this->_percentWidth,value )) {
HXLINE( 123)			return value;
            		}
HXLINE( 126)		this->_percentWidth = value;
HXLINE( 128)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 129)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 129)			bool _hx_tmp;
HXDLIN( 129)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 129)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 129)				_hx_tmp = true;
            			}
HXDLIN( 129)			if (!(_hx_tmp)) {
HXLINE( 129)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            		else {
HXLINE( 131)			::haxe::ui::core::Screen_obj::get_instance()->resizeRootComponents();
            		}
HXLINE( 133)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_percentWidth,return )

 ::Dynamic ComponentBounds_obj::get_percentHeight(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_143_get_percentHeight)
HXDLIN( 143)		return this->_percentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_percentHeight,return )

 ::Dynamic ComponentBounds_obj::set_percentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_145_set_percentHeight)
HXLINE( 146)		if (::hx::IsEq( this->_percentHeight,value )) {
HXLINE( 147)			return value;
            		}
HXLINE( 149)		this->_percentHeight = value;
HXLINE( 151)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 152)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 152)			bool _hx_tmp;
HXDLIN( 152)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 152)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 152)				_hx_tmp = true;
            			}
HXDLIN( 152)			if (!(_hx_tmp)) {
HXLINE( 152)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            		else {
HXLINE( 154)			::haxe::ui::core::Screen_obj::get_instance()->resizeRootComponents();
            		}
HXLINE( 156)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_percentHeight,return )

void ComponentBounds_obj::cachePercentSizes(::hx::Null< bool >  __o_clearExisting){
            		bool clearExisting = __o_clearExisting.Default(true);
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_161_cachePercentSizes)
HXLINE( 162)		if (::hx::IsNotNull( this->_percentWidth )) {
HXLINE( 163)			this->_cachedPercentWidth = this->_percentWidth;
HXLINE( 164)			if ((clearExisting == true)) {
HXLINE( 165)				this->_percentWidth = null();
            			}
            		}
HXLINE( 168)		if (::hx::IsNotNull( this->_percentHeight )) {
HXLINE( 169)			this->_cachedPercentHeight = this->_percentHeight;
HXLINE( 170)			if ((clearExisting == true)) {
HXLINE( 171)				this->_percentHeight = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,cachePercentSizes,(void))

void ComponentBounds_obj::restorePercentSizes(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_176_restorePercentSizes)
HXLINE( 177)		if (::hx::IsNotNull( this->_cachedPercentWidth )) {
HXLINE( 178)			this->set_percentWidth(this->_cachedPercentWidth);
            		}
HXLINE( 180)		if (::hx::IsNotNull( this->_cachedPercentHeight )) {
HXLINE( 181)			this->set_percentHeight(this->_cachedPercentHeight);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,restorePercentSizes,(void))

 ::Dynamic ComponentBounds_obj::set_width( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_299_set_width)
HXLINE( 300)		if (::hx::IsEq( this->_width,value )) {
HXLINE( 301)			return value;
            		}
HXLINE( 303)		this->_width = value;
HXLINE( 304)		this->set_componentWidth(value);
HXLINE( 305)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_width,return )

 ::Dynamic ComponentBounds_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_308_get_width)
HXLINE( 309)		Float f = ( (Float)(this->get_componentWidth()) );
HXLINE( 310)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_width,return )

 ::Dynamic ComponentBounds_obj::set_height( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_319_set_height)
HXLINE( 320)		if (::hx::IsEq( this->_height,value )) {
HXLINE( 321)			return value;
            		}
HXLINE( 323)		this->_height = value;
HXLINE( 324)		this->set_componentHeight(value);
HXLINE( 325)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_height,return )

 ::Dynamic ComponentBounds_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_328_get_height)
HXLINE( 329)		Float f = ( (Float)(this->get_componentHeight()) );
HXLINE( 330)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_height,return )

bool ComponentBounds_obj::get_hasScreen(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_340_get_hasScreen)
HXLINE( 341)		 ::haxe::ui::core::ComponentBounds p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 342)		while(::hx::IsNotNull( p )){
HXLINE( 343)			if (::hx::IsEq( p->_hasScreen,false )) {
HXLINE( 344)				return false;
            			}
HXLINE( 346)			p = p->parentComponent;
            		}
HXLINE( 348)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_hasScreen,return )

bool ComponentBounds_obj::hitTest(Float left,Float top,::hx::Null< bool >  __o_allowZeroSized){
            		bool allowZeroSized = __o_allowZeroSized.Default(false);
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_357_hitTest)
HXLINE( 359)		if ((this->get_hasScreen() == false)) {
HXLINE( 360)			return false;
            		}
HXLINE( 363)		left = (left * ::haxe::ui::Toolkit_obj::get_scale());
HXLINE( 364)		top = (top * ::haxe::ui::Toolkit_obj::get_scale());
HXLINE( 366)		bool b = false;
HXLINE( 367)		Float sx = this->get_screenLeft();
HXLINE( 368)		Float sy = this->get_screenTop();
HXLINE( 370)		Float cx = ( (Float)(0) );
HXLINE( 371)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE( 372)			cx = this->get_actualComponentWidth();
            		}
HXLINE( 374)		Float cy = ( (Float)(0) );
HXLINE( 375)		if (::hx::IsNotNull( this->get_componentHeight() )) {
HXLINE( 376)			cy = this->get_actualComponentHeight();
            		}
HXLINE( 379)		if ((allowZeroSized == true)) {
HXLINE( 389)			bool _hx_tmp;
HXDLIN( 389)			if (!(::hx::IsLessEq( this->get_width(),0 ))) {
HXLINE( 389)				_hx_tmp = ::hx::IsLessEq( this->get_height(),0 );
            			}
            			else {
HXLINE( 389)				_hx_tmp = true;
            			}
HXDLIN( 389)			if (_hx_tmp) {
HXLINE( 390)				return true;
            			}
            		}
HXLINE( 394)		bool _hx_tmp;
HXDLIN( 394)		bool _hx_tmp1;
HXDLIN( 394)		bool _hx_tmp2;
HXDLIN( 394)		if ((left >= sx)) {
HXLINE( 394)			_hx_tmp2 = (left < (sx + cx));
            		}
            		else {
HXLINE( 394)			_hx_tmp2 = false;
            		}
HXDLIN( 394)		if (_hx_tmp2) {
HXLINE( 394)			_hx_tmp1 = (top >= sy);
            		}
            		else {
HXLINE( 394)			_hx_tmp1 = false;
            		}
HXDLIN( 394)		if (_hx_tmp1) {
HXLINE( 394)			_hx_tmp = (top < (sy + cy));
            		}
            		else {
HXLINE( 394)			_hx_tmp = false;
            		}
HXDLIN( 394)		if (_hx_tmp) {
HXLINE( 395)			b = true;
            		}
HXLINE( 398)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBounds_obj,hitTest,return )

bool ComponentBounds_obj::autoSize(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_405_autoSize)
HXLINE( 406)		bool _hx_tmp;
HXDLIN( 406)		if ((this->_ready != false)) {
HXLINE( 406)			_hx_tmp = ::hx::IsNull( this->_layout );
            		}
            		else {
HXLINE( 406)			_hx_tmp = true;
            		}
HXDLIN( 406)		if (_hx_tmp) {
HXLINE( 407)			return false;
            		}
HXLINE( 409)		return this->_layout->autoSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,autoSize,return )

void ComponentBounds_obj::moveComponent( ::Dynamic left, ::Dynamic top){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_419_moveComponent)
HXLINE( 420)		bool invalidate = false;
HXLINE( 421)		bool _hx_tmp;
HXDLIN( 421)		if (::hx::IsNotNull( left )) {
HXLINE( 421)			_hx_tmp = ::hx::IsNotEq( this->_left,left );
            		}
            		else {
HXLINE( 421)			_hx_tmp = false;
            		}
HXDLIN( 421)		if (_hx_tmp) {
HXLINE( 422)			this->_left = left;
HXLINE( 423)			invalidate = true;
            		}
HXLINE( 425)		bool _hx_tmp1;
HXDLIN( 425)		if (::hx::IsNotNull( top )) {
HXLINE( 425)			_hx_tmp1 = ::hx::IsNotEq( this->_top,top );
            		}
            		else {
HXLINE( 425)			_hx_tmp1 = false;
            		}
HXDLIN( 425)		if (_hx_tmp1) {
HXLINE( 426)			this->_top = top;
HXLINE( 427)			invalidate = true;
            		}
HXLINE( 430)		bool _hx_tmp2;
HXDLIN( 430)		if ((invalidate == true)) {
HXLINE( 430)			_hx_tmp2 = (this->isComponentInvalid(HX_("position",a9,a0,fa,ca)) == false);
            		}
            		else {
HXLINE( 430)			_hx_tmp2 = false;
            		}
HXDLIN( 430)		if (_hx_tmp2) {
HXLINE( 431)			this->invalidateComponent(HX_("position",a9,a0,fa,ca),false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBounds_obj,moveComponent,(void))

 ::Dynamic ComponentBounds_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_442_get_left)
HXDLIN( 442)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_left,return )

 ::Dynamic ComponentBounds_obj::set_left( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_444_set_left)
HXLINE( 445)		this->moveComponent(value,null());
HXLINE( 446)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_left,return )

 ::Dynamic ComponentBounds_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_456_get_top)
HXDLIN( 456)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_top,return )

 ::Dynamic ComponentBounds_obj::set_top( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_458_set_top)
HXLINE( 459)		this->moveComponent(null(),value);
HXLINE( 460)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_top,return )

Float ComponentBounds_obj::get_screenLeft(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_468_get_screenLeft)
HXLINE( 469)		 ::haxe::ui::core::ComponentBounds c = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 470)		Float xpos = ( (Float)(0) );
HXLINE( 471)		while(::hx::IsNotNull( c )){
HXLINE( 472)			 ::Dynamic l = c->get_left();
HXLINE( 473)			if (::hx::IsNotNull( c->parentComponent )) {
HXLINE( 474)				l = (l * ::haxe::ui::Toolkit_obj::get_scale());
            			}
HXLINE( 476)			xpos = (xpos + l);
HXLINE( 478)			if (::hx::IsNotNull( c->get_componentClipRect() )) {
HXLINE( 479)				Float xpos1 = c->get_componentClipRect()->left;
HXDLIN( 479)				xpos = (xpos - (xpos1 * ::haxe::ui::Toolkit_obj::get_scaleX()));
            			}
HXLINE( 482)			c = c->parentComponent;
            		}
HXLINE( 484)		return xpos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_screenLeft,return )

Float ComponentBounds_obj::get_screenTop(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_492_get_screenTop)
HXLINE( 493)		 ::haxe::ui::core::ComponentBounds c = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 494)		Float ypos = ( (Float)(0) );
HXLINE( 495)		while(::hx::IsNotNull( c )){
HXLINE( 496)			 ::Dynamic t = c->get_top();
HXLINE( 497)			if (::hx::IsNotNull( c->parentComponent )) {
HXLINE( 498)				t = (t * ::haxe::ui::Toolkit_obj::get_scale());
            			}
HXLINE( 500)			ypos = (ypos + t);
HXLINE( 502)			if (::hx::IsNotNull( c->get_componentClipRect() )) {
HXLINE( 503)				Float ypos1 = c->get_componentClipRect()->top;
HXDLIN( 503)				ypos = (ypos - (ypos1 * ::haxe::ui::Toolkit_obj::get_scaleY()));
            			}
HXLINE( 506)			c = c->parentComponent;
            		}
HXLINE( 508)		return ypos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_screenTop,return )

 ::haxe::ui::geom::Rectangle ComponentBounds_obj::get_componentClipRect(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_519_get_componentClipRect)
HXLINE( 520)		bool _hx_tmp;
HXDLIN( 520)		bool _hx_tmp1;
HXDLIN( 520)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 520)			_hx_tmp1 = ::hx::IsNotNull( this->get_style()->clip );
            		}
            		else {
HXLINE( 520)			_hx_tmp1 = false;
            		}
HXDLIN( 520)		if (_hx_tmp1) {
HXLINE( 520)			_hx_tmp = ::hx::IsEq( this->get_style()->clip,true );
            		}
            		else {
HXLINE( 520)			_hx_tmp = false;
            		}
HXDLIN( 520)		if (_hx_tmp) {
HXLINE( 521)			 ::Dynamic _hx_tmp = this->get_componentWidth();
HXDLIN( 521)			return  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp,this->get_componentHeight());
            		}
HXLINE( 523)		return this->_componentClipRect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_componentClipRect,return )

 ::haxe::ui::geom::Rectangle ComponentBounds_obj::set_componentClipRect( ::haxe::ui::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_525_set_componentClipRect)
HXLINE( 526)		this->_componentClipRect = value;
HXLINE( 527)		this->invalidateComponent(HX_("display",42,2a,4a,bb),false);
HXLINE( 528)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBounds_obj,set_componentClipRect,return )

bool ComponentBounds_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_533_get_isComponentClipped)
HXDLIN( 533)		return ::hx::IsNotNull( this->get_componentClipRect() );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_isComponentClipped,return )

bool ComponentBounds_obj::get_isComponentOffscreen(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_537_get_isComponentOffscreen)
HXLINE( 538)		bool _hx_tmp;
HXDLIN( 538)		if (::hx::IsEq( this->get_width(),0 )) {
HXLINE( 538)			_hx_tmp = ::hx::IsEq( this->get_height(),0 );
            		}
            		else {
HXLINE( 538)			_hx_tmp = false;
            		}
HXDLIN( 538)		if (_hx_tmp) {
HXLINE( 539)			return false;
            		}
HXLINE( 541)		Float x = this->get_screenLeft();
HXLINE( 542)		Float y = this->get_screenTop();
HXLINE( 543)		Float w = ( (Float)(this->get_width()) );
HXLINE( 544)		Float h = ( (Float)(this->get_height()) );
HXLINE( 546)		 ::haxe::ui::geom::Rectangle thisRect =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,w,h);
HXLINE( 547)		Float screenRect = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN( 547)		 ::haxe::ui::geom::Rectangle screenRect1 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,screenRect,::haxe::ui::core::Screen_obj::get_instance()->get_height());
HXLINE( 548)		return !(screenRect1->intersects(thisRect));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBounds_obj,get_isComponentOffscreen,return )

void ComponentBounds_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_2051edeb640839da_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ComponentBounds_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_eca886cf6a046070_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::core::ComponentBounds c = ( ( ::haxe::ui::core::ComponentBounds)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE( 380)			c->set_componentWidth(this->get_componentWidth());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_componentHeight() )) {
HXLINE( 380)			c->set_componentHeight(this->get_componentHeight());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_percentWidth() )) {
HXLINE( 380)			c->set_percentWidth(this->get_percentWidth());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_percentHeight() )) {
HXLINE( 380)			c->set_percentHeight(this->get_percentHeight());
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


 ::haxe::ui::core::ComponentContainer ComponentBounds_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_2051edeb640839da_423_self)
HXDLIN( 423)		return  ::haxe::ui::core::ComponentBounds_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ComponentBounds_obj > ComponentBounds_obj::__new() {
	::hx::ObjectPtr< ComponentBounds_obj > __this = new ComponentBounds_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentBounds_obj > ComponentBounds_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentBounds_obj *__this = (ComponentBounds_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentBounds_obj), true, "haxe.ui.core.ComponentBounds"));
	*(void **)__this = ComponentBounds_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentBounds_obj::ComponentBounds_obj()
{
}

void ComponentBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentBounds);
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(actualComponentWidth,"actualComponentWidth");
	HX_MARK_MEMBER_NAME(actualComponentHeight,"actualComponentHeight");
	HX_MARK_MEMBER_NAME(_componentWidth,"_componentWidth");
	HX_MARK_MEMBER_NAME(_componentHeight,"_componentHeight");
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_MARK_MEMBER_NAME(_cachedPercentWidth,"_cachedPercentWidth");
	HX_MARK_MEMBER_NAME(_cachedPercentHeight,"_cachedPercentHeight");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_actualWidth,"_actualWidth");
	HX_MARK_MEMBER_NAME(_actualHeight,"_actualHeight");
	HX_MARK_MEMBER_NAME(_hasScreen,"_hasScreen");
	HX_MARK_MEMBER_NAME(hasScreen,"hasScreen");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(screenLeft,"screenLeft");
	HX_MARK_MEMBER_NAME(screenTop,"screenTop");
	HX_MARK_MEMBER_NAME(_componentClipRect,"_componentClipRect");
	HX_MARK_MEMBER_NAME(isComponentClipped,"isComponentClipped");
	HX_MARK_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	 ::haxe::ui::core::ComponentValidation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(actualComponentWidth,"actualComponentWidth");
	HX_VISIT_MEMBER_NAME(actualComponentHeight,"actualComponentHeight");
	HX_VISIT_MEMBER_NAME(_componentWidth,"_componentWidth");
	HX_VISIT_MEMBER_NAME(_componentHeight,"_componentHeight");
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_VISIT_MEMBER_NAME(_cachedPercentWidth,"_cachedPercentWidth");
	HX_VISIT_MEMBER_NAME(_cachedPercentHeight,"_cachedPercentHeight");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_actualWidth,"_actualWidth");
	HX_VISIT_MEMBER_NAME(_actualHeight,"_actualHeight");
	HX_VISIT_MEMBER_NAME(_hasScreen,"_hasScreen");
	HX_VISIT_MEMBER_NAME(hasScreen,"hasScreen");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(screenLeft,"screenLeft");
	HX_VISIT_MEMBER_NAME(screenTop,"screenTop");
	HX_VISIT_MEMBER_NAME(_componentClipRect,"_componentClipRect");
	HX_VISIT_MEMBER_NAME(isComponentClipped,"isComponentClipped");
	HX_VISIT_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	 ::haxe::ui::core::ComponentValidation_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentBounds_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		if (HX_FIELD_EQ(inName,"_top") ) { return ::hx::Val( _top ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return ::hx::Val( hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_autoWidth() : autoWidth ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasScreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasScreen() : hasScreen ); }
		if (HX_FIELD_EQ(inName,"screenTop") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenTop() : screenTop ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_autoHeight() : autoHeight ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hasScreen") ) { return ::hx::Val( _hasScreen ); }
		if (HX_FIELD_EQ(inName,"screenLeft") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenLeft() : screenLeft ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentWidth() ); }
		if (HX_FIELD_EQ(inName,"_actualWidth") ) { return ::hx::Val( _actualWidth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_autoWidth") ) { return ::hx::Val( get_autoWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return ::hx::Val( _percentWidth ); }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentHeight() ); }
		if (HX_FIELD_EQ(inName,"_actualHeight") ) { return ::hx::Val( _actualHeight ); }
		if (HX_FIELD_EQ(inName,"get_hasScreen") ) { return ::hx::Val( get_hasScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveComponent") ) { return ::hx::Val( moveComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_screenTop") ) { return ::hx::Val( get_screenTop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_autoHeight") ) { return ::hx::Val( get_autoHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"componentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentWidth() ); }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return ::hx::Val( _percentHeight ); }
		if (HX_FIELD_EQ(inName,"get_screenLeft") ) { return ::hx::Val( get_screenLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resizeComponent") ) { return ::hx::Val( resizeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_componentWidth") ) { return ::hx::Val( _componentWidth ); }
		if (HX_FIELD_EQ(inName,"componentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentHeight() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_componentHeight") ) { return ::hx::Val( _componentHeight ); }
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return ::hx::Val( get_percentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return ::hx::Val( set_percentWidth_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return ::hx::Val( get_percentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return ::hx::Val( set_percentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"cachePercentSizes") ) { return ::hx::Val( cachePercentSizes_dyn() ); }
		if (HX_FIELD_EQ(inName,"componentClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentClipRect() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_componentWidth") ) { return ::hx::Val( get_componentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentWidth") ) { return ::hx::Val( set_componentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_componentClipRect") ) { return ::hx::Val( _componentClipRect ); }
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentClipped() : isComponentClipped ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_componentHeight") ) { return ::hx::Val( get_componentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentHeight") ) { return ::hx::Val( set_componentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_cachedPercentWidth") ) { return ::hx::Val( _cachedPercentWidth ); }
		if (HX_FIELD_EQ(inName,"restorePercentSizes") ) { return ::hx::Val( restorePercentSizes_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actualComponentWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualComponentWidth() : actualComponentWidth ); }
		if (HX_FIELD_EQ(inName,"_cachedPercentHeight") ) { return ::hx::Val( _cachedPercentHeight ); }
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentOffscreen() : isComponentOffscreen ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"actualComponentHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualComponentHeight() : actualComponentHeight ); }
		if (HX_FIELD_EQ(inName,"get_componentClipRect") ) { return ::hx::Val( get_componentClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentClipRect") ) { return ::hx::Val( set_componentClipRect_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_actualComponentWidth") ) { return ::hx::Val( get_actualComponentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isComponentOffscreen") ) { return ::hx::Val( get_isComponentOffscreen_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_actualComponentHeight") ) { return ::hx::Val( get_actualComponentHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentBounds_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasScreen") ) { hasScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenTop") ) { screenTop=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasScreen") ) { _hasScreen=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenLeft") ) { screenLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_actualWidth") ) { _actualWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_actualHeight") ) { _actualHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"componentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_componentWidth") ) { _componentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"componentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_componentHeight") ) { _componentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentClipRect(inValue.Cast<  ::haxe::ui::geom::Rectangle >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_componentClipRect") ) { _componentClipRect=inValue.Cast<  ::haxe::ui::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { isComponentClipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_cachedPercentWidth") ) { _cachedPercentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actualComponentWidth") ) { actualComponentWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedPercentHeight") ) { _cachedPercentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { isComponentOffscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"actualComponentHeight") ) { actualComponentHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoWidth",17,f4,6d,a8));
	outFields->push(HX_("autoHeight",b6,18,17,6e));
	outFields->push(HX_("actualComponentWidth",37,63,0e,06));
	outFields->push(HX_("actualComponentHeight",96,e5,d7,fc));
	outFields->push(HX_("_componentWidth",a8,b0,c9,62));
	outFields->push(HX_("componentWidth",09,68,69,19));
	outFields->push(HX_("_componentHeight",05,5b,00,c4));
	outFields->push(HX_("componentHeight",84,18,21,d9));
	outFields->push(HX_("_percentWidth",e0,e3,89,e0));
	outFields->push(HX_("percentWidth",01,51,1b,fe));
	outFields->push(HX_("_percentHeight",cd,f8,6c,4e));
	outFields->push(HX_("percentHeight",8c,08,1b,10));
	outFields->push(HX_("_cachedPercentWidth",22,cc,7b,fc));
	outFields->push(HX_("_cachedPercentHeight",4b,4a,26,a6));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_actualWidth",99,86,4b,9e));
	outFields->push(HX_("_actualHeight",f4,b7,19,9a));
	outFields->push(HX_("_hasScreen",27,6a,e8,e3));
	outFields->push(HX_("hasScreen",66,ee,45,88));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("_top",96,ab,23,3f));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("screenLeft",93,95,e6,bf));
	outFields->push(HX_("screenTop",89,ce,fc,37));
	outFields->push(HX_("_componentClipRect",b2,66,30,2e));
	outFields->push(HX_("componentClipRect",f1,c1,1a,5b));
	outFields->push(HX_("isComponentClipped",cc,ac,e0,9e));
	outFields->push(HX_("isComponentOffscreen",28,be,d5,68));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentBounds_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,autoWidth),HX_("autoWidth",17,f4,6d,a8)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,autoHeight),HX_("autoHeight",b6,18,17,6e)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,actualComponentWidth),HX_("actualComponentWidth",37,63,0e,06)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,actualComponentHeight),HX_("actualComponentHeight",96,e5,d7,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_componentWidth),HX_("_componentWidth",a8,b0,c9,62)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_componentHeight),HX_("_componentHeight",05,5b,00,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_percentWidth),HX_("_percentWidth",e0,e3,89,e0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_percentHeight),HX_("_percentHeight",cd,f8,6c,4e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_cachedPercentWidth),HX_("_cachedPercentWidth",22,cc,7b,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_cachedPercentHeight),HX_("_cachedPercentHeight",4b,4a,26,a6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_actualWidth),HX_("_actualWidth",99,86,4b,9e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_actualHeight),HX_("_actualHeight",f4,b7,19,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_hasScreen),HX_("_hasScreen",27,6a,e8,e3)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,hasScreen),HX_("hasScreen",66,ee,45,88)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBounds_obj,_top),HX_("_top",96,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,screenLeft),HX_("screenLeft",93,95,e6,bf)},
	{::hx::fsFloat,(int)offsetof(ComponentBounds_obj,screenTop),HX_("screenTop",89,ce,fc,37)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(int)offsetof(ComponentBounds_obj,_componentClipRect),HX_("_componentClipRect",b2,66,30,2e)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,isComponentClipped),HX_("isComponentClipped",cc,ac,e0,9e)},
	{::hx::fsBool,(int)offsetof(ComponentBounds_obj,isComponentOffscreen),HX_("isComponentOffscreen",28,be,d5,68)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentBounds_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentBounds_obj_sMemberFields[] = {
	HX_("autoWidth",17,f4,6d,a8),
	HX_("get_autoWidth",ee,c7,d1,69),
	HX_("autoHeight",b6,18,17,6e),
	HX_("get_autoHeight",ff,a0,0c,e4),
	HX_("resizeComponent",29,98,f2,6b),
	HX_("actualComponentWidth",37,63,0e,06),
	HX_("get_actualComponentWidth",c0,80,aa,48),
	HX_("actualComponentHeight",96,e5,d7,fc),
	HX_("get_actualComponentHeight",ed,9f,d5,02),
	HX_("_componentWidth",a8,b0,c9,62),
	HX_("get_componentWidth",d2,48,03,b5),
	HX_("set_componentWidth",46,7b,b2,91),
	HX_("_componentHeight",05,5b,00,c4),
	HX_("get_componentHeight",9b,e7,2b,64),
	HX_("set_componentHeight",a7,da,c8,a0),
	HX_("_percentWidth",e0,e3,89,e0),
	HX_("get_percentWidth",8a,3d,ba,02),
	HX_("set_percentWidth",fe,2a,fc,58),
	HX_("_percentHeight",cd,f8,6c,4e),
	HX_("get_percentHeight",e3,13,8b,16),
	HX_("set_percentHeight",ef,eb,f8,39),
	HX_("_cachedPercentWidth",22,cc,7b,fc),
	HX_("_cachedPercentHeight",4b,4a,26,a6),
	HX_("cachePercentSizes",ef,e4,d7,ce),
	HX_("restorePercentSizes",fb,13,79,de),
	HX_("_width",47,fd,49,c6),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("_height",86,19,c3,70),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("_actualWidth",99,86,4b,9e),
	HX_("_actualHeight",f4,b7,19,9a),
	HX_("_hasScreen",27,6a,e8,e3),
	HX_("hasScreen",66,ee,45,88),
	HX_("get_hasScreen",3d,c2,a9,49),
	HX_("hitTest",45,60,7f,e2),
	HX_("autoSize",d0,8f,79,2f),
	HX_("moveComponent",6c,83,03,2a),
	HX_("_left",e6,23,c1,fa),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("_top",96,ab,23,3f),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("screenLeft",93,95,e6,bf),
	HX_("get_screenLeft",dc,1d,dc,35),
	HX_("screenTop",89,ce,fc,37),
	HX_("get_screenTop",60,a2,60,f9),
	HX_("_componentClipRect",b2,66,30,2e),
	HX_("get_componentClipRect",c8,c4,c8,d9),
	HX_("set_componentClipRect",d4,92,d1,2d),
	HX_("isComponentClipped",cc,ac,e0,9e),
	HX_("get_isComponentClipped",15,26,75,f8),
	HX_("isComponentOffscreen",28,be,d5,68),
	HX_("get_isComponentOffscreen",b1,db,71,ab),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ComponentBounds_obj::__mClass;

void ComponentBounds_obj::__register()
{
	ComponentBounds_obj _hx_dummy;
	ComponentBounds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentBounds",f5,95,95,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentBounds_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentBounds_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentBounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentBounds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComponentBounds_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b7c6648d67aeb5a0_6_boot)
HXDLIN(   6)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("width",06,b6,62,ca), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(1,HX_("percentWidth",01,51,1b,fe), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(2,HX_("height",e7,07,4c,02), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(3,HX_("percentHeight",8c,08,1b,10), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
