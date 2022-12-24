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
#ifndef INCLUDED_haxe_ui_containers__Header_Layout
#include <haxe/ui/containers/_Header/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ce1b283264ce3f17_57_new,"haxe.ui.containers._Header.Layout","new",0xa909ab28,"haxe.ui.containers._Header.Layout.new","haxe/ui/containers/Header.hx",57,0x99daae66)
HX_LOCAL_STACK_FRAME(_hx_pos_ce1b283264ce3f17_58_resizeChildren,"haxe.ui.containers._Header.Layout","resizeChildren",0xfb824d8b,"haxe.ui.containers._Header.Layout.resizeChildren","haxe/ui/containers/Header.hx",58,0x99daae66)
namespace haxe{
namespace ui{
namespace containers{
namespace _Header{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ce1b283264ce3f17_57_new)
HXDLIN(  57)		super::__construct();
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
	if (inClassId<=(int)0x2b150fca) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x2b150fca;
		}
	} else {
		return inClassId==(int)0x3799f835 || inClassId==(int)0x6be4a2dd;
	}
}

void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_ce1b283264ce3f17_58_resizeChildren)
HXLINE(  59)		this->super::resizeChildren();
HXLINE(  61)		Float max = ( (Float)(0) );
HXLINE(  62)		{
HXLINE(  62)			int _g = 0;
HXDLIN(  62)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  62)			::Array< ::Dynamic> _g1;
HXDLIN(  62)			if (::hx::IsNull( _this->_children )) {
HXLINE(  62)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  62)				_g1 = _this->_children;
            			}
HXDLIN(  62)			while((_g < _g1->length)){
HXLINE(  62)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  62)				_g = (_g + 1);
HXLINE(  63)				if ((child->get_includeInLayout() == false)) {
HXLINE(  64)					continue;
            				}
HXLINE(  67)				if (::hx::IsGreater( child->get_height(),max )) {
HXLINE(  68)					max = ( (Float)(child->get_height()) );
            				}
            			}
            		}
HXLINE(  72)		{
HXLINE(  72)			int _g2 = 0;
HXDLIN(  72)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN(  72)			::Array< ::Dynamic> _g3;
HXDLIN(  72)			if (::hx::IsNull( _this1->_children )) {
HXLINE(  72)				_g3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  72)				_g3 = _this1->_children;
            			}
HXDLIN(  72)			while((_g2 < _g3->length)){
HXLINE(  72)				 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  72)				_g2 = (_g2 + 1);
HXLINE(  73)				if ((child->get_includeInLayout() == false)) {
HXLINE(  74)					continue;
            				}
HXLINE(  77)				bool _hx_tmp;
HXDLIN(  77)				bool _hx_tmp1;
HXDLIN(  77)				if (::hx::IsNotNull( child->get_text() )) {
HXLINE(  77)					_hx_tmp1 = (child->get_text().length == 0);
            				}
            				else {
HXLINE(  77)					_hx_tmp1 = true;
            				}
HXDLIN(  77)				if (!(_hx_tmp1)) {
HXLINE(  77)					_hx_tmp = ::hx::IsLess( child->get_height(),max );
            				}
            				else {
HXLINE(  77)					_hx_tmp = true;
            				}
HXDLIN(  77)				if (_hx_tmp) {
HXLINE(  78)					child->set_height(max);
            				}
            			}
            		}
            	}



::hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	::hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.containers._Header.Layout"));
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
	__mClass->mName = HX_("haxe.ui.containers._Header.Layout",36,37,43,0b);
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
} // end namespace containers
} // end namespace _Header
