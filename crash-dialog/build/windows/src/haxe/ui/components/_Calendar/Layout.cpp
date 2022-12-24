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
#ifndef INCLUDED_haxe_ui_components__Calendar_Layout
#include <haxe/ui/components/_Calendar/Layout.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_237d5162fa7c00d7_330_new,"haxe.ui.components._Calendar.Layout","new",0xffb24ad3,"haxe.ui.components._Calendar.Layout.new","haxe/ui/components/Calendar.hx",330,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_237d5162fa7c00d7_331_resizeChildren,"haxe.ui.components._Calendar.Layout","resizeChildren",0x25ce47c0,"haxe.ui.components._Calendar.Layout.resizeChildren","haxe/ui/components/Calendar.hx",331,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_237d5162fa7c00d7_330_new)
HXDLIN( 330)		super::__construct();
            	}

Dynamic Layout_obj::__CreateEmpty() { return new Layout_obj; }

void *Layout_obj::_hx_vtable = 0;

Dynamic Layout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Layout_obj > _hx_result = new Layout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Layout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x181ff44d) {
		if (inClassId<=(int)0x022f7553) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x022f7553;
		} else {
			return inClassId==(int)0x181ff44d;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_237d5162fa7c00d7_331_resizeChildren)
HXLINE( 332)		Float max = ( (Float)(0) );
HXLINE( 333)		{
HXLINE( 333)			int _g = 0;
HXDLIN( 333)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 333)			::Array< ::Dynamic> _g1;
HXDLIN( 333)			if (::hx::IsNull( _this->_children )) {
HXLINE( 333)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 333)				_g1 = _this->_children;
            			}
HXDLIN( 333)			while((_g < _g1->length)){
HXLINE( 333)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 333)				_g = (_g + 1);
HXLINE( 334)				if (::hx::IsNull( child->get_layout() )) {
HXLINE( 335)					continue;
            				}
HXLINE( 337)				bool _hx_tmp;
HXDLIN( 337)				 ::Dynamic _hx_tmp1 = child->get_width();
HXDLIN( 337)				Float _hx_tmp2 = child->get_layout()->get_paddingLeft();
HXDLIN( 337)				if (::hx::IsGreater( _hx_tmp1,(_hx_tmp2 + child->get_layout()->get_paddingRight()) )) {
HXLINE( 337)					_hx_tmp = ::hx::IsGreater( child->get_width(),max );
            				}
            				else {
HXLINE( 337)					_hx_tmp = false;
            				}
HXDLIN( 337)				if (_hx_tmp) {
HXLINE( 338)					max = ( (Float)(child->get_width()) );
            				}
HXLINE( 340)				bool _hx_tmp3;
HXDLIN( 340)				 ::Dynamic _hx_tmp4 = child->get_width();
HXDLIN( 340)				Float _hx_tmp5 = child->get_layout()->get_paddingTop();
HXDLIN( 340)				if (::hx::IsGreater( _hx_tmp4,(_hx_tmp5 + child->get_layout()->get_paddingBottom()) )) {
HXLINE( 340)					_hx_tmp3 = ::hx::IsGreater( child->get_height(),max );
            				}
            				else {
HXLINE( 340)					_hx_tmp3 = false;
            				}
HXDLIN( 340)				if (_hx_tmp3) {
HXLINE( 341)					max = ( (Float)(child->get_height()) );
            				}
            			}
            		}
HXLINE( 344)		if ((max > 0)) {
HXLINE( 345)			int _g = 0;
HXDLIN( 345)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 345)			::Array< ::Dynamic> _g1;
HXDLIN( 345)			if (::hx::IsNull( _this->_children )) {
HXLINE( 345)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 345)				_g1 = _this->_children;
            			}
HXDLIN( 345)			while((_g < _g1->length)){
HXLINE( 345)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 345)				_g = (_g + 1);
HXLINE( 346)				child->set_width(max);
HXLINE( 347)				child->set_height(max);
            			}
            		}
            	}



::hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	::hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.components._Calendar.Layout"));
	*(void **)__this = Layout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Layout_obj::Layout_obj()
{
}

::hx::Val Layout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Layout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Layout_obj_sStaticStorageInfo = 0;
#endif

static ::String Layout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	::String(null()) };

::hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	Layout_obj _hx_dummy;
	Layout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.Layout",61,e5,c1,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Layout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Layout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Layout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Layout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar
