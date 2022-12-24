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
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_6_new,"haxe.ui.layouts.HorizontalLayout","new",0xccf07ad7,"haxe.ui.layouts.HorizontalLayout.new","haxe/ui/layouts/HorizontalLayout.hx",6,0xc1db5e78)
HX_LOCAL_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_12_repositionChildren,"haxe.ui.layouts.HorizontalLayout","repositionChildren",0xf25cb424,"haxe.ui.layouts.HorizontalLayout.repositionChildren","haxe/ui/layouts/HorizontalLayout.hx",12,0xc1db5e78)
HX_LOCAL_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_38_get_usableSize,"haxe.ui.layouts.HorizontalLayout","get_usableSize",0x6ea1170b,"haxe.ui.layouts.HorizontalLayout.get_usableSize","haxe/ui/layouts/HorizontalLayout.hx",38,0xc1db5e78)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   8)		this->_calcFullWidths = true;
HXLINE(   9)		this->_roundFullWidths = true;
            	}

Dynamic HorizontalLayout_obj::__CreateEmpty() { return new HorizontalLayout_obj; }

void *HorizontalLayout_obj::_hx_vtable = 0;

Dynamic HorizontalLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalLayout_obj > _hx_result = new HorizontalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6be4a2dd;
	}
}

void HorizontalLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_12_repositionChildren)
HXLINE(  13)		Float xpos = this->get_paddingLeft();
HXLINE(  15)		{
HXLINE(  15)			int _g = 0;
HXDLIN(  15)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  15)			::Array< ::Dynamic> _g1;
HXDLIN(  15)			if (::hx::IsNull( _this->_children )) {
HXLINE(  15)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  15)				_g1 = _this->_children;
            			}
HXDLIN(  15)			while((_g < _g1->length)){
HXLINE(  15)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  15)				_g = (_g + 1);
HXLINE(  16)				if ((child->get_includeInLayout() == false)) {
HXLINE(  17)					continue;
            				}
HXLINE(  20)				Float ypos = ( (Float)(0) );
HXLINE(  22)				::String _hx_switch_0 = this->verticalAlign(child);
            				if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  26)					 ::Dynamic _hx_tmp = child->get_componentHeight();
HXDLIN(  26)					if (::hx::IsLess( _hx_tmp,this->get_component()->get_componentHeight() )) {
HXLINE(  27)						 ::Dynamic ypos1 = this->get_component()->get_componentHeight();
HXDLIN(  27)						 ::Dynamic ypos2 = child->get_componentHeight();
HXDLIN(  27)						Float ypos3 = (ypos2 + this->get_paddingBottom());
HXDLIN(  27)						ypos = (( (Float)(ypos1) ) - (ypos3 + this->marginTop(child)));
            					}
HXLINE(  26)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  24)					 ::Dynamic ypos1 = this->get_component()->get_componentHeight();
HXDLIN(  24)					Float ypos2 = ((( (Float)(ypos1) ) - ( (Float)(child->get_componentHeight()) )) / ( (Float)(2) ));
HXDLIN(  24)					Float ypos3 = (ypos2 + this->marginTop(child));
HXDLIN(  24)					ypos = (ypos3 - this->marginBottom(child));
HXDLIN(  24)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE(  30)					Float ypos1 = this->get_paddingTop();
HXDLIN(  30)					ypos = (ypos1 + this->marginTop(child));
            				}
            				_hx_goto_2:;
HXLINE(  33)				child->moveComponent((xpos + this->marginLeft(child)),ypos);
HXLINE(  34)				 ::Dynamic xpos1 = child->get_componentWidth();
HXDLIN(  34)				xpos = (xpos + (xpos1 + this->get_horizontalSpacing()));
            			}
            		}
            	}


 ::haxe::ui::geom::Size HorizontalLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_38_get_usableSize)
HXLINE(  39)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  41)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  41)		::Array< ::Dynamic> visibleChildren;
HXDLIN(  41)		if (::hx::IsNull( _this->_children )) {
HXLINE(  41)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  41)			visibleChildren = _this->_children;
            		}
HXDLIN(  41)		int visibleChildren1 = visibleChildren->length;
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN(  42)			::Array< ::Dynamic> _g1;
HXDLIN(  42)			if (::hx::IsNull( _this1->_children )) {
HXLINE(  42)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  42)				_g1 = _this1->_children;
            			}
HXDLIN(  42)			while((_g < _g1->length)){
HXLINE(  42)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  42)				_g = (_g + 1);
HXLINE(  43)				if ((child->get_includeInLayout() == false)) {
HXLINE(  44)					visibleChildren1 = (visibleChildren1 - 1);
HXLINE(  45)					continue;
            				}
HXLINE(  48)				bool _hx_tmp;
HXDLIN(  48)				if (::hx::IsGreater( child->get_componentWidth(),0 )) {
HXLINE(  48)					if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  48)						_hx_tmp = (this->fixedMinWidth(child) == true);
            					}
            					else {
HXLINE(  48)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  48)					_hx_tmp = false;
            				}
HXDLIN(  48)				if (_hx_tmp) {
HXLINE(  49)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  49)					Float size2 = size1->width;
HXDLIN(  49)					 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN(  49)					Float _hx_tmp1 = (_hx_tmp + this->marginLeft(child));
HXDLIN(  49)					size1->width = (size2 - (_hx_tmp1 + this->marginRight(child)));
            				}
            			}
            		}
HXLINE(  53)		if ((visibleChildren1 > 1)) {
HXLINE(  54)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  54)			Float size2 = size1->width;
HXDLIN(  54)			size1->width = (size2 - (this->get_horizontalSpacing() * ( (Float)((visibleChildren1 - 1)) )));
            		}
HXLINE(  57)		if ((size->width < 0)) {
HXLINE(  58)			size->width = ( (Float)(0) );
            		}
HXLINE(  61)		return size;
            	}



::hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalLayout_obj > __this = new HorizontalLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalLayout_obj *__this = (HorizontalLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalLayout_obj), true, "haxe.ui.layouts.HorizontalLayout"));
	*(void **)__this = HorizontalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalLayout_obj::HorizontalLayout_obj()
{
}

::hx::Val HorizontalLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HorizontalLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

::hx::Class HorizontalLayout_obj::__mClass;

void HorizontalLayout_obj::__register()
{
	HorizontalLayout_obj _hx_dummy;
	HorizontalLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.HorizontalLayout",65,c3,9e,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
