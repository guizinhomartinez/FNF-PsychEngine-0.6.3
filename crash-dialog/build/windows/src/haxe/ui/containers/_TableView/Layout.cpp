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
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer
#include <haxe/ui/containers/_TableView/CompoundItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_Layout
#include <haxe/ui/containers/_TableView/Layout.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d49bddcf6dfd5269_533_new,"haxe.ui.containers._TableView.Layout","new",0x5606e36c,"haxe.ui.containers._TableView.Layout.new","haxe/ui/containers/TableView.hx",533,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_d49bddcf6dfd5269_535_itemClass,"haxe.ui.containers._TableView.Layout","itemClass",0x7108c231,"haxe.ui.containers._TableView.Layout.itemClass","haxe/ui/containers/TableView.hx",535,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_d49bddcf6dfd5269_538_repositionChildren,"haxe.ui.containers._TableView.Layout","repositionChildren",0x91c33b2f,"haxe.ui.containers._TableView.Layout.repositionChildren","haxe/ui/containers/TableView.hx",538,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_d49bddcf6dfd5269_591_resizeChildren,"haxe.ui.containers._TableView.Layout","resizeChildren",0x7c7933c7,"haxe.ui.containers._TableView.Layout.resizeChildren","haxe/ui/containers/TableView.hx",591,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_d49bddcf6dfd5269_600_verticalConstraintModifier,"haxe.ui.containers._TableView.Layout","verticalConstraintModifier",0x66e0c15e,"haxe.ui.containers._TableView.Layout.verticalConstraintModifier","haxe/ui/containers/TableView.hx",600,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_d49bddcf6dfd5269_609_calcAutoSize,"haxe.ui.containers._TableView.Layout","calcAutoSize",0x638facf9,"haxe.ui.containers._TableView.Layout.calcAutoSize","haxe/ui/containers/TableView.hx",609,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d49bddcf6dfd5269_533_new)
HXDLIN( 533)		super::__construct();
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
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x1d75bd8b) {
			if (inClassId<=(int)0x12752c4a) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x12752c4a;
			} else {
				return inClassId==(int)0x1d75bd8b;
			}
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		if (inClassId<=(int)0x3799f835) {
			return inClassId==(int)0x32ce0794 || inClassId==(int)0x3799f835;
		} else {
			return inClassId==(int)0x3f873786;
		}
	}
}

::hx::Class Layout_obj::itemClass(int index, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_d49bddcf6dfd5269_535_itemClass)
HXDLIN( 535)		return ::hx::ClassOf< ::haxe::ui::containers::_TableView::CompoundItemRenderer >();
            	}


void Layout_obj::repositionChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_d49bddcf6dfd5269_538_repositionChildren)
HXLINE( 539)		 ::haxe::ui::containers::Header header = ( ( ::haxe::ui::containers::Header)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),true,null())) );
HXLINE( 540)		if (::hx::IsNull( header )) {
HXLINE( 541)			return;
            		}
HXLINE( 544)		this->super::repositionChildren();
HXLINE( 546)		Float _hx_tmp = this->get_paddingLeft();
HXDLIN( 546)		header->set_left((_hx_tmp + this->get_borderSize()));
HXLINE( 547)		Float _hx_tmp1 = this->get_paddingTop();
HXDLIN( 547)		header->set_top((_hx_tmp1 + this->get_borderSize()));
HXLINE( 548)		 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 549)		bool _hx_tmp2;
HXDLIN( 549)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 549)			_hx_tmp2 = (vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 549)			_hx_tmp2 = false;
            		}
HXDLIN( 549)		if (_hx_tmp2) {
HXLINE( 550)			header->addClass(HX_("scrolling",f5,fa,19,3e),null(),null());
HXLINE( 551)			header->invalidateComponent(null(),true);
            		}
            		else {
HXLINE( 553)			header->removeClass(HX_("scrolling",f5,fa,19,3e),null(),null());
HXLINE( 554)			header->invalidateComponent(null(),true);
            		}
HXLINE( 556)		Float rc = (::hx::TCast<  ::haxe::ui::containers::ScrollView >::cast(this->_component)->get_hscrollPos() + 1);
HXDLIN( 556)		Float rc1 = this->get_usableWidth();
HXDLIN( 556)		 ::haxe::ui::geom::Rectangle rc2 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,rc,1,rc1,header->get_height());
HXLINE( 557)		header->set_componentClipRect(rc2);
HXLINE( 559)		 ::haxe::ui::containers::Box data = ( ( ::haxe::ui::containers::Box)(this->findComponent(HX_("tableview-contents",74,2a,d3,78),::hx::ClassOf< ::haxe::ui::containers::Box >(),true,HX_("css",c3,83,4b,00))) );
HXLINE( 560)		if (::hx::IsNotNull( data )) {
HXLINE( 562)			{
HXLINE( 562)				int _g = 0;
HXDLIN( 562)				::Array< ::Dynamic> _g1;
HXDLIN( 562)				if (::hx::IsNull( data->_children )) {
HXLINE( 562)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 562)					_g1 = data->_children;
            				}
HXDLIN( 562)				while((_g < _g1->length)){
HXLINE( 562)					 ::haxe::ui::core::Component item = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 562)					_g = (_g + 1);
HXLINE( 563)					::Array< ::Dynamic> headerChildComponents = header->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Column >(),null());
HXLINE( 564)					{
HXLINE( 564)						int _g2 = 0;
HXDLIN( 564)						while((_g2 < headerChildComponents->length)){
HXLINE( 564)							 ::haxe::ui::components::Column column = headerChildComponents->__get(_g2).StaticCast<  ::haxe::ui::components::Column >();
HXDLIN( 564)							_g2 = (_g2 + 1);
HXLINE( 565)							if (::hx::IsNull( column->get_id() )) {
HXLINE( 566)								continue;
            							}
HXLINE( 568)							int isLast = headerChildComponents->indexOf(column,null());
HXDLIN( 568)							bool isLast1 = (isLast == (headerChildComponents->length - 1));
HXLINE( 569)							 ::haxe::ui::core::Component itemRenderer = item->findComponent(column->get_id(),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 570)							bool _hx_tmp;
HXDLIN( 570)							if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 570)								_hx_tmp = (::Std_obj::isOfType(itemRenderer,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >()) == false);
            							}
            							else {
HXLINE( 570)								_hx_tmp = false;
            							}
HXDLIN( 570)							if (_hx_tmp) {
HXLINE( 571)								itemRenderer = itemRenderer->findAncestor(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
            							}
HXLINE( 573)							if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 574)								itemRenderer->set_percentWidth(null());
HXLINE( 575)								if ((isLast1 == false)) {
HXLINE( 576)									 ::Dynamic _hx_tmp = column->get_width();
HXDLIN( 576)									itemRenderer->set_width((( (Float)(_hx_tmp) ) - item->get_layout()->get_horizontalSpacing()));
            								}
            								else {
HXLINE( 578)									itemRenderer->set_width(column->get_width());
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE( 584)			Float _hx_tmp = this->get_paddingLeft();
HXDLIN( 584)			data->set_left((_hx_tmp + this->get_borderSize()));
HXLINE( 585)			 ::Dynamic _hx_tmp1 = header->get_top();
HXDLIN( 585)			data->set_top(((_hx_tmp1 + header->get_height()) - ( (Float)(1) )));
HXLINE( 586)			data->set_componentWidth(header->get_width());
            		}
            	}


void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_d49bddcf6dfd5269_591_resizeChildren)
HXLINE( 592)		 ::haxe::ui::containers::Header header = ( ( ::haxe::ui::containers::Header)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),true,null())) );
HXLINE( 593)		if (::hx::IsNull( header )) {
HXLINE( 594)			return;
            		}
HXLINE( 597)		this->super::resizeChildren();
            	}


Float Layout_obj::verticalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_d49bddcf6dfd5269_600_verticalConstraintModifier)
HXLINE( 601)		 ::haxe::ui::containers::Header header = ( ( ::haxe::ui::containers::Header)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),true,null())) );
HXLINE( 602)		if (::hx::IsNull( header )) {
HXLINE( 603)			return ( (Float)(0) );
            		}
HXLINE( 606)		return ( (Float)(header->get_height()) );
            	}


 ::haxe::ui::geom::Size Layout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_d49bddcf6dfd5269_609_calcAutoSize)
HXLINE( 610)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(null());
HXLINE( 611)		 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 611)		size1->height = (size1->height + 1);
HXLINE( 612)		return size;
            	}



::hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	::hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.containers._TableView.Layout"));
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
	case 9:
		if (HX_FIELD_EQ(inName,"itemClass") ) { return ::hx::Val( itemClass_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"verticalConstraintModifier") ) { return ::hx::Val( verticalConstraintModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Layout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Layout_obj_sStaticStorageInfo = 0;
#endif

static ::String Layout_obj_sMemberFields[] = {
	HX_("itemClass",25,de,43,48),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("verticalConstraintModifier",ea,f2,b6,ce),
	HX_("calcAutoSize",85,81,3f,fd),
	::String(null()) };

::hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	Layout_obj _hx_dummy;
	Layout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.Layout",7a,fd,25,a1);
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
} // end namespace _TableView
