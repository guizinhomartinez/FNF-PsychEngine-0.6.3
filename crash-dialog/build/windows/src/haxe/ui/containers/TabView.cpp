#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_ButtonHeight
#include <haxe/ui/containers/_TabView/ButtonHeight.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_ButtonWidth
#include <haxe/ui/containers/_TabView/ButtonWidth.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Closable
#include <haxe/ui/containers/_TabView/Closable.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Events
#include <haxe/ui/containers/_TabView/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_GetPage
#include <haxe/ui/containers/_TabView/GetPage.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_GetPageById
#include <haxe/ui/containers/_TabView/GetPageById.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Layout
#include <haxe/ui/containers/_TabView/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_PageCount
#include <haxe/ui/containers/_TabView/PageCount.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_PageIndex
#include <haxe/ui/containers/_TabView/PageIndex.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_RemoveAllPages
#include <haxe/ui/containers/_TabView/RemoveAllPages.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_RemovePage
#include <haxe/ui/containers/_TabView/RemovePage.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_SelectedPage
#include <haxe/ui/containers/_TabView/SelectedPage.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_TabPosition
#include <haxe/ui/containers/_TabView/TabPosition.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b92b5270ca772aeb_19_new,"haxe.ui.containers.TabView","new",0x3a782f62,"haxe.ui.containers.TabView.new","haxe/ui/containers/TabView.hx",19,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_568_removePage,"haxe.ui.containers.TabView","removePage",0x048b79f1,"haxe.ui.containers.TabView.removePage","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_565_getPage,"haxe.ui.containers.TabView","getPage",0x70e19207,"haxe.ui.containers.TabView.getPage","haxe/ui/macros/Macros.hx",565,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_565_getPageById,"haxe.ui.containers.TabView","getPageById",0xa9dcc739,"haxe.ui.containers.TabView.getPageById","haxe/ui/macros/Macros.hx",565,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_568_removeAllPages,"haxe.ui.containers.TabView","removeAllPages",0x7e100305,"haxe.ui.containers.TabView.removeAllPages","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_138_registerComposite,"haxe.ui.containers.TabView","registerComposite",0xb9e3c3a6,"haxe.ui.containers.TabView.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_441_registerBehaviours,"haxe.ui.containers.TabView","registerBehaviours",0x70667b17,"haxe.ui.containers.TabView.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_475_get_pageIndex,"haxe.ui.containers.TabView","get_pageIndex",0x803d3b9c,"haxe.ui.containers.TabView.get_pageIndex","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_520_set_pageIndex,"haxe.ui.containers.TabView","set_pageIndex",0xc5431da8,"haxe.ui.containers.TabView.set_pageIndex","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_468_get_selectedPage,"haxe.ui.containers.TabView","get_selectedPage",0xf631ce91,"haxe.ui.containers.TabView.get_selectedPage","haxe/ui/macros/Macros.hx",468,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_520_set_selectedPage,"haxe.ui.containers.TabView","set_selectedPage",0x4c73bc05,"haxe.ui.containers.TabView.set_selectedPage","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_475_get_tabPosition,"haxe.ui.containers.TabView","get_tabPosition",0x413025b7,"haxe.ui.containers.TabView.get_tabPosition","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_506_set_tabPosition,"haxe.ui.containers.TabView","set_tabPosition",0x3cfba2c3,"haxe.ui.containers.TabView.set_tabPosition","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_475_get_pageCount,"haxe.ui.containers.TabView","get_pageCount",0x0c8be559,"haxe.ui.containers.TabView.get_pageCount","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_520_set_pageCount,"haxe.ui.containers.TabView","set_pageCount",0x5191c765,"haxe.ui.containers.TabView.set_pageCount","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_475_get_closable,"haxe.ui.containers.TabView","get_closable",0xbc30d0ee,"haxe.ui.containers.TabView.get_closable","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_520_set_closable,"haxe.ui.containers.TabView","set_closable",0xd129f462,"haxe.ui.containers.TabView.set_closable","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_475_get_buttonWidth,"haxe.ui.containers.TabView","get_buttonWidth",0xb327084d,"haxe.ui.containers.TabView.get_buttonWidth","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_520_set_buttonWidth,"haxe.ui.containers.TabView","set_buttonWidth",0xaef28559,"haxe.ui.containers.TabView.set_buttonWidth","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_475_get_buttonHeight,"haxe.ui.containers.TabView","get_buttonHeight",0xc54fb3c0,"haxe.ui.containers.TabView.get_buttonHeight","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_520_set_buttonHeight,"haxe.ui.containers.TabView","set_buttonHeight",0x1b91a134,"haxe.ui.containers.TabView.set_buttonHeight","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_455f81a58fbdf20d_565_cloneComponent,"haxe.ui.containers.TabView","cloneComponent",0x23dfc5de,"haxe.ui.containers.TabView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_619e3b36e3bb3f61_423_self,"haxe.ui.containers.TabView","self",0xf1ff4e4a,"haxe.ui.containers.TabView.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void TabView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_19_new)
HXDLIN(  19)		super::__construct();
            	}

Dynamic TabView_obj::__CreateEmpty() { return new TabView_obj; }

void *TabView_obj::_hx_vtable = 0;

Dynamic TabView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabView_obj > _hx_result = new TabView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x72c347e4) {
			if (inClassId<=(int)0x715d6dae) {
				return inClassId==(int)0x4ba87886 || inClassId==(int)0x715d6dae;
			} else {
				return inClassId==(int)0x72c347e4;
			}
		} else {
			return inClassId==(int)0x7ec24579 || inClassId==(int)0x7f32c9f2;
		}
	}
}

 ::haxe::ui::util::VariantType TabView_obj::removePage(int index){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_568_removePage)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("removePage",b3,14,71,c7),index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,removePage,return )

 ::haxe::ui::core::Component TabView_obj::getPage(int index){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_565_getPage)
HXDLIN( 565)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->call(HX_("getPage",05,8a,d4,1c),index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,getPage,return )

 ::haxe::ui::core::Component TabView_obj::getPageById(::String pageId){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_565_getPageById)
HXDLIN( 565)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->call(HX_("getPageById",37,96,de,6f),pageId));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,getPageById,return )

 ::haxe::ui::util::VariantType TabView_obj::removeAllPages(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_568_removeAllPages)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("removeAllPages",c7,26,87,80),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,removeAllPages,return )

void TabView_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_TabView::Builder >();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::_TabView::Events >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::containers::_TabView::Layout >();
            	}


void TabView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("pageIndex",43,72,2b,64),::hx::ClassOf< ::haxe::ui::containers::_TabView::PageIndex >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXDLIN( 543)		this->behaviours->_hx_register(HX_("selectedPage",4a,fa,eb,da),::hx::ClassOf< ::haxe::ui::containers::_TabView::SelectedPage >(),null());
HXLINE( 539)		this->behaviours->_hx_register(HX_("tabPosition",1e,94,16,a6),::hx::ClassOf< ::haxe::ui::containers::_TabView::TabPosition >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("pageCount",00,1c,7a,f0),::hx::ClassOf< ::haxe::ui::containers::_TabView::PageCount >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("closable",27,6c,aa,82),::hx::ClassOf< ::haxe::ui::containers::_TabView::Closable >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXDLIN( 543)		this->behaviours->_hx_register(HX_("buttonWidth",b4,76,0d,18),::hx::ClassOf< ::haxe::ui::containers::_TabView::ButtonWidth >(),null());
HXDLIN( 543)		this->behaviours->_hx_register(HX_("buttonHeight",79,df,09,aa),::hx::ClassOf< ::haxe::ui::containers::_TabView::ButtonHeight >(),null());
HXLINE( 578)		this->behaviours->_hx_register(HX_("removePage",b3,14,71,c7),::hx::ClassOf< ::haxe::ui::containers::_TabView::RemovePage >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("getPage",05,8a,d4,1c),::hx::ClassOf< ::haxe::ui::containers::_TabView::GetPage >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("getPageById",37,96,de,6f),::hx::ClassOf< ::haxe::ui::containers::_TabView::GetPageById >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("removeAllPages",c7,26,87,80),::hx::ClassOf< ::haxe::ui::containers::_TabView::RemoveAllPages >(),null());
            	}


int TabView_obj::get_pageIndex(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_475_get_pageIndex)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("pageIndex",43,72,2b,64)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_pageIndex,return )

int TabView_obj::set_pageIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_520_set_pageIndex)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("pageIndex",43,72,2b,64),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("pageIndex",43,72,2b,64)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_pageIndex,return )

 ::haxe::ui::core::Component TabView_obj::get_selectedPage(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_468_get_selectedPage)
HXLINE( 469)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 470)			return null();
            		}
HXLINE( 472)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("selectedPage",4a,fa,eb,da)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_selectedPage,return )

 ::haxe::ui::core::Component TabView_obj::set_selectedPage( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_520_set_selectedPage)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedPage",4a,fa,eb,da),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedPage",4a,fa,eb,da)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_selectedPage,return )

::String TabView_obj::get_tabPosition(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_475_get_tabPosition)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("tabPosition",1e,94,16,a6)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_tabPosition,return )

::String TabView_obj::set_tabPosition(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_506_set_tabPosition)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("tabPosition",1e,94,16,a6),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("tabPosition",1e,94,16,a6),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("tabPosition",1e,94,16,a6)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_tabPosition,return )

int TabView_obj::get_pageCount(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_475_get_pageCount)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("pageCount",00,1c,7a,f0)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_pageCount,return )

int TabView_obj::set_pageCount(int value){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_520_set_pageCount)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("pageCount",00,1c,7a,f0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("pageCount",00,1c,7a,f0)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_pageCount,return )

bool TabView_obj::get_closable(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_475_get_closable)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("closable",27,6c,aa,82)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_closable,return )

bool TabView_obj::set_closable(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_520_set_closable)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("closable",27,6c,aa,82),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("closable",27,6c,aa,82)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_closable,return )

 ::Dynamic TabView_obj::get_buttonWidth(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_475_get_buttonWidth)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("buttonWidth",b4,76,0d,18)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_buttonWidth,return )

 ::Dynamic TabView_obj::set_buttonWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_520_set_buttonWidth)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("buttonWidth",b4,76,0d,18),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("buttonWidth",b4,76,0d,18)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_buttonWidth,return )

 ::Dynamic TabView_obj::get_buttonHeight(){
            	HX_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_475_get_buttonHeight)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("buttonHeight",79,df,09,aa)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_buttonHeight,return )

 ::Dynamic TabView_obj::set_buttonHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_520_set_buttonHeight)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("buttonHeight",79,df,09,aa),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("buttonHeight",79,df,09,aa)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_buttonHeight,return )

 ::haxe::ui::core::ComponentContainer TabView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_455f81a58fbdf20d_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::TabView c = ( ( ::haxe::ui::containers::TabView)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer TabView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_619e3b36e3bb3f61_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::TabView_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< TabView_obj > TabView_obj::__new() {
	::hx::ObjectPtr< TabView_obj > __this = new TabView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabView_obj > TabView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabView_obj *__this = (TabView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabView_obj), true, "haxe.ui.containers.TabView"));
	*(void **)__this = TabView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabView_obj::TabView_obj()
{
}

::hx::Val TabView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPage") ) { return ::hx::Val( getPage_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_closable() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pageIndex() ); }
		if (HX_FIELD_EQ(inName,"pageCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pageCount() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removePage") ) { return ::hx::Val( removePage_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPageById") ) { return ::hx::Val( getPageById_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabPosition() ); }
		if (HX_FIELD_EQ(inName,"buttonWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonWidth() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedPage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedPage() ); }
		if (HX_FIELD_EQ(inName,"get_closable") ) { return ::hx::Val( get_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_closable") ) { return ::hx::Val( set_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"buttonHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonHeight() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_pageIndex") ) { return ::hx::Val( get_pageIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pageIndex") ) { return ::hx::Val( set_pageIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pageCount") ) { return ::hx::Val( get_pageCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pageCount") ) { return ::hx::Val( set_pageCount_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeAllPages") ) { return ::hx::Val( removeAllPages_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_tabPosition") ) { return ::hx::Val( get_tabPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabPosition") ) { return ::hx::Val( set_tabPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonWidth") ) { return ::hx::Val( get_buttonWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonWidth") ) { return ::hx::Val( set_buttonWidth_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedPage") ) { return ::hx::Val( get_selectedPage_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedPage") ) { return ::hx::Val( set_selectedPage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonHeight") ) { return ::hx::Val( get_buttonHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonHeight") ) { return ::hx::Val( set_buttonHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_closable(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pageIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"pageCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pageCount(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tabPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabPosition(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"buttonWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedPage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedPage(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"buttonHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonHeight(inValue.Cast<  ::Dynamic >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pageIndex",43,72,2b,64));
	outFields->push(HX_("selectedPage",4a,fa,eb,da));
	outFields->push(HX_("tabPosition",1e,94,16,a6));
	outFields->push(HX_("pageCount",00,1c,7a,f0));
	outFields->push(HX_("closable",27,6c,aa,82));
	outFields->push(HX_("buttonWidth",b4,76,0d,18));
	outFields->push(HX_("buttonHeight",79,df,09,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabView_obj_sStaticStorageInfo = 0;
#endif

static ::String TabView_obj_sMemberFields[] = {
	HX_("removePage",b3,14,71,c7),
	HX_("getPage",05,8a,d4,1c),
	HX_("getPageById",37,96,de,6f),
	HX_("removeAllPages",c7,26,87,80),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_pageIndex",1a,46,8f,25),
	HX_("set_pageIndex",26,28,95,6a),
	HX_("get_selectedPage",d3,e6,8a,df),
	HX_("set_selectedPage",47,d4,cc,35),
	HX_("get_tabPosition",b5,4b,f8,66),
	HX_("set_tabPosition",c1,c8,c3,62),
	HX_("get_pageCount",d7,ef,dd,b1),
	HX_("set_pageCount",e3,d1,e3,f6),
	HX_("get_closable",30,20,c4,37),
	HX_("set_closable",a4,43,bd,4c),
	HX_("get_buttonWidth",4b,2e,ef,d8),
	HX_("set_buttonWidth",57,ab,ba,d4),
	HX_("get_buttonHeight",02,cc,a8,ae),
	HX_("set_buttonHeight",76,b9,ea,04),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class TabView_obj::__mClass;

void TabView_obj::__register()
{
	TabView_obj _hx_dummy;
	TabView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.TabView",70,96,d8,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
