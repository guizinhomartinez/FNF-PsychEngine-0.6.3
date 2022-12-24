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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalLayout
#include <haxe/ui/layouts/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92452d52ec42a325_6_new,"haxe.ui.layouts.VerticalLayout","new",0x851ed929,"haxe.ui.layouts.VerticalLayout.new","haxe/ui/layouts/VerticalLayout.hx",6,0x6373e2a6)
HX_LOCAL_STACK_FRAME(_hx_pos_92452d52ec42a325_11_repositionChildren,"haxe.ui.layouts.VerticalLayout","repositionChildren",0x1a754212,"haxe.ui.layouts.VerticalLayout.repositionChildren","haxe/ui/layouts/VerticalLayout.hx",11,0x6373e2a6)
HX_LOCAL_STACK_FRAME(_hx_pos_92452d52ec42a325_37_get_usableSize,"haxe.ui.layouts.VerticalLayout","get_usableSize",0xc2c495f9,"haxe.ui.layouts.VerticalLayout.get_usableSize","haxe/ui/layouts/VerticalLayout.hx",37,0x6373e2a6)
namespace haxe{
namespace ui{
namespace layouts{

void VerticalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   8)		this->_calcFullHeights = true;
            	}

Dynamic VerticalLayout_obj::__CreateEmpty() { return new VerticalLayout_obj; }

void *VerticalLayout_obj::_hx_vtable = 0;

Dynamic VerticalLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalLayout_obj > _hx_result = new VerticalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6f2ba22f;
	}
}

void VerticalLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_11_repositionChildren)
HXLINE(  12)		Float ypos = this->get_paddingTop();
HXLINE(  14)		{
HXLINE(  14)			int _g = 0;
HXDLIN(  14)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  14)			::Array< ::Dynamic> _g1;
HXDLIN(  14)			if (::hx::IsNull( _this->_children )) {
HXLINE(  14)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  14)				_g1 = _this->_children;
            			}
HXDLIN(  14)			while((_g < _g1->length)){
HXLINE(  14)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  14)				_g = (_g + 1);
HXLINE(  15)				if ((child->get_includeInLayout() == false)) {
HXLINE(  16)					continue;
            				}
HXLINE(  19)				Float xpos = ( (Float)(0) );
HXLINE(  21)				::String _hx_switch_0 = this->horizontalAlign(child);
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  23)					 ::Dynamic xpos1 = this->get_component()->get_componentWidth();
HXDLIN(  23)					Float xpos2 = ((( (Float)(xpos1) ) - ( (Float)(child->get_componentWidth()) )) / ( (Float)(2) ));
HXDLIN(  23)					Float xpos3 = (xpos2 + this->marginLeft(child));
HXDLIN(  23)					xpos = (xpos3 - this->marginRight(child));
HXDLIN(  23)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  25)					 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN(  25)					if (::hx::IsLess( _hx_tmp,this->get_component()->get_componentWidth() )) {
HXLINE(  26)						 ::Dynamic xpos1 = this->get_component()->get_componentWidth();
HXDLIN(  26)						 ::Dynamic xpos2 = child->get_componentWidth();
HXDLIN(  26)						Float xpos3 = (xpos2 + this->get_paddingRight());
HXDLIN(  26)						xpos = (( (Float)(xpos1) ) - (xpos3 + this->marginLeft(child)));
            					}
HXLINE(  25)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE(  29)					Float xpos1 = this->get_paddingLeft();
HXDLIN(  29)					xpos = (xpos1 + this->marginLeft(child));
            				}
            				_hx_goto_2:;
HXLINE(  32)				child->moveComponent(xpos,(ypos + this->marginTop(child)));
HXLINE(  33)				 ::Dynamic ypos1 = child->get_componentHeight();
HXDLIN(  33)				ypos = (ypos + (ypos1 + this->get_verticalSpacing()));
            			}
            		}
            	}


 ::haxe::ui::geom::Size VerticalLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_37_get_usableSize)
HXLINE(  38)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  40)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  40)		::Array< ::Dynamic> visibleChildren;
HXDLIN(  40)		if (::hx::IsNull( _this->_children )) {
HXLINE(  40)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  40)			visibleChildren = _this->_children;
            		}
HXDLIN(  40)		int visibleChildren1 = visibleChildren->length;
HXLINE(  41)		{
HXLINE(  41)			int _g = 0;
HXDLIN(  41)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN(  41)			::Array< ::Dynamic> _g1;
HXDLIN(  41)			if (::hx::IsNull( _this1->_children )) {
HXLINE(  41)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  41)				_g1 = _this1->_children;
            			}
HXDLIN(  41)			while((_g < _g1->length)){
HXLINE(  41)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  41)				_g = (_g + 1);
HXLINE(  42)				if ((child->get_includeInLayout() == false)) {
HXLINE(  43)					visibleChildren1 = (visibleChildren1 - 1);
HXLINE(  44)					continue;
            				}
HXLINE(  47)				bool _hx_tmp;
HXDLIN(  47)				if (::hx::IsGreater( child->get_componentHeight(),0 )) {
HXLINE(  47)					if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  47)						_hx_tmp = (this->fixedMinHeight(child) == true);
            					}
            					else {
HXLINE(  47)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  47)					_hx_tmp = false;
            				}
HXDLIN(  47)				if (_hx_tmp) {
HXLINE(  48)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  48)					Float size2 = size1->height;
HXDLIN(  48)					 ::Dynamic _hx_tmp = child->get_componentHeight();
HXDLIN(  48)					Float _hx_tmp1 = (_hx_tmp + this->marginTop(child));
HXDLIN(  48)					size1->height = (size2 - (_hx_tmp1 + this->marginBottom(child)));
            				}
            			}
            		}
HXLINE(  52)		if ((visibleChildren1 > 1)) {
HXLINE(  53)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  53)			Float size2 = size1->height;
HXDLIN(  53)			size1->height = (size2 - (this->get_verticalSpacing() * ( (Float)((visibleChildren1 - 1)) )));
            		}
HXLINE(  56)		if ((size->height < 0)) {
HXLINE(  57)			size->height = ( (Float)(0) );
            		}
HXLINE(  59)		return size;
            	}



::hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__new() {
	::hx::ObjectPtr< VerticalLayout_obj > __this = new VerticalLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalLayout_obj *__this = (VerticalLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalLayout_obj), true, "haxe.ui.layouts.VerticalLayout"));
	*(void **)__this = VerticalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalLayout_obj::VerticalLayout_obj()
{
}

::hx::Val VerticalLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *VerticalLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VerticalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

::hx::Class VerticalLayout_obj::__mClass;

void VerticalLayout_obj::__register()
{
	VerticalLayout_obj _hx_dummy;
	VerticalLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.VerticalLayout",b7,10,47,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
