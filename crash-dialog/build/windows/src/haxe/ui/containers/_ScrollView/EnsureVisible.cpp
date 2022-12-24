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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_EnsureVisible
#include <haxe/ui/containers/_ScrollView/EnsureVisible.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8a20d9a8bfd55af_86_new,"haxe.ui.containers._ScrollView.EnsureVisible","new",0x41307f7f,"haxe.ui.containers._ScrollView.EnsureVisible.new","haxe/ui/containers/ScrollView.hx",86,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_a8a20d9a8bfd55af_87_call,"haxe.ui.containers._ScrollView.EnsureVisible","call",0xc1f6a49f,"haxe.ui.containers._ScrollView.EnsureVisible.call","haxe/ui/containers/ScrollView.hx",87,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_a8a20d9a8bfd55af_155_calcOffset,"haxe.ui.containers._ScrollView.EnsureVisible","calcOffset",0x50f144c9,"haxe.ui.containers._ScrollView.EnsureVisible.calcOffset","haxe/ui/containers/ScrollView.hx",155,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void EnsureVisible_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a8a20d9a8bfd55af_86_new)
HXDLIN(  86)		super::__construct(component);
            	}

Dynamic EnsureVisible_obj::__CreateEmpty() { return new EnsureVisible_obj; }

void *EnsureVisible_obj::_hx_vtable = 0;

Dynamic EnsureVisible_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EnsureVisible_obj > _hx_result = new EnsureVisible_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EnsureVisible_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x3491e1cf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3491e1cf;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType EnsureVisible_obj::call( ::Dynamic param){
            	HX_GC_STACKFRAME(&_hx_pos_a8a20d9a8bfd55af_87_call)
HXLINE(  88)		 ::haxe::ui::containers::ScrollView scrollview = ::hx::TCast<  ::haxe::ui::containers::ScrollView >::cast(this->_component);
HXLINE(  89)		if ((scrollview->get_allowAutoScroll() == false)) {
HXLINE(  90)			return null();
            		}
HXLINE(  93)		 ::haxe::ui::core::Component c = ::hx::TCast<  ::haxe::ui::core::Component >::cast(param);
HXLINE(  94)		if (::hx::IsInstanceEq( c,scrollview )) {
HXLINE(  95)			return null();
            		}
HXLINE(  98)		 ::haxe::ui::components::HorizontalScroll hscroll = scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  99)		Float hscrollPos = ( (Float)(0) );
HXLINE( 100)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 101)			hscrollPos = hscroll->get_pos();
            		}
HXLINE( 104)		 ::haxe::ui::components::VerticalScroll vscroll = scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 105)		Float vscrollPos = ( (Float)(0) );
HXLINE( 106)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 107)			vscrollPos = vscroll->get_pos();
            		}
HXLINE( 110)		Float componentScreenRect = c->get_screenLeft();
HXDLIN( 110)		Float componentScreenRect1 = c->get_screenTop();
HXDLIN( 110)		 ::Dynamic componentScreenRect2 = c->get_width();
HXDLIN( 110)		 ::haxe::ui::geom::Rectangle componentScreenRect3 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,componentScreenRect,componentScreenRect1,componentScreenRect2,c->get_height());
HXLINE( 111)		Float componentRect = (c->get_screenLeft() + hscrollPos);
HXDLIN( 111)		Float componentRect1 = (c->get_screenTop() + vscrollPos);
HXDLIN( 111)		 ::Dynamic componentRect2 = c->get_width();
HXDLIN( 111)		 ::haxe::ui::geom::Rectangle componentRect3 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,componentRect,componentRect1,componentRect2,c->get_height());
HXLINE( 112)		Float scrollRect = scrollview->get_screenLeft();
HXDLIN( 112)		Float scrollRect1 = scrollview->get_screenTop();
HXDLIN( 112)		 ::Dynamic scrollRect2 = scrollview->get_width();
HXDLIN( 112)		 ::haxe::ui::geom::Rectangle scrollRect3 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,scrollRect,scrollRect1,scrollRect2,scrollview->get_height());
HXLINE( 114)		 ::haxe::ui::geom::Rectangle scrollRectFixed = scrollRect3->copy();
HXLINE( 115)		 ::haxe::ui::geom::Size usableSize = scrollview->get_layout()->get_usableSize();
HXLINE( 116)		scrollRectFixed->width = usableSize->width;
HXLINE( 117)		scrollRectFixed->height = usableSize->height;
HXLINE( 119)		if (scrollRectFixed->containsRect(componentScreenRect3)) {
HXLINE( 120)			return null();
            		}
HXLINE( 123)		Float newHScrollPos = hscrollPos;
HXLINE( 124)		Float newVScrollPos = vscrollPos;
HXLINE( 126)		Float fixedRight = componentRect3->get_right();
HXDLIN( 126)		Float fixedRight1 = (fixedRight - scrollRect3->left);
HXLINE( 127)		Float fixedLeft = (componentRect3->left - scrollRect3->left);
HXLINE( 128)		Float fixedBottom = componentRect3->get_bottom();
HXDLIN( 128)		Float fixedBottom1 = (fixedBottom - scrollRect3->top);
HXLINE( 129)		Float fixedTop = (componentRect3->top - scrollRect3->top);
HXLINE( 130)		int offsetLeft = 1;
HXLINE( 131)		int offsetTop = 1;
HXLINE( 133)		Float _hx_tmp = componentScreenRect3->get_right();
HXDLIN( 133)		if ((scrollRectFixed->containsPoint(_hx_tmp,componentScreenRect3->top) == false)) {
HXLINE( 134)			Float newHScrollPos1 = (fixedRight1 - usableSize->width);
HXDLIN( 134)			newHScrollPos = (newHScrollPos1 + (this->calcOffset(c,HX_("right",dc,0b,64,e9)) - ( (Float)(offsetLeft) )));
            		}
            		else {
HXLINE( 135)			if ((scrollRectFixed->containsPoint(componentScreenRect3->left,componentScreenRect3->top) == false)) {
HXLINE( 136)				newHScrollPos = (fixedLeft - (this->calcOffset(c,HX_("left",07,08,b0,47)) + offsetLeft));
            			}
            		}
HXLINE( 139)		Float componentScreenRect4 = componentScreenRect3->left;
HXDLIN( 139)		if ((scrollRectFixed->containsPoint(componentScreenRect4,componentScreenRect3->get_bottom()) == false)) {
HXLINE( 140)			Float newVScrollPos1 = (fixedBottom1 - usableSize->height);
HXDLIN( 140)			newVScrollPos = (newVScrollPos1 + (this->calcOffset(c,HX_("bottom",eb,e6,78,65)) - ( (Float)(offsetTop) )));
            		}
            		else {
HXLINE( 141)			if ((scrollRectFixed->containsPoint(componentScreenRect3->left,componentScreenRect3->top) == false)) {
HXLINE( 142)				newVScrollPos = (fixedTop - (this->calcOffset(c,HX_("top",95,66,58,00)) + offsetTop));
            			}
            		}
HXLINE( 145)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 146)			hscroll->set_pos(newHScrollPos);
            		}
HXLINE( 148)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 149)			vscroll->set_pos(newVScrollPos);
            		}
HXLINE( 152)		return null();
            	}


Float EnsureVisible_obj::calcOffset( ::haxe::ui::core::Component c,::String which){
            	HX_STACKFRAME(&_hx_pos_a8a20d9a8bfd55af_155_calcOffset)
HXLINE( 156)		Float p = ( (Float)(0) );
HXLINE( 157)		 ::haxe::ui::core::Component r = c->parentComponent;
HXLINE( 158)		while(::hx::IsNotNull( r )){
HXLINE( 159)			if (::hx::IsNotNull( r->get_style() )) {
HXLINE( 160)				::String _hx_switch_0 = which;
            				if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 174)					if (::hx::IsNotNull( r->get_paddingBottom() )) {
HXLINE( 175)						p = (p + r->get_paddingBottom());
            					}
HXLINE( 174)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 162)					if (::hx::IsNotNull( r->get_paddingLeft() )) {
HXLINE( 163)						p = (p + r->get_paddingLeft());
            					}
HXLINE( 162)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 166)					if (::hx::IsNotNull( r->get_paddingRight() )) {
HXLINE( 167)						p = (p + r->get_paddingRight());
            					}
HXLINE( 166)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 170)					if (::hx::IsNotNull( r->get_paddingTop() )) {
HXLINE( 171)						p = (p + r->get_paddingTop());
            					}
HXLINE( 170)					goto _hx_goto_3;
            				}
            				_hx_goto_3:;
            			}
HXLINE( 179)			r = r->parentComponent;
HXLINE( 180)			if (::hx::IsInstanceEq( r,this->_component )) {
HXLINE( 181)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE( 184)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EnsureVisible_obj,calcOffset,return )


::hx::ObjectPtr< EnsureVisible_obj > EnsureVisible_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< EnsureVisible_obj > __this = new EnsureVisible_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< EnsureVisible_obj > EnsureVisible_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	EnsureVisible_obj *__this = (EnsureVisible_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EnsureVisible_obj), true, "haxe.ui.containers._ScrollView.EnsureVisible"));
	*(void **)__this = EnsureVisible_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

EnsureVisible_obj::EnsureVisible_obj()
{
}

::hx::Val EnsureVisible_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"calcOffset") ) { return ::hx::Val( calcOffset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EnsureVisible_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EnsureVisible_obj_sStaticStorageInfo = 0;
#endif

static ::String EnsureVisible_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	HX_("calcOffset",08,42,2e,15),
	::String(null()) };

::hx::Class EnsureVisible_obj::__mClass;

void EnsureVisible_obj::__register()
{
	EnsureVisible_obj _hx_dummy;
	EnsureVisible_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.EnsureVisible",0d,54,05,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EnsureVisible_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EnsureVisible_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnsureVisible_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnsureVisible_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
