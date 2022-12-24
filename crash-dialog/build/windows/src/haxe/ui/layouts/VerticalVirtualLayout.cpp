#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
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
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalVirtualLayout
#include <haxe/ui/layouts/VerticalVirtualLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VirtualLayout
#include <haxe/ui/layouts/VirtualLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b2148020b1fd59de_8_new,"haxe.ui.layouts.VerticalVirtualLayout","new",0x2226199a,"haxe.ui.layouts.VerticalVirtualLayout.new","haxe/ui/layouts/VerticalVirtualLayout.hx",8,0xd9b188b7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2148020b1fd59de_9_repositionChildren,"haxe.ui.layouts.VerticalVirtualLayout","repositionChildren",0x33d828c1,"haxe.ui.layouts.VerticalVirtualLayout.repositionChildren","haxe/ui/layouts/VerticalVirtualLayout.hx",9,0xd9b188b7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2148020b1fd59de_54_verticalConstraintModifier,"haxe.ui.layouts.VerticalVirtualLayout","verticalConstraintModifier",0x08d890f0,"haxe.ui.layouts.VerticalVirtualLayout.verticalConstraintModifier","haxe/ui/layouts/VerticalVirtualLayout.hx",54,0xd9b188b7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2148020b1fd59de_57_calculateRangeVisible,"haxe.ui.layouts.VerticalVirtualLayout","calculateRangeVisible",0x924c5e75,"haxe.ui.layouts.VerticalVirtualLayout.calculateRangeVisible","haxe/ui/layouts/VerticalVirtualLayout.hx",57,0xd9b188b7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2148020b1fd59de_148_updateScroll,"haxe.ui.layouts.VerticalVirtualLayout","updateScroll",0x28243e7c,"haxe.ui.layouts.VerticalVirtualLayout.updateScroll","haxe/ui/layouts/VerticalVirtualLayout.hx",148,0xd9b188b7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2148020b1fd59de_178_calcAutoSize,"haxe.ui.layouts.VerticalVirtualLayout","calcAutoSize",0xde3b410b,"haxe.ui.layouts.VerticalVirtualLayout.calcAutoSize","haxe/ui/layouts/VerticalVirtualLayout.hx",178,0xd9b188b7)
namespace haxe{
namespace ui{
namespace layouts{

void VerticalVirtualLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b2148020b1fd59de_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic VerticalVirtualLayout_obj::__CreateEmpty() { return new VerticalVirtualLayout_obj; }

void *VerticalVirtualLayout_obj::_hx_vtable = 0;

Dynamic VerticalVirtualLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalVirtualLayout_obj > _hx_result = new VerticalVirtualLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalVirtualLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x32ce0794) {
		if (inClassId<=(int)0x23db4184) {
			if (inClassId<=(int)0x1d75bd8b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1d75bd8b;
			} else {
				return inClassId==(int)0x23db4184;
			}
		} else {
			return inClassId==(int)0x32ce0794;
		}
	} else {
		return inClassId==(int)0x3799f835 || inClassId==(int)0x3f873786;
	}
}

void VerticalVirtualLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_b2148020b1fd59de_9_repositionChildren)
HXLINE(  10)		this->super::repositionChildren();
HXLINE(  12)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE(  13)		Float itemHeight = this->get_itemHeight();
HXLINE(  14)		 ::haxe::ui::core::Component contents = this->get_contents();
HXLINE(  15)		Float verticalSpacing = contents->get_layout()->get_verticalSpacing();
HXLINE(  16)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_virtual(comp) == true)) {
HXLINE(  17)			int n = this->_firstIndex;
HXLINE(  18)			if ((::haxe::ui::containers::IVirtualContainer_obj::get_variableItemSize(comp) == true)) {
HXLINE(  19)				Float pos = -(::haxe::ui::containers::IVirtualContainer_obj::get_vscrollPos(comp));
HXLINE(  20)				{
HXLINE(  20)					int _g = 0;
HXDLIN(  20)					int _g1 = this->_lastIndex;
HXDLIN(  20)					while((_g < _g1)){
HXLINE(  20)						_g = (_g + 1);
HXDLIN(  20)						int i = (_g - 1);
HXLINE(  21)						if ((i >= this->_firstIndex)) {
HXLINE(  22)							 ::haxe::ui::core::Component c = contents->getComponentAt((i - this->_firstIndex));
HXLINE(  23)							c->set_top(pos);
            						}
HXLINE(  26)						 ::Dynamic size = this->_sizeCache->__get(i);
HXLINE(  27)						 ::Dynamic pos1;
HXDLIN(  27)						bool pos2;
HXDLIN(  27)						if (::hx::IsNotNull( size )) {
HXLINE(  27)							pos2 = ::hx::IsNotEq( size,0 );
            						}
            						else {
HXLINE(  27)							pos2 = false;
            						}
HXDLIN(  27)						if (pos2) {
HXLINE(  27)							pos1 = size;
            						}
            						else {
HXLINE(  27)							pos1 = itemHeight;
            						}
HXDLIN(  27)						pos = (pos + (pos1 + verticalSpacing));
            					}
            				}
            			}
            			else {
HXLINE(  30)				int _g = 0;
HXDLIN(  30)				::Array< ::Dynamic> _g1;
HXDLIN(  30)				if (::hx::IsNull( contents->_children )) {
HXLINE(  30)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(  30)					_g1 = contents->_children;
            				}
HXDLIN(  30)				while((_g < _g1->length)){
HXLINE(  30)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  30)					_g = (_g + 1);
HXLINE(  31)					child->set_top(((( (Float)(n) ) * (itemHeight + verticalSpacing)) - ::haxe::ui::containers::IVirtualContainer_obj::get_vscrollPos(comp)));
HXLINE(  32)					n = (n + 1);
            				}
            			}
            		}
            	}


Float VerticalVirtualLayout_obj::verticalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_b2148020b1fd59de_54_verticalConstraintModifier)
HXDLIN(  54)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalVirtualLayout_obj,verticalConstraintModifier,return )

void VerticalVirtualLayout_obj::calculateRangeVisible(){
            	HX_GC_STACKFRAME(&_hx_pos_b2148020b1fd59de_57_calculateRangeVisible)
HXLINE(  58)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE(  59)		Float verticalSpacing = this->get_contents()->get_layout()->get_verticalSpacing();
HXLINE(  60)		Float itemHeight = this->get_itemHeight();
HXLINE(  61)		int visibleItemsCount = 0;
HXLINE(  62)		Float contentsHeight = ( (Float)(0) );
HXLINE(  64)		if ((this->get_contents()->get_autoHeight() == true)) {
HXLINE(  65)			int itemCount = this->get_itemCount();
HXLINE(  66)			bool _hx_tmp;
HXDLIN(  66)			if ((itemCount <= 0)) {
HXLINE(  66)				_hx_tmp = (this->_component->get_autoHeight() == true);
            			}
            			else {
HXLINE(  66)				_hx_tmp = true;
            			}
HXDLIN(  66)			if (_hx_tmp) {
HXLINE(  67)				contentsHeight = ((( (Float)(itemCount) ) * itemHeight) - this->verticalConstraintModifier());
            			}
            			else {
HXLINE(  69)				 ::Dynamic contentsHeight1 = this->_component->get_height();
HXDLIN(  69)				contentsHeight = (( (Float)(contentsHeight1) ) - this->verticalConstraintModifier());
            			}
            		}
            		else {
HXLINE(  72)			 ::Dynamic contentsHeight1 = this->get_contents()->get_height();
HXDLIN(  72)			contentsHeight = (( (Float)(contentsHeight1) ) - this->verticalConstraintModifier());
            		}
HXLINE(  75)		 ::Dynamic _hx_tmp = this->_component->get_height();
HXDLIN(  75)		if ((contentsHeight > (( (Float)(_hx_tmp) ) - this->verticalConstraintModifier()))) {
HXLINE(  76)			 ::Dynamic contentsHeight1 = this->_component->get_height();
HXDLIN(  76)			contentsHeight = (( (Float)(contentsHeight1) ) - this->verticalConstraintModifier());
            		}
HXLINE(  79)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_variableItemSize(comp) == true)) {
HXLINE(  80)			Float totalSize = ( (Float)(0) );
HXLINE(  81)			bool requireInvalidation = false;
HXLINE(  82)			int newFirstIndex = -1;
HXLINE(  83)			{
HXLINE(  83)				int _g = 0;
HXDLIN(  83)				int _g1 = this->get_dataSource()->get_size();
HXDLIN(  83)				while((_g < _g1)){
HXLINE(  83)					_g = (_g + 1);
HXDLIN(  83)					int i = (_g - 1);
HXLINE(  84)					 ::Dynamic size = this->_sizeCache->__get(i);
HXLINE(  87)					bool _hx_tmp;
HXDLIN(  87)					if (::hx::IsNotNull( size )) {
HXLINE(  87)						_hx_tmp = ::hx::IsEq( size,0 );
            					}
            					else {
HXLINE(  87)						_hx_tmp = true;
            					}
HXDLIN(  87)					if (_hx_tmp) {
HXLINE(  88)						bool _hx_tmp;
HXDLIN(  88)						if ((i >= this->_firstIndex)) {
HXLINE(  88)							_hx_tmp = (i <= this->_lastIndex);
            						}
            						else {
HXLINE(  88)							_hx_tmp = false;
            						}
HXDLIN(  88)						if (_hx_tmp) {
HXLINE(  89)							 ::haxe::ui::core::Component c = this->get_contents();
HXDLIN(  89)							 ::haxe::ui::core::Component c1 = c->getComponentAt((i - this->_firstIndex));
HXLINE(  90)							bool _hx_tmp;
HXDLIN(  90)							if (::hx::IsNotNull( c1 )) {
HXLINE(  90)								_hx_tmp = ::hx::IsGreater( c1->get_componentHeight(),0 );
            							}
            							else {
HXLINE(  90)								_hx_tmp = false;
            							}
HXDLIN(  90)							if (_hx_tmp) {
HXLINE(  91)								this->_sizeCache[i] = ( (Float)(c1->get_componentHeight()) );
HXLINE(  92)								size = c1->get_componentHeight();
            							}
            							else {
HXLINE(  94)								requireInvalidation = true;
HXLINE(  95)								size = itemHeight;
            							}
            						}
            						else {
HXLINE(  98)							requireInvalidation = true;
HXLINE(  99)							size = itemHeight;
            						}
            					}
HXLINE( 103)					size = (size + verticalSpacing);
HXLINE( 106)					if ((newFirstIndex == -1)) {
HXLINE( 107)						if (((totalSize + size) > ::haxe::ui::containers::IVirtualContainer_obj::get_vscrollPos(comp))) {
HXLINE( 108)							newFirstIndex = i;
HXLINE( 109)							totalSize = (totalSize + (( (Float)(size) ) - ::haxe::ui::containers::IVirtualContainer_obj::get_vscrollPos(comp)));
HXLINE( 110)							visibleItemsCount = (visibleItemsCount + 1);
            						}
            						else {
HXLINE( 112)							totalSize = (totalSize + size);
            						}
            					}
            					else {
HXLINE( 115)						if (((totalSize + size) > contentsHeight)) {
HXLINE( 116)							goto _hx_goto_5;
            						}
            						else {
HXLINE( 118)							visibleItemsCount = (visibleItemsCount + 1);
HXLINE( 119)							totalSize = (totalSize + size);
            						}
            					}
            				}
            				_hx_goto_5:;
            			}
HXLINE( 124)			if ((requireInvalidation == true)) {
HXLINE( 125)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 125)				bool _hx_tmp;
HXDLIN( 125)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 125)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE( 125)					_hx_tmp = true;
            				}
HXDLIN( 125)				if (!(_hx_tmp)) {
HXLINE( 125)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE( 128)			this->_firstIndex = newFirstIndex;
            		}
            		else {
HXLINE( 130)			visibleItemsCount = ::Math_obj::ceil((contentsHeight / (itemHeight + verticalSpacing)));
HXLINE( 131)			this->_firstIndex = ::Std_obj::_hx_int((::haxe::ui::containers::IVirtualContainer_obj::get_vscrollPos(comp) / (itemHeight + verticalSpacing)));
            		}
HXLINE( 134)		if ((this->_firstIndex < 0)) {
HXLINE( 135)			this->_firstIndex = 0;
            		}
HXLINE( 139)		 ::Dynamic rc = this->get_contents()->get_width();
HXDLIN( 139)		Float rc1 = this->get_paddingTop();
HXDLIN( 139)		Float rc2 = (contentsHeight - (rc1 + this->get_paddingBottom()));
HXDLIN( 139)		 ::haxe::ui::geom::Rectangle rc3 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,rc,(rc2 - (this->get_borderSize() * ( (Float)(2) ))));
HXLINE( 140)		this->get_contents()->set_componentClipRect(rc3);
HXLINE( 142)		this->_lastIndex = ((this->_firstIndex + visibleItemsCount) + 1);
HXLINE( 143)		int _hx_tmp1 = this->_lastIndex;
HXDLIN( 143)		if ((_hx_tmp1 > this->get_dataSource()->get_size())) {
HXLINE( 144)			this->_lastIndex = this->get_dataSource()->get_size();
            		}
            	}


void VerticalVirtualLayout_obj::updateScroll(){
            	HX_STACKFRAME(&_hx_pos_b2148020b1fd59de_148_updateScroll)
HXLINE( 149)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 150)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE( 151)		int dataSize = this->get_dataSource()->get_size();
HXLINE( 152)		Float verticalSpacing = this->get_contents()->get_layout()->get_verticalSpacing();
HXLINE( 153)		Float scrollMax = ( (Float)(0) );
HXLINE( 154)		Float itemHeight = this->get_itemHeight();
HXLINE( 156)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_variableItemSize(comp) == true)) {
HXLINE( 157)			scrollMax = -(usableSize->height);
HXLINE( 158)			{
HXLINE( 158)				int _g = 0;
HXDLIN( 158)				int _g1 = this->get_dataSource()->get_size();
HXDLIN( 158)				while((_g < _g1)){
HXLINE( 158)					_g = (_g + 1);
HXDLIN( 158)					int i = (_g - 1);
HXLINE( 159)					 ::Dynamic size = this->_sizeCache->__get(i);
HXLINE( 160)					bool _hx_tmp;
HXDLIN( 160)					if (::hx::IsNotNull( size )) {
HXLINE( 160)						_hx_tmp = ::hx::IsEq( size,0 );
            					}
            					else {
HXLINE( 160)						_hx_tmp = true;
            					}
HXDLIN( 160)					if (_hx_tmp) {
HXLINE( 161)						size = itemHeight;
            					}
HXLINE( 164)					scrollMax = (scrollMax + ((size + verticalSpacing) + this->verticalConstraintModifier()));
            				}
            			}
            		}
            		else {
HXLINE( 167)			Float scrollMax1 = (((( (Float)(dataSize) ) * itemHeight) + (( (Float)((dataSize - 1)) ) * verticalSpacing)) - usableSize->height);
HXDLIN( 167)			scrollMax = (scrollMax1 + this->verticalConstraintModifier());
            		}
HXLINE( 170)		if ((scrollMax < 0)) {
HXLINE( 171)			scrollMax = ( (Float)(0) );
            		}
HXLINE( 174)		::haxe::ui::containers::IVirtualContainer_obj::set_vscrollMax(comp,scrollMax);
HXLINE( 175)		::haxe::ui::containers::IVirtualContainer_obj::set_vscrollPageSize(comp,((usableSize->height / (scrollMax + usableSize->height)) * scrollMax));
            	}


 ::haxe::ui::geom::Size VerticalVirtualLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_b2148020b1fd59de_178_calcAutoSize)
HXLINE( 179)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 180)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 181)		bool _hx_tmp;
HXDLIN( 181)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_itemCount(comp) > 0)) {
HXLINE( 181)			_hx_tmp = (this->_component->get_autoHeight() == true);
            		}
            		else {
HXLINE( 181)			_hx_tmp = false;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 182)			 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 183)			Float contentsPadding = ( (Float)(0) );
HXLINE( 184)			if (::hx::IsNotNull( contents )) {
HXLINE( 185)				 ::haxe::ui::layouts::Layout layout = contents->get_layout();
HXLINE( 186)				if (::hx::IsNotNull( layout )) {
HXLINE( 187)					Float contentsPadding1 = layout->get_paddingTop();
HXDLIN( 187)					contentsPadding = (contentsPadding1 + layout->get_paddingBottom());
            				}
            			}
HXLINE( 190)			Float _hx_tmp = this->get_itemHeight();
HXDLIN( 190)			Float _hx_tmp1 = (_hx_tmp * ( (Float)(::haxe::ui::containers::IVirtualContainer_obj::get_itemCount(comp)) ));
HXDLIN( 190)			Float _hx_tmp2 = (_hx_tmp1 + this->get_paddingTop());
HXDLIN( 190)			Float _hx_tmp3 = ((_hx_tmp2 + this->get_paddingBottom()) + contentsPadding);
HXDLIN( 190)			size->height = (_hx_tmp3 + (this->get_borderSize() * ( (Float)(2) )));
            		}
HXLINE( 193)		return size;
            	}



::hx::ObjectPtr< VerticalVirtualLayout_obj > VerticalVirtualLayout_obj::__new() {
	::hx::ObjectPtr< VerticalVirtualLayout_obj > __this = new VerticalVirtualLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalVirtualLayout_obj > VerticalVirtualLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalVirtualLayout_obj *__this = (VerticalVirtualLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalVirtualLayout_obj), true, "haxe.ui.layouts.VerticalVirtualLayout"));
	*(void **)__this = VerticalVirtualLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalVirtualLayout_obj::VerticalVirtualLayout_obj()
{
}

::hx::Val VerticalVirtualLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"updateScroll") ) { return ::hx::Val( updateScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateRangeVisible") ) { return ::hx::Val( calculateRangeVisible_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"verticalConstraintModifier") ) { return ::hx::Val( verticalConstraintModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VerticalVirtualLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VerticalVirtualLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalVirtualLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("verticalConstraintModifier",ea,f2,b6,ce),
	HX_("calculateRangeVisible",bb,3e,3d,b4),
	HX_("updateScroll",f6,7e,28,47),
	HX_("calcAutoSize",85,81,3f,fd),
	::String(null()) };

::hx::Class VerticalVirtualLayout_obj::__mClass;

void VerticalVirtualLayout_obj::__register()
{
	VerticalVirtualLayout_obj _hx_dummy;
	VerticalVirtualLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.VerticalVirtualLayout",a8,04,47,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalVirtualLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalVirtualLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalVirtualLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalVirtualLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
