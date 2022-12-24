#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_49c59bbbec578e16_126_new,"haxe.ui.components.ButtonLayout","new",0xc6d1ddd4,"haxe.ui.components.ButtonLayout.new","haxe/ui/components/Button.hx",126,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_128_get_iconPosition,"haxe.ui.components.ButtonLayout","get_iconPosition",0x015f6bd7,"haxe.ui.components.ButtonLayout.get_iconPosition","haxe/ui/components/Button.hx",128,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_135_resizeChildren,"haxe.ui.components.ButtonLayout","resizeChildren",0x32c1025f,"haxe.ui.components.ButtonLayout.resizeChildren","haxe/ui/components/Button.hx",135,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_153_get_usableSize,"haxe.ui.components.ButtonLayout","get_usableSize",0xb0864b2e,"haxe.ui.components.ButtonLayout.get_usableSize","haxe/ui/components/Button.hx",153,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_162_calcAutoSize,"haxe.ui.components.ButtonLayout","calcAutoSize",0x60d62591,"haxe.ui.components.ButtonLayout.calcAutoSize","haxe/ui/components/Button.hx",162,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_176_isIconRelevant,"haxe.ui.components.ButtonLayout","isIconRelevant",0x982c45cc,"haxe.ui.components.ButtonLayout.isIconRelevant","haxe/ui/components/Button.hx",176,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_181_repositionChildren,"haxe.ui.components.ButtonLayout","repositionChildren",0x87f235c7,"haxe.ui.components.ButtonLayout.repositionChildren","haxe/ui/components/Button.hx",181,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_293_getTextAlignPos,"haxe.ui.components.ButtonLayout","getTextAlignPos",0x0e58c6c6,"haxe.ui.components.ButtonLayout.getTextAlignPos","haxe/ui/components/Button.hx",293,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_126_new)
HXDLIN( 126)		super::__construct();
            	}

Dynamic ButtonLayout_obj::__CreateEmpty() { return new ButtonLayout_obj; }

void *ButtonLayout_obj::_hx_vtable = 0;

Dynamic ButtonLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonLayout_obj > _hx_result = new ButtonLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x02db37b4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02db37b4;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

::String ButtonLayout_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_128_get_iconPosition)
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 129)			_hx_tmp = ::hx::IsNull( this->get_component()->get_style()->iconPosition );
            		}
            		else {
HXLINE( 129)			_hx_tmp = true;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 130)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 132)		return this->get_component()->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonLayout_obj,get_iconPosition,return )

void ButtonLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_135_resizeChildren)
HXLINE( 136)		this->super::resizeChildren();
HXLINE( 138)		if ((this->_component->get_autoWidth() == false)) {
HXLINE( 139)			 ::haxe::ui::components::Label label = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 140)			 ::haxe::ui::geom::Size ucx = this->get_usableSize();
HXLINE( 141)			Float cx = ucx->width;
HXLINE( 142)			if (::hx::IsNotNull( label )) {
HXLINE( 143)				label->set_width(cx);
            			}
HXLINE( 146)			 ::haxe::ui::core::ItemRenderer itemRenderer = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 147)			if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 148)				itemRenderer->set_width(cx);
            			}
            		}
            	}


 ::haxe::ui::geom::Size ButtonLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_153_get_usableSize)
HXLINE( 154)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE( 155)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 156)		bool _hx_tmp;
HXDLIN( 156)		if (::hx::IsNotNull( icon )) {
HXLINE( 156)			bool _hx_tmp1;
HXDLIN( 156)			bool _hx_tmp2;
HXDLIN( 156)			if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 156)				_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            			}
            			else {
HXLINE( 156)				_hx_tmp2 = true;
            			}
HXDLIN( 156)			if (!(_hx_tmp2)) {
HXLINE( 156)				_hx_tmp1 = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            			}
            			else {
HXLINE( 156)				_hx_tmp1 = true;
            			}
HXDLIN( 156)			if (!(_hx_tmp1)) {
HXLINE( 156)				_hx_tmp = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            			}
            			else {
HXLINE( 156)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 156)			_hx_tmp = false;
            		}
HXDLIN( 156)		if (_hx_tmp) {
HXLINE( 157)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 157)			Float size2 = size1->width;
HXDLIN( 157)			 ::Dynamic _hx_tmp = icon->get_width();
HXDLIN( 157)			size1->width = (size2 - (_hx_tmp + this->get_verticalSpacing()));
            		}
HXLINE( 159)		return size;
            	}


 ::haxe::ui::geom::Size ButtonLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_162_calcAutoSize)
HXLINE( 163)		::Array< ::Dynamic> exclusions1 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 164)		 ::haxe::ui::core::ItemRenderer itemRenderer = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 165)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 166)			 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN( 166)			if (::hx::IsNotNull( icon )) {
HXLINE( 166)				bool _hx_tmp1;
HXDLIN( 166)				bool _hx_tmp2;
HXDLIN( 166)				if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 166)					_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            				}
            				else {
HXLINE( 166)					_hx_tmp2 = true;
            				}
HXDLIN( 166)				if (!(_hx_tmp2)) {
HXLINE( 166)					_hx_tmp1 = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            				}
            				else {
HXLINE( 166)					_hx_tmp1 = true;
            				}
HXDLIN( 166)				if (!(_hx_tmp1)) {
HXLINE( 166)					_hx_tmp = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            				}
            				else {
HXLINE( 166)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 166)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 166)			_hx_tmp = false;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 167)			exclusions1->push(icon);
            		}
HXLINE( 169)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions1);
HXLINE( 170)		bool _hx_tmp1;
HXDLIN( 170)		if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 170)			 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN( 170)			if (::hx::IsNotNull( icon )) {
HXLINE( 170)				bool _hx_tmp;
HXDLIN( 170)				bool _hx_tmp2;
HXDLIN( 170)				if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 170)					_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            				}
            				else {
HXLINE( 170)					_hx_tmp2 = true;
            				}
HXDLIN( 170)				if (!(_hx_tmp2)) {
HXLINE( 170)					_hx_tmp = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            				}
            				else {
HXLINE( 170)					_hx_tmp = true;
            				}
HXDLIN( 170)				if (!(_hx_tmp)) {
HXLINE( 170)					_hx_tmp1 = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            				}
            				else {
HXLINE( 170)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 170)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 170)			_hx_tmp1 = false;
            		}
HXDLIN( 170)		if (_hx_tmp1) {
HXLINE( 171)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 171)			Float size2 = size1->width;
HXDLIN( 171)			 ::Dynamic _hx_tmp = icon->get_width();
HXDLIN( 171)			size1->width = (size2 + (_hx_tmp + this->get_verticalSpacing()));
            		}
HXLINE( 173)		return size;
            	}


bool ButtonLayout_obj::isIconRelevant(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_176_isIconRelevant)
HXLINE( 177)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 178)		if (::hx::IsNotNull( icon )) {
HXLINE( 178)			bool _hx_tmp;
HXDLIN( 178)			bool _hx_tmp1;
HXDLIN( 178)			if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 178)				_hx_tmp1 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            			}
            			else {
HXLINE( 178)				_hx_tmp1 = true;
            			}
HXDLIN( 178)			if (!(_hx_tmp1)) {
HXLINE( 178)				_hx_tmp = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            			}
            			else {
HXLINE( 178)				_hx_tmp = true;
            			}
HXDLIN( 178)			if (!(_hx_tmp)) {
HXLINE( 178)				return (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            			}
            			else {
HXLINE( 178)				return true;
            			}
            		}
            		else {
HXLINE( 178)			return false;
            		}
HXDLIN( 178)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonLayout_obj,isIconRelevant,return )

void ButtonLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_181_repositionChildren)
HXLINE( 182)		this->super::repositionChildren();
HXLINE( 184)		 ::haxe::ui::components::Label label = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 185)		bool _hx_tmp;
HXDLIN( 185)		if (::hx::IsNotNull( label )) {
HXLINE( 185)			_hx_tmp = (label->get_hidden() == true);
            		}
            		else {
HXLINE( 185)			_hx_tmp = false;
            		}
HXDLIN( 185)		if (_hx_tmp) {
HXLINE( 186)			label = null();
            		}
HXLINE( 188)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 189)		bool _hx_tmp1;
HXDLIN( 189)		if (::hx::IsNotNull( icon )) {
HXLINE( 189)			_hx_tmp1 = (icon->get_hidden() == true);
            		}
            		else {
HXLINE( 189)			_hx_tmp1 = false;
            		}
HXDLIN( 189)		if (_hx_tmp1) {
HXLINE( 190)			icon = null();
            		}
HXLINE( 192)		::String _hx_switch_0 = this->get_iconPosition();
            		if (  (_hx_switch_0==HX_("far-left",7d,bc,22,51)) ){
HXLINE( 220)			bool _hx_tmp;
HXDLIN( 220)			if (::hx::IsNotNull( label )) {
HXLINE( 220)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 220)				_hx_tmp = false;
            			}
HXDLIN( 220)			if (_hx_tmp) {
HXLINE( 221)				Float x = this->get_paddingLeft();
HXLINE( 223)				if ((this->get_iconPosition() == HX_("far-left",7d,bc,22,51))) {
HXLINE( 224)					Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 224)					icon->set_left((_hx_tmp - this->marginRight(icon)));
HXLINE( 225)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 225)					x = (x + (x1 + icon->get_componentWidth()));
HXLINE( 226)					Float _hx_tmp1 = (x + this->marginLeft(label));
HXDLIN( 226)					label->set_left((_hx_tmp1 - this->marginRight(label)));
            				}
HXLINE( 229)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 229)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 229)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 229)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 230)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 230)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 230)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 230)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 231)				if (::hx::IsNotNull( label )) {
HXLINE( 232)					label->set_left(this->get_paddingLeft());
HXLINE( 233)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 233)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 233)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 233)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 234)					if (::hx::IsNotNull( icon )) {
HXLINE( 235)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 235)						icon->set_left(::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) )))));
HXLINE( 236)						Float _hx_tmp1 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 236)						int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 236)						Float _hx_tmp3 = (_hx_tmp2 + this->marginTop(icon));
HXDLIN( 236)						icon->set_top((_hx_tmp3 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 220)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("far-right",a6,3e,4f,24)) ){
HXLINE( 194)			bool _hx_tmp;
HXDLIN( 194)			if (::hx::IsNotNull( label )) {
HXLINE( 194)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 194)				_hx_tmp = false;
            			}
HXDLIN( 194)			if (_hx_tmp) {
HXLINE( 195)				 ::Dynamic cx = label->get_componentWidth();
HXDLIN( 195)				Float cx1 = (cx + icon->get_componentWidth());
HXDLIN( 195)				Float cx2 = (cx1 + this->get_horizontalSpacing());
HXLINE( 196)				Float x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) )) - (cx2 / ( (Float)(2) ))))) );
HXLINE( 198)				if ((this->get_iconPosition() == HX_("far-right",a6,3e,4f,24))) {
HXLINE( 199)					Float _hx_tmp = (cx2 + this->get_paddingLeft());
HXDLIN( 199)					Float _hx_tmp1 = (_hx_tmp + this->get_paddingRight());
HXDLIN( 199)					if (::hx::IsLess( _hx_tmp1,this->get_component()->get_componentWidth() )) {
HXLINE( 200)						label->set_left(this->get_paddingLeft());
HXLINE( 201)						Float x1 = this->get_horizontalSpacing();
HXDLIN( 201)						x = (x + (x1 + label->get_componentWidth()));
HXLINE( 202)						 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 202)						Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(icon->get_componentWidth()) ));
HXDLIN( 202)						Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 202)						Float _hx_tmp3 = (_hx_tmp2 + this->marginLeft(icon));
HXDLIN( 202)						icon->set_left((_hx_tmp3 - this->marginRight(icon)));
            					}
            					else {
HXLINE( 204)						label->set_left(this->get_paddingLeft());
HXLINE( 205)						Float x1 = this->get_horizontalSpacing();
HXDLIN( 205)						x = (x + (x1 + label->get_componentWidth()));
HXLINE( 206)						Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 206)						icon->set_left((_hx_tmp - this->marginRight(icon)));
            					}
            				}
HXLINE( 210)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 210)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 210)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 210)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 211)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 211)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 211)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 211)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 212)				if (::hx::IsNotNull( label )) {
HXLINE( 213)					label->set_left(this->get_paddingLeft());
HXLINE( 214)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 214)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 214)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 214)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 215)					if (::hx::IsNotNull( icon )) {
HXLINE( 216)						 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 216)						Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(icon->get_componentWidth()) ));
HXDLIN( 216)						Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 216)						Float _hx_tmp3 = (_hx_tmp2 + this->marginLeft(icon));
HXDLIN( 216)						icon->set_left((_hx_tmp3 - this->marginRight(icon)));
HXLINE( 217)						Float _hx_tmp4 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 217)						int _hx_tmp5 = ::Std_obj::_hx_int((_hx_tmp4 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 217)						Float _hx_tmp6 = (_hx_tmp5 + this->marginTop(icon));
HXDLIN( 217)						icon->set_top((_hx_tmp6 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 194)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ||  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 239)			bool _hx_tmp;
HXDLIN( 239)			if (::hx::IsNotNull( label )) {
HXLINE( 239)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 239)				_hx_tmp = false;
            			}
HXDLIN( 239)			if (_hx_tmp) {
HXLINE( 240)				 ::Dynamic cx = label->get_componentWidth();
HXDLIN( 240)				Float cx1 = (cx + icon->get_componentWidth());
HXDLIN( 240)				Float cx2 = (cx1 + this->get_horizontalSpacing());
HXLINE( 241)				Float x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) )) - (cx2 / ( (Float)(2) ))))) );
HXLINE( 242)				if ((::hx::TCast<  ::haxe::ui::components::Button >::cast(this->get_component())->get_textAlign() == HX_("left",07,08,b0,47))) {
HXLINE( 243)					x = this->get_paddingLeft();
            				}
HXLINE( 246)				if ((this->get_iconPosition() == HX_("right",dc,0b,64,e9))) {
HXLINE( 247)					Float _hx_tmp = (x + this->marginLeft(label));
HXDLIN( 247)					label->set_left((_hx_tmp - this->marginRight(label)));
HXLINE( 248)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 248)					x = (x + (x1 + label->get_componentWidth()));
HXLINE( 249)					Float _hx_tmp1 = (x + this->marginLeft(icon));
HXDLIN( 249)					icon->set_left((_hx_tmp1 - this->marginRight(icon)));
            				}
            				else {
HXLINE( 251)					Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 251)					icon->set_left((_hx_tmp - this->marginRight(icon)));
HXLINE( 252)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 252)					x = (x + (x1 + icon->get_componentWidth()));
HXLINE( 253)					Float _hx_tmp1 = (x + this->marginLeft(label));
HXDLIN( 253)					label->set_left((_hx_tmp1 - this->marginRight(label)));
            				}
HXLINE( 256)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 256)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 256)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 256)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 257)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 257)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 257)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 257)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 258)				if (::hx::IsNotNull( label )) {
HXLINE( 259)					label->set_left(this->getTextAlignPos(label,( (Float)(this->get_component()->get_componentWidth()) )));
HXLINE( 260)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 260)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 260)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 260)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 261)					if (::hx::IsNotNull( icon )) {
HXLINE( 262)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 262)						icon->set_left(::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) )))));
HXLINE( 263)						Float _hx_tmp1 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 263)						int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 263)						Float _hx_tmp3 = (_hx_tmp2 + this->marginTop(icon));
HXDLIN( 263)						icon->set_top((_hx_tmp3 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 239)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ||  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 266)			bool _hx_tmp;
HXDLIN( 266)			if (::hx::IsNotNull( label )) {
HXLINE( 266)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 266)				_hx_tmp = false;
            			}
HXDLIN( 266)			if (_hx_tmp) {
HXLINE( 267)				 ::Dynamic cy = label->get_componentHeight();
HXDLIN( 267)				Float cy1 = (cy + icon->get_componentHeight());
HXDLIN( 267)				Float cy2 = (cy1 + this->get_verticalSpacing());
HXLINE( 268)				Float y = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) )) - (cy2 / ( (Float)(2) ))))) );
HXLINE( 270)				if ((this->get_iconPosition() == HX_("bottom",eb,e6,78,65))) {
HXLINE( 271)					Float _hx_tmp = (y + this->marginTop(label));
HXDLIN( 271)					label->set_top((_hx_tmp - this->marginBottom(label)));
HXLINE( 272)					Float y1 = this->get_verticalSpacing();
HXDLIN( 272)					y = (y + (y1 + label->get_componentHeight()));
HXLINE( 273)					Float _hx_tmp1 = (y + this->marginTop(icon));
HXDLIN( 273)					icon->set_top((_hx_tmp1 - this->marginBottom(icon)));
            				}
            				else {
HXLINE( 275)					Float _hx_tmp = (y + this->marginTop(icon));
HXDLIN( 275)					icon->set_top((_hx_tmp - this->marginBottom(icon)));
HXLINE( 276)					Float y1 = this->get_verticalSpacing();
HXDLIN( 276)					y = (y + (y1 + icon->get_componentHeight()));
HXLINE( 277)					Float _hx_tmp1 = (y + this->marginTop(label));
HXDLIN( 277)					label->set_top((_hx_tmp1 - this->marginBottom(label)));
            				}
HXLINE( 280)				label->set_left(this->getTextAlignPos(label,( (Float)(this->get_component()->get_componentWidth()) )));
HXLINE( 281)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 281)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 281)				Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(icon));
HXDLIN( 281)				icon->set_left((_hx_tmp2 - this->marginRight(icon)));
            			}
            			else {
HXLINE( 282)				if (::hx::IsNotNull( label )) {
HXLINE( 283)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 283)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 283)					Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(label));
HXDLIN( 283)					label->set_left((_hx_tmp2 - this->marginRight(label)));
HXLINE( 284)					Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 284)					int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 284)					Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(label));
HXDLIN( 284)					label->set_top((_hx_tmp5 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 285)					if (::hx::IsNotNull( icon )) {
HXLINE( 286)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 286)						int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 286)						Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(icon));
HXDLIN( 286)						icon->set_left((_hx_tmp2 - this->marginRight(icon)));
HXLINE( 287)						Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 287)						int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 287)						Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 287)						icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 266)			goto _hx_goto_6;
            		}
            		_hx_goto_6:;
            	}


Float ButtonLayout_obj::getTextAlignPos( ::haxe::ui::components::Label label,Float usableWidth){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_293_getTextAlignPos)
HXDLIN( 293)		::String _hx_switch_0 = ::hx::TCast<  ::haxe::ui::components::Button >::cast(this->get_component())->get_textAlign();
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 295)			Float _hx_tmp = this->marginLeft(label);
HXDLIN( 295)			return (_hx_tmp + this->get_paddingLeft());
HXDLIN( 295)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 297)			Float _hx_tmp = (usableWidth - ( (Float)(label->get_componentWidth()) ));
HXDLIN( 297)			Float _hx_tmp1 = (_hx_tmp - this->marginRight(label));
HXDLIN( 297)			return (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 297)			goto _hx_goto_8;
            		}
            		/* default */{
HXLINE( 299)			int _hx_tmp = ::Std_obj::_hx_int(((usableWidth / ( (Float)(2) )) - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 299)			Float _hx_tmp1 = (_hx_tmp + this->marginLeft(label));
HXDLIN( 299)			return (_hx_tmp1 - this->marginRight(label));
            		}
            		_hx_goto_8:;
HXLINE( 293)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonLayout_obj,getTextAlignPos,return )


::hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__new() {
	::hx::ObjectPtr< ButtonLayout_obj > __this = new ButtonLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ButtonLayout_obj *__this = (ButtonLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonLayout_obj), true, "haxe.ui.components.ButtonLayout"));
	*(void **)__this = ButtonLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ButtonLayout_obj::ButtonLayout_obj()
{
}

void ButtonLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonLayout);
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_iconPosition() : iconPosition ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isIconRelevant") ) { return ::hx::Val( isIconRelevant_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextAlignPos") ) { return ::hx::Val( getTextAlignPos_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return ::hx::Val( get_iconPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iconPosition",42,e5,38,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ButtonLayout_obj,iconPosition),HX_("iconPosition",42,e5,38,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonLayout_obj_sMemberFields[] = {
	HX_("iconPosition",42,e5,38,76),
	HX_("get_iconPosition",cb,d1,d7,7a),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("isIconRelevant",c0,86,9b,26),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("getTextAlignPos",52,5b,42,21),
	::String(null()) };

::hx::Class ButtonLayout_obj::__mClass;

void ButtonLayout_obj::__register()
{
	ButtonLayout_obj _hx_dummy;
	ButtonLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonLayout",e2,a3,79,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
