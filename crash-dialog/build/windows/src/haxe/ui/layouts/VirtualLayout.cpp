#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VirtualLayout
#include <haxe/ui/layouts/VirtualLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_878b513f172e5809_17_new,"haxe.ui.layouts.VirtualLayout","new",0xb17e69f0,"haxe.ui.layouts.VirtualLayout.new","haxe/ui/layouts/VirtualLayout.hx",17,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_24_get_contents,"haxe.ui.layouts.VirtualLayout","get_contents",0x695b6d93,"haxe.ui.layouts.VirtualLayout.get_contents","haxe/ui/layouts/VirtualLayout.hx",24,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_34_get_dataSource,"haxe.ui.layouts.VirtualLayout","get_dataSource",0xe310af5e,"haxe.ui.layouts.VirtualLayout.get_dataSource","haxe/ui/layouts/VirtualLayout.hx",34,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_38_get_itemWidth,"haxe.ui.layouts.VirtualLayout","get_itemWidth",0x80921d5a,"haxe.ui.layouts.VirtualLayout.get_itemWidth","haxe/ui/layouts/VirtualLayout.hx",38,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_65_get_itemHeight,"haxe.ui.layouts.VirtualLayout","get_itemHeight",0xb5970a13,"haxe.ui.layouts.VirtualLayout.get_itemHeight","haxe/ui/layouts/VirtualLayout.hx",65,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_100_get_itemCount,"haxe.ui.layouts.VirtualLayout","get_itemCount",0x0092ac23,"haxe.ui.layouts.VirtualLayout.get_itemCount","haxe/ui/layouts/VirtualLayout.hx",100,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_105_refresh,"haxe.ui.layouts.VirtualLayout","refresh",0xb3bf7b6b,"haxe.ui.layouts.VirtualLayout.refresh","haxe/ui/layouts/VirtualLayout.hx",105,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_111_refreshData,"haxe.ui.layouts.VirtualLayout","refreshData",0x11b58f35,"haxe.ui.layouts.VirtualLayout.refreshData","haxe/ui/layouts/VirtualLayout.hx",111,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_125_refreshNonVirtualData,"haxe.ui.layouts.VirtualLayout","refreshNonVirtualData",0x48838693,"haxe.ui.layouts.VirtualLayout.refreshNonVirtualData","haxe/ui/layouts/VirtualLayout.hx",125,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_175_refreshVirtualData,"haxe.ui.layouts.VirtualLayout","refreshVirtualData",0x955f502a,"haxe.ui.layouts.VirtualLayout.refreshVirtualData","haxe/ui/layouts/VirtualLayout.hx",175,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_235_calculateRangeVisible,"haxe.ui.layouts.VirtualLayout","calculateRangeVisible",0xa05d7c4b,"haxe.ui.layouts.VirtualLayout.calculateRangeVisible","haxe/ui/layouts/VirtualLayout.hx",235,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_239_updateScroll,"haxe.ui.layouts.VirtualLayout","updateScroll",0xcc463366,"haxe.ui.layouts.VirtualLayout.updateScroll","haxe/ui/layouts/VirtualLayout.hx",239,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_243_itemClass,"haxe.ui.layouts.VirtualLayout","itemClass",0xecfa03b5,"haxe.ui.layouts.VirtualLayout.itemClass","haxe/ui/layouts/VirtualLayout.hx",243,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_255_getRenderer,"haxe.ui.layouts.VirtualLayout","getRenderer",0xb3863189,"haxe.ui.layouts.VirtualLayout.getRenderer","haxe/ui/layouts/VirtualLayout.hx",255,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_293_removeRenderer,"haxe.ui.layouts.VirtualLayout","removeRenderer",0xcc79b217,"haxe.ui.layouts.VirtualLayout.removeRenderer","haxe/ui/layouts/VirtualLayout.hx",293,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_308_removeInvisibleRenderers,"haxe.ui.layouts.VirtualLayout","removeInvisibleRenderers",0x83a892b7,"haxe.ui.layouts.VirtualLayout.removeInvisibleRenderers","haxe/ui/layouts/VirtualLayout.hx",308,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_325_isRendererVisible,"haxe.ui.layouts.VirtualLayout","isRendererVisible",0xd0de3235,"haxe.ui.layouts.VirtualLayout.isRendererVisible","haxe/ui/layouts/VirtualLayout.hx",325,0x94990c21)
HX_LOCAL_STACK_FRAME(_hx_pos_878b513f172e5809_336_isIndexVisible,"haxe.ui.layouts.VirtualLayout","isIndexVisible",0x336ffafa,"haxe.ui.layouts.VirtualLayout.isIndexVisible","haxe/ui/layouts/VirtualLayout.hx",336,0x94990c21)
namespace haxe{
namespace ui{
namespace layouts{

void VirtualLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_17_new)
HXLINE( 124)		this->_lastItemRenderer = null();
HXLINE(  63)		this->_firstPass = true;
HXLINE(  21)		this->_sizeCache = ::Array_obj< Float >::__new(0);
HXLINE(  20)		this->_rendererPool = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  19)		this->_lastIndex = -1;
HXLINE(  18)		this->_firstIndex = -1;
HXLINE(  17)		super::__construct();
            	}

Dynamic VirtualLayout_obj::__CreateEmpty() { return new VirtualLayout_obj; }

void *VirtualLayout_obj::_hx_vtable = 0;

Dynamic VirtualLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VirtualLayout_obj > _hx_result = new VirtualLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VirtualLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x1d75bd8b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1d75bd8b;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835 || inClassId==(int)0x3f873786;
	}
}

 ::haxe::ui::core::Component VirtualLayout_obj::get_contents(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_24_get_contents)
HXLINE(  25)		if (::hx::IsNull( this->contents )) {
HXLINE(  26)			this->contents = ( ( ::haxe::ui::core::Component)(this->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00))) );
            		}
HXLINE(  29)		return this->contents;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,get_contents,return )

 ::haxe::ui::data::DataSource VirtualLayout_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_34_get_dataSource)
HXDLIN(  34)		return ::haxe::ui::core::IDataComponent_obj::get_dataSource( ::hx::interface_check(this->_component,0xfafb3fc3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,get_dataSource,return )

Float VirtualLayout_obj::get_itemWidth(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_38_get_itemWidth)
HXLINE(  39)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE(  40)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_itemWidth(comp) > 0)) {
HXLINE(  41)			return ::haxe::ui::containers::IVirtualContainer_obj::get_itemWidth(comp);
            		}
HXLINE(  44)		 ::haxe::ui::core::Component _this = this->get_contents();
HXDLIN(  44)		::Array< ::Dynamic> childComponents;
HXDLIN(  44)		if (::hx::IsNull( _this->_children )) {
HXLINE(  44)			childComponents = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  44)			childComponents = _this->_children;
            		}
HXLINE(  45)		Float result = ( (Float)(0) );
HXLINE(  46)		if ((childComponents->length > 0)) {
HXLINE(  47)			result = ( (Float)(childComponents->__get(0).StaticCast<  ::haxe::ui::core::Component >()->get_width()) );
HXLINE(  48)			if ((result <= 0)) {
HXLINE(  49)				childComponents->__get(0).StaticCast<  ::haxe::ui::core::Component >()->syncComponentValidation(null());
HXLINE(  50)				result = ( (Float)(childComponents->__get(0).StaticCast<  ::haxe::ui::core::Component >()->get_width()) );
            			}
            		}
HXLINE(  54)		if ((result > 0)) {
HXLINE(  55)			::haxe::ui::containers::IVirtualContainer_obj::set_itemWidth(comp,result);
            		}
            		else {
HXLINE(  57)			result = ( (Float)(1) );
            		}
HXLINE(  60)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,get_itemWidth,return )

Float VirtualLayout_obj::get_itemHeight(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_65_get_itemHeight)
HXLINE(  66)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE(  67)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_itemHeight(comp) > 0)) {
HXLINE(  68)			return ::haxe::ui::containers::IVirtualContainer_obj::get_itemHeight(comp);
            		}
HXLINE(  71)		 ::haxe::ui::core::Component _this = this->get_contents();
HXDLIN(  71)		::Array< ::Dynamic> childComponents;
HXDLIN(  71)		if (::hx::IsNull( _this->_children )) {
HXLINE(  71)			childComponents = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  71)			childComponents = _this->_children;
            		}
HXLINE(  72)		Float result = ( (Float)(0) );
HXLINE(  73)		if ((childComponents->length > 0)) {
HXLINE(  74)			result = ( (Float)(childComponents->__get(0).StaticCast<  ::haxe::ui::core::Component >()->get_height()) );
HXLINE(  75)			if ((result <= 0)) {
HXLINE(  76)				childComponents->__get(0).StaticCast<  ::haxe::ui::core::Component >()->syncComponentValidation(null());
HXLINE(  77)				result = ( (Float)(childComponents->__get(0).StaticCast<  ::haxe::ui::core::Component >()->get_height()) );
            			}
            		}
HXLINE(  80)		if ((result <= 0)) {
HXLINE(  81)			result = ( (Float)(25) );
            		}
            		else {
HXLINE(  83)			if ((::haxe::ui::containers::IVirtualContainer_obj::get_virtual(comp) == true)) {
HXLINE(  84)				if ((this->_firstPass == false)) {
HXLINE(  85)					::haxe::ui::containers::IVirtualContainer_obj::set_itemHeight(comp,result);
            				}
HXLINE(  91)				if ((this->_firstPass == true)) {
HXLINE(  92)					this->_firstPass = false;
            				}
            			}
            		}
HXLINE(  96)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,get_itemHeight,return )

int VirtualLayout_obj::get_itemCount(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_100_get_itemCount)
HXLINE( 101)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 102)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_itemCount(comp) >= 0)) {
HXLINE( 102)			return ::haxe::ui::containers::IVirtualContainer_obj::get_itemCount(comp);
            		}
            		else {
HXLINE( 102)			return 0;
            		}
HXDLIN( 102)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,get_itemCount,return )

void VirtualLayout_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_105_refresh)
HXLINE( 106)		this->refreshData();
HXLINE( 108)		this->super::refresh();
            	}


void VirtualLayout_obj::refreshData(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_111_refreshData)
HXLINE( 112)		if (::hx::IsNull( this->get_dataSource() )) {
HXLINE( 113)			return;
            		}
HXLINE( 116)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 117)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_virtual(comp) == false)) {
HXLINE( 118)			this->refreshNonVirtualData();
            		}
            		else {
HXLINE( 120)			this->refreshVirtualData();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,refreshData,(void))

void VirtualLayout_obj::refreshNonVirtualData(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_125_refreshNonVirtualData)
HXLINE( 127)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 128)		 ::haxe::ui::core::ItemRenderer _hx_tmp = ::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp);
HXDLIN( 128)		if (::hx::IsInstanceNotEq( _hx_tmp,this->_lastItemRenderer )) {
HXLINE( 129)			this->_lastItemRenderer = ::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp);
HXLINE( 130)			this->get_contents()->removeAllComponents(null());
            		}
HXLINE( 133)		 ::haxe::ui::data::DataSource dataSource = this->get_dataSource();
HXLINE( 134)		 ::haxe::ui::core::Component contents = this->get_contents();
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			int _g1 = dataSource->get_size();
HXDLIN( 135)			while((_g < _g1)){
HXLINE( 135)				_g = (_g + 1);
HXDLIN( 135)				int n = (_g - 1);
HXLINE( 136)				 ::Dynamic data = dataSource->get(n);
HXLINE( 137)				 ::haxe::ui::core::ItemRenderer item = null();
HXLINE( 138)				::Array< ::Dynamic> _hx_tmp;
HXDLIN( 138)				if (::hx::IsNull( contents->_children )) {
HXLINE( 138)					_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 138)					_hx_tmp = contents->_children;
            				}
HXDLIN( 138)				if ((n < _hx_tmp->length)) {
HXLINE( 139)					::Array< ::Dynamic> item1;
HXDLIN( 139)					if (::hx::IsNull( contents->_children )) {
HXLINE( 139)						item1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 139)						item1 = contents->_children;
            					}
HXDLIN( 139)					item = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(item1->__get(n).StaticCast<  ::haxe::ui::core::Component >());
HXLINE( 140)					if (::hx::IsEq( item->get_data(),data )) {
HXLINE( 141)						item->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE( 142)						continue;
            					}
HXLINE( 145)					::hx::Class cls = this->itemClass(n,data);
HXLINE( 146)					if (!(::Std_obj::isOfType(item,cls))) {
HXLINE( 148)						this->removeRenderer(item,null());
HXLINE( 149)						item = this->getRenderer(cls,n);
HXLINE( 150)						contents->addComponentAt(item,n);
            					}
            				}
            				else {
HXLINE( 153)					::hx::Class cls = this->itemClass(n,data);
HXLINE( 154)					item = this->getRenderer(cls,n);
HXLINE( 155)					contents->addComponent(item);
            				}
HXLINE( 158)				::String className;
HXDLIN( 158)				if ((::hx::Mod(n,2) == 0)) {
HXLINE( 158)					className = HX_("even",1a,6f,1c,43);
            				}
            				else {
HXLINE( 158)					className = HX_("odd",af,91,54,00);
            				}
HXLINE( 159)				if ((item->classes->indexOf(className,null()) == -1)) {
HXLINE( 160)					::String inverseClassName;
HXDLIN( 160)					if ((::hx::Mod(n,2) == 0)) {
HXLINE( 160)						inverseClassName = HX_("odd",af,91,54,00);
            					}
            					else {
HXLINE( 160)						inverseClassName = HX_("even",1a,6f,1c,43);
            					}
HXLINE( 161)					item->removeClass(inverseClassName,null(),null());
HXLINE( 162)					item->addClass(className,null(),null());
            				}
HXLINE( 165)				item->itemIndex = n;
HXLINE( 166)				item->set_data(data);
            			}
            		}
HXLINE( 169)		while(true){
HXLINE( 169)			int _hx_tmp = dataSource->get_size();
HXDLIN( 169)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 169)			if (::hx::IsNull( contents->_children )) {
HXLINE( 169)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 169)				_hx_tmp1 = contents->_children;
            			}
HXDLIN( 169)			if (!((_hx_tmp < _hx_tmp1->length))) {
HXLINE( 169)				goto _hx_goto_9;
            			}
HXLINE( 170)			::Array< ::Dynamic> item;
HXDLIN( 170)			if (::hx::IsNull( contents->_children )) {
HXLINE( 170)				item = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 170)				item = contents->_children;
            			}
HXDLIN( 170)			::Array< ::Dynamic> item1;
HXDLIN( 170)			if (::hx::IsNull( contents->_children )) {
HXLINE( 170)				item1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 170)				item1 = contents->_children;
            			}
HXDLIN( 170)			 ::haxe::ui::core::ItemRenderer item2 = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(item->__get((item1->length - 1)).StaticCast<  ::haxe::ui::core::Component >());
HXLINE( 171)			this->removeRenderer(item2,null());
            		}
            		_hx_goto_9:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,refreshNonVirtualData,(void))

void VirtualLayout_obj::refreshVirtualData(){
            	HX_GC_STACKFRAME(&_hx_pos_878b513f172e5809_175_refreshVirtualData)
HXLINE( 176)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 177)		 ::haxe::ui::core::ItemRenderer _hx_tmp = ::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp);
HXDLIN( 177)		if (::hx::IsInstanceNotEq( _hx_tmp,this->_lastItemRenderer )) {
HXLINE( 178)			this->_lastItemRenderer = ::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp);
HXLINE( 179)			this->get_contents()->removeAllComponents(null());
HXLINE( 180)			this->_rendererPool = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 183)		this->removeInvisibleRenderers();
HXLINE( 184)		this->calculateRangeVisible();
HXLINE( 185)		this->updateScroll();
HXLINE( 187)		 ::haxe::ui::data::DataSource dataSource = this->get_dataSource();
HXLINE( 188)		int i = 0;
HXLINE( 189)		{
HXLINE( 189)			int _g = this->_firstIndex;
HXDLIN( 189)			int _g1 = this->_lastIndex;
HXDLIN( 189)			while((_g < _g1)){
HXLINE( 189)				_g = (_g + 1);
HXDLIN( 189)				int n = (_g - 1);
HXLINE( 190)				 ::Dynamic data = dataSource->get(n);
HXLINE( 192)				 ::haxe::ui::core::ItemRenderer item = null();
HXLINE( 193)				::hx::Class cls = this->itemClass(n,data);
HXLINE( 194)				 ::haxe::ui::core::Component _this = this->get_contents();
HXDLIN( 194)				::Array< ::Dynamic> _hx_tmp;
HXDLIN( 194)				if (::hx::IsNull( _this->_children )) {
HXLINE( 194)					_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 194)					_hx_tmp = _this->_children;
            				}
HXDLIN( 194)				if ((_hx_tmp->length <= i)) {
HXLINE( 195)					item = this->getRenderer(cls,n);
HXLINE( 196)					this->get_contents()->addComponent(item);
            				}
            				else {
HXLINE( 198)					 ::haxe::ui::core::Component _this = this->get_contents();
HXDLIN( 198)					::Array< ::Dynamic> item1;
HXDLIN( 198)					if (::hx::IsNull( _this->_children )) {
HXLINE( 198)						item1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 198)						item1 = _this->_children;
            					}
HXDLIN( 198)					item = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(item1->__get(i).StaticCast<  ::haxe::ui::core::Component >());
HXLINE( 201)					if (!(::Std_obj::isOfType(item,cls))) {
HXLINE( 202)						item = this->getRenderer(cls,n);
HXLINE( 203)						this->get_contents()->addComponentAt(item,i);
            					}
            					else {
HXLINE( 204)						if ((item->itemIndex != n)) {
HXLINE( 205)							if (this->_component->hasEvent(HX_("rendererdestroyed",36,32,a8,2f),null())) {
HXLINE( 206)								 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 206)								_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("rendererdestroyed",36,32,a8,2f),null(),item));
            							}
HXLINE( 209)							this->_component->setComponentIndex(item,i);
HXLINE( 210)							item->itemIndex = n;
HXLINE( 212)							if (this->_component->hasEvent(HX_("renderercreated",05,6f,f5,09),null())) {
HXLINE( 213)								 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 213)								_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("renderercreated",05,6f,f5,09),null(),item));
            							}
            						}
            					}
            				}
HXLINE( 218)				::String className;
HXDLIN( 218)				if ((::hx::Mod(n,2) == 0)) {
HXLINE( 218)					className = HX_("even",1a,6f,1c,43);
            				}
            				else {
HXLINE( 218)					className = HX_("odd",af,91,54,00);
            				}
HXLINE( 219)				if ((item->classes->indexOf(className,null()) == -1)) {
HXLINE( 220)					::String inverseClassName;
HXDLIN( 220)					if ((::hx::Mod(n,2) == 0)) {
HXLINE( 220)						inverseClassName = HX_("odd",af,91,54,00);
            					}
            					else {
HXLINE( 220)						inverseClassName = HX_("even",1a,6f,1c,43);
            					}
HXLINE( 221)					item->removeClass(inverseClassName,null(),null());
HXLINE( 222)					item->addClass(className,null(),null());
            				}
HXLINE( 225)				item->set_data(data);
HXLINE( 227)				i = (i + 1);
            			}
            		}
HXLINE( 230)		while(true){
HXLINE( 230)			 ::haxe::ui::core::Component _this = this->get_contents();
HXDLIN( 230)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 230)			if (::hx::IsNull( _this->_children )) {
HXLINE( 230)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 230)				_hx_tmp = _this->_children;
            			}
HXDLIN( 230)			if (!((_hx_tmp->length > i))) {
HXLINE( 230)				goto _hx_goto_12;
            			}
HXLINE( 231)			 ::haxe::ui::core::Component _this1 = this->get_contents();
HXDLIN( 231)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 231)			if (::hx::IsNull( _this1->_children )) {
HXLINE( 231)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 231)				_hx_tmp1 = _this1->_children;
            			}
HXDLIN( 231)			 ::haxe::ui::core::Component _this2 = this->get_contents();
HXDLIN( 231)			::Array< ::Dynamic> _hx_tmp2;
HXDLIN( 231)			if (::hx::IsNull( _this2->_children )) {
HXLINE( 231)				_hx_tmp2 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 231)				_hx_tmp2 = _this2->_children;
            			}
HXDLIN( 231)			this->removeRenderer(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(_hx_tmp1->__get((_hx_tmp2->length - 1)).StaticCast<  ::haxe::ui::core::Component >()),false);
            		}
            		_hx_goto_12:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,refreshVirtualData,(void))

void VirtualLayout_obj::calculateRangeVisible(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_235_calculateRangeVisible)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,calculateRangeVisible,(void))

void VirtualLayout_obj::updateScroll(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_239_updateScroll)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,updateScroll,(void))

::hx::Class VirtualLayout_obj::itemClass(int index, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_243_itemClass)
HXLINE( 244)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 245)		if (::hx::IsNotNull( ::haxe::ui::containers::IVirtualContainer_obj::get_itemRendererClass(comp) )) {
HXLINE( 246)			return ::haxe::ui::containers::IVirtualContainer_obj::get_itemRendererClass(comp);
            		}
            		else {
HXLINE( 247)			if (::hx::IsNotNull( ::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp) )) {
HXLINE( 248)				return ::Type_obj::getClass(::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp));
            			}
            			else {
HXLINE( 250)				return ::hx::ClassOf< ::haxe::ui::core::BasicItemRenderer >();
            			}
            		}
HXLINE( 245)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(VirtualLayout_obj,itemClass,return )

 ::haxe::ui::core::ItemRenderer VirtualLayout_obj::getRenderer(::hx::Class cls,int index){
            	HX_GC_STACKFRAME(&_hx_pos_878b513f172e5809_255_getRenderer)
HXLINE( 256)		 ::haxe::ui::core::ItemRenderer instance = null();
HXLINE( 257)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 258)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_virtual(comp) == true)) {
HXLINE( 259)			int _g = 0;
HXDLIN( 259)			int _g1 = this->_rendererPool->length;
HXDLIN( 259)			while((_g < _g1)){
HXLINE( 259)				_g = (_g + 1);
HXDLIN( 259)				int i = (_g - 1);
HXLINE( 260)				 ::haxe::ui::core::ItemRenderer renderer = this->_rendererPool->__get(i).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 261)				if (::Std_obj::isOfType(renderer,cls)) {
HXLINE( 262)					this->_rendererPool->removeRange(i,1);
HXLINE( 263)					instance = renderer;
HXLINE( 264)					goto _hx_goto_17;
            				}
            			}
            			_hx_goto_17:;
            		}
HXLINE( 269)		if (::hx::IsNull( instance )) {
HXLINE( 270)			bool _hx_tmp;
HXDLIN( 270)			if (::hx::IsNotNull( ::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp) )) {
HXLINE( 270)				_hx_tmp = ::hx::IsPointerEq( ::Type_obj::getClass(::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp)),cls );
            			}
            			else {
HXLINE( 270)				_hx_tmp = false;
            			}
HXDLIN( 270)			if (_hx_tmp) {
HXLINE( 271)				instance = Dynamic( ::haxe::ui::containers::IVirtualContainer_obj::get_itemRenderer(comp)->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 276)				instance->handleVisibility(true);
            			}
            			else {
HXLINE( 278)				instance = ( ( ::haxe::ui::core::ItemRenderer)(::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0))) );
            			}
            		}
HXLINE( 282)		instance->itemIndex = index;
HXLINE( 283)		if (this->_component->hasEvent(HX_("renderercreated",05,6f,f5,09),null())) {
HXLINE( 284)			 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 284)			_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("renderercreated",05,6f,f5,09),null(),instance));
            		}
HXLINE( 287)		if ((this->_component->get_hidden() == false)) {
HXLINE( 288)			instance->handleVisibility(true);
            		}
HXLINE( 290)		return instance;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VirtualLayout_obj,getRenderer,return )

void VirtualLayout_obj::removeRenderer( ::haxe::ui::core::ItemRenderer renderer,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_878b513f172e5809_293_removeRenderer)
HXLINE( 294)		this->_component->removeComponent(renderer,dispose,null());
HXLINE( 296)		::Dynamic comp =  ::hx::interface_check(this->_component,0x3d194ad3);
HXLINE( 297)		if ((::haxe::ui::containers::IVirtualContainer_obj::get_virtual(comp) == true)) {
HXLINE( 298)			this->_rendererPool->push(renderer);
            		}
HXLINE( 301)		if (this->_component->hasEvent(HX_("rendererdestroyed",36,32,a8,2f),null())) {
HXLINE( 302)			 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 302)			_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("rendererdestroyed",36,32,a8,2f),null(),renderer));
            		}
HXLINE( 305)		renderer->itemIndex = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VirtualLayout_obj,removeRenderer,(void))

void VirtualLayout_obj::removeInvisibleRenderers(){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_308_removeInvisibleRenderers)
HXLINE( 309)		 ::haxe::ui::core::Component contents = this->get_contents();
HXLINE( 310)		if ((this->_firstIndex >= 0)) {
HXLINE( 311)			while(true){
HXLINE( 311)				bool _hx_tmp;
HXDLIN( 311)				::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 311)				if (::hx::IsNull( contents->_children )) {
HXLINE( 311)					_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 311)					_hx_tmp1 = contents->_children;
            				}
HXDLIN( 311)				if ((_hx_tmp1->length > 0)) {
HXLINE( 311)					::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 311)					if (::hx::IsNull( contents->_children )) {
HXLINE( 311)						_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 311)						_hx_tmp1 = contents->_children;
            					}
HXDLIN( 311)					_hx_tmp = !(this->isRendererVisible(_hx_tmp1->__get(0).StaticCast<  ::haxe::ui::core::Component >()));
            				}
            				else {
HXLINE( 311)					_hx_tmp = false;
            				}
HXDLIN( 311)				if (!(_hx_tmp)) {
HXLINE( 311)					goto _hx_goto_20;
            				}
HXLINE( 312)				::Array< ::Dynamic> _hx_tmp2;
HXDLIN( 312)				if (::hx::IsNull( contents->_children )) {
HXLINE( 312)					_hx_tmp2 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 312)					_hx_tmp2 = contents->_children;
            				}
HXDLIN( 312)				this->removeRenderer(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(_hx_tmp2->__get(0).StaticCast<  ::haxe::ui::core::Component >()),false);
HXLINE( 313)				++this->_firstIndex;
            			}
            			_hx_goto_20:;
            		}
HXLINE( 317)		if ((this->_lastIndex >= 0)) {
HXLINE( 318)			while(true){
HXLINE( 318)				bool _hx_tmp;
HXDLIN( 318)				::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 318)				if (::hx::IsNull( contents->_children )) {
HXLINE( 318)					_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 318)					_hx_tmp1 = contents->_children;
            				}
HXDLIN( 318)				if ((_hx_tmp1->length > 0)) {
HXLINE( 318)					::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 318)					if (::hx::IsNull( contents->_children )) {
HXLINE( 318)						_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 318)						_hx_tmp1 = contents->_children;
            					}
HXDLIN( 318)					::Array< ::Dynamic> _hx_tmp2;
HXDLIN( 318)					if (::hx::IsNull( contents->_children )) {
HXLINE( 318)						_hx_tmp2 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 318)						_hx_tmp2 = contents->_children;
            					}
HXDLIN( 318)					_hx_tmp = !(this->isRendererVisible(_hx_tmp1->__get((_hx_tmp2->length - 1)).StaticCast<  ::haxe::ui::core::Component >()));
            				}
            				else {
HXLINE( 318)					_hx_tmp = false;
            				}
HXDLIN( 318)				if (!(_hx_tmp)) {
HXLINE( 318)					goto _hx_goto_21;
            				}
HXLINE( 319)				::Array< ::Dynamic> _hx_tmp2;
HXDLIN( 319)				if (::hx::IsNull( contents->_children )) {
HXLINE( 319)					_hx_tmp2 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 319)					_hx_tmp2 = contents->_children;
            				}
HXDLIN( 319)				::Array< ::Dynamic> _hx_tmp3;
HXDLIN( 319)				if (::hx::IsNull( contents->_children )) {
HXLINE( 319)					_hx_tmp3 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 319)					_hx_tmp3 = contents->_children;
            				}
HXDLIN( 319)				this->removeRenderer(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(_hx_tmp2->__get((_hx_tmp3->length - 1)).StaticCast<  ::haxe::ui::core::Component >()),false);
HXLINE( 320)				--this->_lastIndex;
            			}
            			_hx_goto_21:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualLayout_obj,removeInvisibleRenderers,(void))

bool VirtualLayout_obj::isRendererVisible( ::haxe::ui::core::Component renderer){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_325_isRendererVisible)
HXLINE( 326)		if (::hx::IsNull( renderer )) {
HXLINE( 327)			return false;
            		}
HXLINE( 329)		bool _hx_tmp;
HXDLIN( 329)		bool _hx_tmp1;
HXDLIN( 329)		 ::Dynamic _hx_tmp2 = renderer->get_top();
HXDLIN( 329)		if (::hx::IsLess( _hx_tmp2,this->_component->get_componentHeight() )) {
HXLINE( 330)			 ::Dynamic _hx_tmp = renderer->get_top();
HXLINE( 329)			_hx_tmp1 = ((_hx_tmp + renderer->get_componentHeight()) >= 0);
            		}
            		else {
HXLINE( 329)			_hx_tmp1 = false;
            		}
HXDLIN( 329)		if (_hx_tmp1) {
HXLINE( 331)			 ::Dynamic _hx_tmp1 = renderer->get_left();
HXLINE( 329)			_hx_tmp = ::hx::IsLess( _hx_tmp1,this->_component->get_componentWidth() );
            		}
            		else {
HXLINE( 329)			_hx_tmp = false;
            		}
HXDLIN( 329)		if (_hx_tmp) {
HXLINE( 332)			 ::Dynamic _hx_tmp = renderer->get_left();
HXDLIN( 332)			return ((_hx_tmp + renderer->get_componentWidth()) >= 0);
            		}
            		else {
HXLINE( 329)			return false;
            		}
HXDLIN( 329)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VirtualLayout_obj,isRendererVisible,return )

bool VirtualLayout_obj::isIndexVisible(int index){
            	HX_STACKFRAME(&_hx_pos_878b513f172e5809_336_isIndexVisible)
HXDLIN( 336)		if ((index >= this->_firstIndex)) {
HXDLIN( 336)			return (index <= this->_lastIndex);
            		}
            		else {
HXDLIN( 336)			return false;
            		}
HXDLIN( 336)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VirtualLayout_obj,isIndexVisible,return )


::hx::ObjectPtr< VirtualLayout_obj > VirtualLayout_obj::__new() {
	::hx::ObjectPtr< VirtualLayout_obj > __this = new VirtualLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VirtualLayout_obj > VirtualLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VirtualLayout_obj *__this = (VirtualLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VirtualLayout_obj), true, "haxe.ui.layouts.VirtualLayout"));
	*(void **)__this = VirtualLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VirtualLayout_obj::VirtualLayout_obj()
{
}

void VirtualLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VirtualLayout);
	HX_MARK_MEMBER_NAME(_firstIndex,"_firstIndex");
	HX_MARK_MEMBER_NAME(_lastIndex,"_lastIndex");
	HX_MARK_MEMBER_NAME(_rendererPool,"_rendererPool");
	HX_MARK_MEMBER_NAME(_sizeCache,"_sizeCache");
	HX_MARK_MEMBER_NAME(contents,"contents");
	HX_MARK_MEMBER_NAME(itemWidth,"itemWidth");
	HX_MARK_MEMBER_NAME(_firstPass,"_firstPass");
	HX_MARK_MEMBER_NAME(itemHeight,"itemHeight");
	HX_MARK_MEMBER_NAME(itemCount,"itemCount");
	HX_MARK_MEMBER_NAME(_lastItemRenderer,"_lastItemRenderer");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VirtualLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_firstIndex,"_firstIndex");
	HX_VISIT_MEMBER_NAME(_lastIndex,"_lastIndex");
	HX_VISIT_MEMBER_NAME(_rendererPool,"_rendererPool");
	HX_VISIT_MEMBER_NAME(_sizeCache,"_sizeCache");
	HX_VISIT_MEMBER_NAME(contents,"contents");
	HX_VISIT_MEMBER_NAME(itemWidth,"itemWidth");
	HX_VISIT_MEMBER_NAME(_firstPass,"_firstPass");
	HX_VISIT_MEMBER_NAME(itemHeight,"itemHeight");
	HX_VISIT_MEMBER_NAME(itemCount,"itemCount");
	HX_VISIT_MEMBER_NAME(_lastItemRenderer,"_lastItemRenderer");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VirtualLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contents") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_contents() : contents ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_itemWidth() : itemWidth ); }
		if (HX_FIELD_EQ(inName,"itemCount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_itemCount() : itemCount ); }
		if (HX_FIELD_EQ(inName,"itemClass") ) { return ::hx::Val( itemClass_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastIndex") ) { return ::hx::Val( _lastIndex ); }
		if (HX_FIELD_EQ(inName,"_sizeCache") ) { return ::hx::Val( _sizeCache ); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		if (HX_FIELD_EQ(inName,"_firstPass") ) { return ::hx::Val( _firstPass ); }
		if (HX_FIELD_EQ(inName,"itemHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_itemHeight() : itemHeight ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_firstIndex") ) { return ::hx::Val( _firstIndex ); }
		if (HX_FIELD_EQ(inName,"refreshData") ) { return ::hx::Val( refreshData_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRenderer") ) { return ::hx::Val( getRenderer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_contents") ) { return ::hx::Val( get_contents_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateScroll") ) { return ::hx::Val( updateScroll_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_rendererPool") ) { return ::hx::Val( _rendererPool ); }
		if (HX_FIELD_EQ(inName,"get_itemWidth") ) { return ::hx::Val( get_itemWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_itemCount") ) { return ::hx::Val( get_itemCount_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_itemHeight") ) { return ::hx::Val( get_itemHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return ::hx::Val( removeRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"isIndexVisible") ) { return ::hx::Val( isIndexVisible_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_lastItemRenderer") ) { return ::hx::Val( _lastItemRenderer ); }
		if (HX_FIELD_EQ(inName,"isRendererVisible") ) { return ::hx::Val( isRendererVisible_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"refreshVirtualData") ) { return ::hx::Val( refreshVirtualData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"refreshNonVirtualData") ) { return ::hx::Val( refreshNonVirtualData_dyn() ); }
		if (HX_FIELD_EQ(inName,"calculateRangeVisible") ) { return ::hx::Val( calculateRangeVisible_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"removeInvisibleRenderers") ) { return ::hx::Val( removeInvisibleRenderers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VirtualLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contents") ) { contents=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemWidth") ) { itemWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemCount") ) { itemCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastIndex") ) { _lastIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sizeCache") ) { _sizeCache=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_firstPass") ) { _firstPass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemHeight") ) { itemHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_firstIndex") ) { _firstIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_rendererPool") ) { _rendererPool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_lastItemRenderer") ) { _lastItemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VirtualLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_firstIndex",e1,b1,7c,ce));
	outFields->push(HX_("_lastIndex",9d,44,64,66));
	outFields->push(HX_("_rendererPool",9e,62,1f,58));
	outFields->push(HX_("_sizeCache",82,89,4d,9b));
	outFields->push(HX_("contents",1a,05,24,2f));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	outFields->push(HX_("itemWidth",f3,1b,4e,ca));
	outFields->push(HX_("_firstPass",e2,dc,c2,5c));
	outFields->push(HX_("itemHeight",5a,d1,59,f0));
	outFields->push(HX_("itemCount",bc,aa,4e,4a));
	outFields->push(HX_("_lastItemRenderer",4b,7f,50,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VirtualLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VirtualLayout_obj,_firstIndex),HX_("_firstIndex",e1,b1,7c,ce)},
	{::hx::fsInt,(int)offsetof(VirtualLayout_obj,_lastIndex),HX_("_lastIndex",9d,44,64,66)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(VirtualLayout_obj,_rendererPool),HX_("_rendererPool",9e,62,1f,58)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(VirtualLayout_obj,_sizeCache),HX_("_sizeCache",82,89,4d,9b)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(VirtualLayout_obj,contents),HX_("contents",1a,05,24,2f)},
	{::hx::fsFloat,(int)offsetof(VirtualLayout_obj,itemWidth),HX_("itemWidth",f3,1b,4e,ca)},
	{::hx::fsBool,(int)offsetof(VirtualLayout_obj,_firstPass),HX_("_firstPass",e2,dc,c2,5c)},
	{::hx::fsFloat,(int)offsetof(VirtualLayout_obj,itemHeight),HX_("itemHeight",5a,d1,59,f0)},
	{::hx::fsInt,(int)offsetof(VirtualLayout_obj,itemCount),HX_("itemCount",bc,aa,4e,4a)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(VirtualLayout_obj,_lastItemRenderer),HX_("_lastItemRenderer",4b,7f,50,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VirtualLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VirtualLayout_obj_sMemberFields[] = {
	HX_("_firstIndex",e1,b1,7c,ce),
	HX_("_lastIndex",9d,44,64,66),
	HX_("_rendererPool",9e,62,1f,58),
	HX_("_sizeCache",82,89,4d,9b),
	HX_("contents",1a,05,24,2f),
	HX_("get_contents",23,b9,3d,e4),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("itemWidth",f3,1b,4e,ca),
	HX_("get_itemWidth",ca,ef,b1,8b),
	HX_("_firstPass",e2,dc,c2,5c),
	HX_("itemHeight",5a,d1,59,f0),
	HX_("get_itemHeight",a3,59,4f,66),
	HX_("itemCount",bc,aa,4e,4a),
	HX_("get_itemCount",93,7e,b2,0b),
	HX_("refresh",db,d9,20,ed),
	HX_("refreshData",a5,e5,fe,36),
	HX_("_lastItemRenderer",4b,7f,50,82),
	HX_("refreshNonVirtualData",03,49,63,5c),
	HX_("refreshVirtualData",ba,a7,9e,93),
	HX_("calculateRangeVisible",bb,3e,3d,b4),
	HX_("updateScroll",f6,7e,28,47),
	HX_("itemClass",25,de,43,48),
	HX_("getRenderer",f9,87,cf,d8),
	HX_("removeRenderer",a7,01,32,7d),
	HX_("removeInvisibleRenderers",47,f6,95,6a),
	HX_("isRendererVisible",a5,fc,2f,fa),
	HX_("isIndexVisible",8a,4a,28,e4),
	::String(null()) };

::hx::Class VirtualLayout_obj::__mClass;

void VirtualLayout_obj::__register()
{
	VirtualLayout_obj _hx_dummy;
	VirtualLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.VirtualLayout",fe,f1,2e,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VirtualLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VirtualLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VirtualLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VirtualLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
