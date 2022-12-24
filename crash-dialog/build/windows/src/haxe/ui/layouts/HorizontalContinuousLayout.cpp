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
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ComponentRectangle
#include <haxe/ui/layouts/ComponentRectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#include <haxe/ui/layouts/HorizontalContinuousLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6cb5b11e53530b39_9_new,"haxe.ui.layouts.HorizontalContinuousLayout","new",0x51d94486,"haxe.ui.layouts.HorizontalContinuousLayout.new","haxe/ui/layouts/HorizontalContinuousLayout.hx",9,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_12_resizeChildren,"haxe.ui.layouts.HorizontalContinuousLayout","resizeChildren",0x83e194ed,"haxe.ui.layouts.HorizontalContinuousLayout.resizeChildren","haxe/ui/layouts/HorizontalContinuousLayout.hx",12,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_16_repositionChildren,"haxe.ui.layouts.HorizontalContinuousLayout","repositionChildren",0x2caa2755,"haxe.ui.layouts.HorizontalContinuousLayout.repositionChildren","haxe/ui/layouts/HorizontalContinuousLayout.hx",16,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_117_get_usableSize,"haxe.ui.layouts.HorizontalContinuousLayout","get_usableSize",0x01a6ddbc,"haxe.ui.layouts.HorizontalContinuousLayout.get_usableSize","haxe/ui/layouts/HorizontalContinuousLayout.hx",117,0x640fb469)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalContinuousLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6cb5b11e53530b39_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic HorizontalContinuousLayout_obj::__CreateEmpty() { return new HorizontalContinuousLayout_obj; }

void *HorizontalContinuousLayout_obj::_hx_vtable = 0;

Dynamic HorizontalContinuousLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalContinuousLayout_obj > _hx_result = new HorizontalContinuousLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalContinuousLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6be4a2dd || inClassId==(int)0x732c2f0c;
	}
}

void HorizontalContinuousLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6cb5b11e53530b39_12_resizeChildren)
            	}


void HorizontalContinuousLayout_obj::repositionChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_6cb5b11e53530b39_16_repositionChildren)
HXLINE(  17)		if ((this->get_component()->get_autoWidth() == true)) {
HXLINE(  18)			this->super::repositionChildren();
HXLINE(  19)			return;
            		}
HXLINE(  22)		Float ucx = this->get_usableWidth();
HXLINE(  23)		if ((ucx <= 0)) {
HXLINE(  24)			return;
            		}
HXLINE(  28)		 ::Dynamic ucx1 = this->get_component()->get_componentWidth();
HXDLIN(  28)		Float ucx2 = this->get_paddingLeft();
HXDLIN(  28)		Float ucx3 = (( (Float)(ucx1) ) - (ucx2 + this->get_paddingRight()));
HXLINE(  29)		 ::Dynamic ucy = this->get_component()->get_componentHeight();
HXDLIN(  29)		Float ucy1 = this->get_paddingTop();
HXDLIN(  29)		Float ucy2 = (( (Float)(ucy) ) - (ucy1 + this->get_paddingBottom()));
HXLINE(  30)		::Array< ::Dynamic> dimensions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  31)		::Array< Float > heights = ::Array_obj< Float >::__new(0);
HXLINE(  33)		int row = 0;
HXLINE(  34)		Float usedCX = ( (Float)(0) );
HXLINE(  35)		Float xpos = this->get_paddingLeft();
HXLINE(  36)		Float ypos = this->get_paddingTop();
HXLINE(  37)		Float rowCY = ( (Float)(0) );
HXLINE(  38)		{
HXLINE(  38)			int _g = 0;
HXDLIN(  38)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  38)			::Array< ::Dynamic> _g1;
HXDLIN(  38)			if (::hx::IsNull( _this->_children )) {
HXLINE(  38)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  38)				_g1 = _this->_children;
            			}
HXDLIN(  38)			while((_g < _g1->length)){
HXLINE(  38)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  38)				_g = (_g + 1);
HXLINE(  39)				if ((child->get_includeInLayout() == false)) {
HXLINE(  40)					continue;
            				}
HXLINE(  43)				 ::Dynamic rc = child->get_left();
HXDLIN(  43)				 ::Dynamic rc1 = child->get_top();
HXDLIN(  43)				 ::Dynamic rc2 = child->get_componentWidth();
HXDLIN(  43)				 ::haxe::ui::layouts::ComponentRectangle rc3 =  ::haxe::ui::layouts::ComponentRectangle_obj::__alloc( HX_CTX ,rc,rc1,rc2,child->get_componentHeight());
HXLINE(  44)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  45)					rc3->width = ((ucx3 * ( (Float)(child->get_percentWidth()) )) / ( (Float)(100) ));
            				}
            				else {
HXLINE(  47)					usedCX = (usedCX + this->get_horizontalSpacing());
            				}
HXLINE(  49)				if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  50)					rc3->height = ((ucy2 * ( (Float)(child->get_percentHeight()) )) / ( (Float)(100) ));
            				}
HXLINE(  52)				rc3->component = child;
HXLINE(  53)				usedCX = (usedCX + rc3->width);
HXLINE(  55)				if (((usedCX - this->get_horizontalSpacing()) > ucx3)) {
HXLINE(  56)					heights->push(rowCY);
HXLINE(  57)					ypos = (ypos + (rowCY + this->get_verticalSpacing()));
HXLINE(  58)					xpos = this->get_paddingLeft();
HXLINE(  59)					Float rc = rc3->width;
HXDLIN(  59)					usedCX = (rc + this->get_horizontalSpacing());
HXLINE(  60)					rowCY = ( (Float)(0) );
HXLINE(  61)					row = (row + 1);
            				}
HXLINE(  64)				if ((dimensions->length <= row)) {
HXLINE(  65)					dimensions->push(::Array_obj< ::Dynamic>::__new(0));
            				}
HXLINE(  68)				if (::hx::IsNull( dimensions->__get(row).StaticCast< ::Array< ::Dynamic> >() )) {
HXLINE(  69)					ypos = (ypos - this->get_verticalSpacing());
HXLINE(  70)					row = (row - 1);
HXLINE(  71)					dimensions->__get(row).StaticCast< ::Array< ::Dynamic> >()->pop().StaticCast<  ::haxe::ui::layouts::ComponentRectangle >();
            				}
HXLINE(  74)				rc3->left = xpos;
HXLINE(  75)				rc3->top = ypos;
HXLINE(  76)				dimensions->__get(row).StaticCast< ::Array< ::Dynamic> >()->push(rc3);
HXLINE(  77)				xpos = (xpos + rc3->width);
HXLINE(  78)				if ((rc3->height > rowCY)) {
HXLINE(  79)					rowCY = rc3->height;
            				}
            			}
            		}
HXLINE(  83)		if ((rowCY > 0)) {
HXLINE(  84)			heights->push(rowCY);
            		}
HXLINE(  88)		int x = 0;
HXLINE(  89)		{
HXLINE(  89)			int _g2 = 0;
HXDLIN(  89)			while((_g2 < dimensions->length)){
HXLINE(  89)				::Array< ::Dynamic> r = dimensions->__get(_g2).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  89)				_g2 = (_g2 + 1);
HXLINE(  90)				Float height = heights->__get(x);
HXLINE(  91)				Float spaceX = (( (Float)((r->length - 1)) ) / ( (Float)(r->length) ));
HXDLIN(  91)				Float spaceX1 = (spaceX * this->get_horizontalSpacing());
HXLINE(  92)				int n = 0;
HXLINE(  93)				{
HXLINE(  93)					int _g = 0;
HXDLIN(  93)					while((_g < r->length)){
HXLINE(  93)						 ::haxe::ui::layouts::ComponentRectangle c = r->__get(_g).StaticCast<  ::haxe::ui::layouts::ComponentRectangle >();
HXDLIN(  93)						_g = (_g + 1);
HXLINE(  94)						::String _hx_switch_0 = this->verticalAlign(c->component);
            						if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  98)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN(  98)							c1->top = (c1->top + (height - c->height));
HXDLIN(  98)							goto _hx_goto_5;
            						}
            						if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  96)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN(  96)							c1->top = (c1->top + ((height / ( (Float)(2) )) - (c->height / ( (Float)(2) ))));
HXDLIN(  96)							goto _hx_goto_5;
            						}
            						/* default */{
            						}
            						_hx_goto_5:;
HXLINE( 102)						if (::hx::IsNotNull( c->component->get_percentWidth() )) {
HXLINE( 103)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN( 103)							Float c2 = c1->left;
HXDLIN( 103)							c1->left = (c2 + (( (Float)(n) ) * (this->get_horizontalSpacing() - spaceX1)));
HXLINE( 104)							 ::haxe::ui::layouts::ComponentRectangle c3 = c;
HXDLIN( 104)							c3->width = (c3->width - spaceX1);
            						}
            						else {
HXLINE( 106)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN( 106)							Float c2 = c1->left;
HXDLIN( 106)							c1->left = (c2 + (( (Float)(n) ) * this->get_horizontalSpacing()));
            						}
HXLINE( 109)						c->apply();
HXLINE( 111)						n = (n + 1);
            					}
            				}
HXLINE( 113)				x = (x + 1);
            			}
            		}
            	}


 ::haxe::ui::geom::Size HorizontalContinuousLayout_obj::get_usableSize(){
            	HX_GC_STACKFRAME(&_hx_pos_6cb5b11e53530b39_117_get_usableSize)
HXLINE( 118)		if ((this->get_component()->get_autoWidth() == true)) {
HXLINE( 119)			return this->super::get_usableSize();
            		}
HXLINE( 122)		Float ucx = ( (Float)(0) );
HXLINE( 123)		if (::hx::IsNotNull( this->_component->get_componentWidth() )) {
HXLINE( 124)			ucx = ( (Float)(this->_component->get_componentWidth()) );
HXLINE( 125)			Float ucx1 = this->get_paddingLeft();
HXDLIN( 125)			ucx = (ucx - (ucx1 + this->get_paddingRight()));
            		}
HXLINE( 128)		Float ucy = ( (Float)(0) );
HXLINE( 129)		if (::hx::IsNotNull( this->_component->get_componentHeight() )) {
HXLINE( 130)			ucy = ( (Float)(this->_component->get_componentHeight()) );
HXLINE( 131)			Float ucy1 = this->get_paddingTop();
HXDLIN( 131)			ucy = (ucy - (ucy1 + this->get_paddingBottom()));
            		}
HXLINE( 134)		return  ::haxe::ui::geom::Size_obj::__alloc( HX_CTX ,ucx,ucy);
            	}



::hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalContinuousLayout_obj > __this = new HorizontalContinuousLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalContinuousLayout_obj *__this = (HorizontalContinuousLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalContinuousLayout_obj), true, "haxe.ui.layouts.HorizontalContinuousLayout"));
	*(void **)__this = HorizontalContinuousLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalContinuousLayout_obj::HorizontalContinuousLayout_obj()
{
}

::hx::Val HorizontalContinuousLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HorizontalContinuousLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalContinuousLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalContinuousLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

::hx::Class HorizontalContinuousLayout_obj::__mClass;

void HorizontalContinuousLayout_obj::__register()
{
	HorizontalContinuousLayout_obj _hx_dummy;
	HorizontalContinuousLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.HorizontalContinuousLayout",94,49,f7,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalContinuousLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalContinuousLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalContinuousLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalContinuousLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
